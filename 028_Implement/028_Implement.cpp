#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int strStr(string &haystack, string &needle);
};
int main() {

	Solution solution;

//	string haystack("a");
//	string needle("a");
//	string haystack("aaaa");
//	string needle("bba");
	string haystack("abdafaw");
	string needle("daf");

	int positon = solution.strStr(haystack, needle);

	std::cout << "first positon is : " << positon << endl;
	return 0;
}

int Solution::strStr(string &haystack, string &needle)
{
	if (needle.empty())
		return 0;
	if(haystack.empty())
		return -1;

	char *pStart = NULL;
	char *pEnd = NULL;
	int startPosition = -1;

	// 防止指针访问超界，访问最大值为 haystack.length() - needle.size()
	for (int index = 0; index < haystack.length(); index++){
		if(haystack[index] == needle[0])
		{
			pStart = &haystack[index];
			pEnd = pStart;

			int i = 0;
			while ((*pEnd++ == needle[i]) && (i < needle.size()))
			{
				i++;
			}
			if(i == needle.size())
			{
				startPosition = index;
				return startPosition;
			}
		}
	}
	return startPosition;
}