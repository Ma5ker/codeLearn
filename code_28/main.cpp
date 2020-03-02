#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.length() == 0)
			return 0;
		int i = 0;
		int j = 0;
		while (i < haystack.length() && j < needle.length())
		{
			if (haystack[i] == needle[j])
			{
				//①如果当前字符匹配成功则i++，j++      
				i++;
				j++;
			}
			else
			{
				//②如果失配, 令i = i - (j - 1)，j = 0      
				i = i - j + 1;
				j = 0;
			}
		}
		//匹配成功，否则返回-1  
		if (j == needle.length())
			return i - j;
		else
			return -1;
	}

};
int main() {
	return 0;
}