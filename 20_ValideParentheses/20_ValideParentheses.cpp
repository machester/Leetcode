#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	bool isValiud(string s) {
		vector <char> cc;

		if (s.empty())
			return true;
		else if (0 != s.size() % 2)
			return false;
		for (int index = 0; index < s.size(); index++) {
			if (s[index] == '{' || s[index] == '[' || s[index] == '(')
				cc.push_back(s[index]);
			else {
				if (cc.empty())
					return false;
				if ((s[index] == '}') && (cc[cc.size() - 1] != '{'))
					return false;
				if ((s[index] == ']') && (cc[cc.size() - 1] != '['))
					return false;
				if ((s[index] == ')') && (cc[cc.size() - 1] != '('))
					return false;
				cc.pop_back();

			}
		}
		if (cc.empty)
			return true;
		else
			return true;
	}

};
int main() {
	Solution solution;
	string str("{{{((([[[]]])))}}}");
	cout << "str is : " << str << endl;

	bool ans = solution.isValiud(str);
	std::cout << "ans = " << boolalpha << ans << std::endl;
	return 0;
}