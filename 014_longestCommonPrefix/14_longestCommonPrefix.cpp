#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string retVal;
		char cc;

        if (strs.empty())
        	return "";

        for(int i = 0; i < strs[0].size(); i++){
        	cc = strs[0][i];						// comparing coordinate
        	for(int j = 1; j < strs.size(); j++) {
				if(('\0' == strs[j][i]) || (cc != strs[j][i]))	// if item is empty or not equal
					return retVal;
			}
			retVal += cc;
        	cout << "retVal = " << retVal << endl;
		}
		return retVal;
    }
};

int main()
{
    Solution solution;

    vector <string>strArry;
    strArry.push_back("aewra");
    strArry.push_back("aewraewaay");
    strArry.push_back("aewraaya232a");


    //print every string.
	for(vector<string>::iterator item = strArry.begin(); item < strArry.end(); item++)
	{
		cout << *item << endl;
	}
	cout << "-------------------------------" << endl;
    string answ = solution.longestCommonPrefix(strArry);
    cout << "comman part is : " << answ;
    return 0;
}