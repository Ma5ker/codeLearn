#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		/*������*/
		//if (s.size() == 0) {
		//	return 0;
		//}
		//int lethmax = 1;
		//for (int i = 0; i < s.size() - 1; i++) {
		//	set<char> tmp = {};
		//	tmp.insert(s[i]);
		//	for (int j = i + 1; j < s.size() + 1; j++) {

		//		//false
		//		if ((j == s.size()) || (!tmp.insert(s[j]).second)) {
		//			if (tmp.size() > lethmax) {
		//				lethmax = tmp.size();
		//			}
		//			break;
		//		}
		//	}
		//}
		//return lethmax;

		/*  �������ڷ�  ��Ȼ�ȱ����� ������set��mapǿ��ԭ���  */
		if (s.size() == 0) {
			return 0;
		}
		int lethmax = 1;
		for (int i = 0; i < s.size(); ) {
			map<char, int>tmp;
			//����i
			tmp.insert(pair<char,int>(s[i],i));
			for (int j = i + 1; j < s.size()+1; j++) {

				if (j == s.size()) {
					if (tmp.size() > lethmax) {
						lethmax = tmp.size();
					}
					return lethmax;
				}
				//�ҵ���
				if ( tmp.find(s[j])!=tmp.end() ) {
					if (tmp.size() > lethmax) {
						lethmax = tmp.size();
					}
					i = tmp.find(s[j])->second+1;
					break;
				}
				else {
					tmp.insert(pair<char, int>(s[j], j));
				}
			}
		}
		return lethmax;
	}
};
int main() {
	Solution sln;
	string a = "aab";
	int s = sln.lengthOfLongestSubstring(a);
	cout << s << endl;
}