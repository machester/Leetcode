/*
* invert number and compare to the orignal number
* if equal return true else return false
* situation:
*	1. noun is always false,because of "-".
*	2. if number < 10, means also true.
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool isPalindrome(long int x) {
		vector<int> tempArry;
		long int tempX = 0;

		if (x < 0)
			return false;

		if (0 == (x / 10))
			return true;
		long int temp = x;
		while (temp) {
			tempArry.push_back(temp % 10);
			temp /= 10;
		}
		for (vector<int>::iterator item = tempArry.begin(); item != tempArry.end(); item++)
			cout << "---> " << *item;
		cout << endl;

		for (vector<int>::iterator item = tempArry.begin(); item != tempArry.end(); item++) {
			tempX += *item;
			tempX *= 10;
			cout << "tempX = " << tempX << endl;
		}
		tempX /= 10;
		cout << "tempX = " << tempX << endl;
		if (tempX == x)
			return true;
		else
			return  false;

	}
};

int main() {
	cout << "----------- start --------------" << endl;

	Solution solution;
	long int num;
	cout << "input a integet number : ";
	cin >> num;

	bool ans = solution.isPalindrome(num);
	cout << "answer is : " << ans << endl;
	return 0;
}