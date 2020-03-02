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
				//�������ǰ�ַ�ƥ��ɹ���i++��j++      
				i++;
				j++;
			}
			else
			{
				//�����ʧ��, ��i = i - (j - 1)��j = 0      
				i = i - j + 1;
				j = 0;
			}
		}
		//ƥ��ɹ������򷵻�-1  
		if (j == needle.length())
			return i - j;
		else
			return -1;
	}

};
int main() {
	return 0;
}