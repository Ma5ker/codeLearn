#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	//我忘了 可以用string.find(" ")分割字符串 然后用string.find('.')分出域名 总之可以优化很多 我写太复杂了 不过先不管细节了
	vector<string> subdomainVisits(vector<string>& cpdomains) {
		vector<string> ret;
		map<string, int> site;
		for (auto be = cpdomains.begin(); be != cpdomains.end(); be++) {
			string count;
			vector<string> site_part;
			bool flag = true;
			auto i = (*be).begin();
			string tmp="";
			for (;i!=(*be).end();i++) {
				if (flag == true and (*i) >= 0x30 and (*i) <= 0x39) {
					count += (*i);
					continue;
				}
				if ((*i) == ' ') {
					flag = false;
					continue;
				}
				if ((*i) == '.') {
					for (auto j = site_part.begin(); j != site_part.end();j++) {
						*j = *j +'.'+tmp;
					}
					site_part.push_back(tmp);
					tmp = "";
					continue;
				}
				tmp += (*i);
			}
			for (auto j = site_part.begin(); j != site_part.end(); j++) {
				*j = *j + '.' + tmp;
			}
			site_part.push_back(tmp);
			for (auto k : site_part) {
				site[k] += atoi(count.c_str());
			}
		}
		for (auto i : site) {
			ret.push_back(std::to_string(i.second)+" "+i.first);
		}
		return ret;
	}
};
int main() {
	vector<string> cpdomains = { "900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org" };
	Solution sln;
	vector<string> ret = sln.subdomainVisits(cpdomains);
	return 0;
}