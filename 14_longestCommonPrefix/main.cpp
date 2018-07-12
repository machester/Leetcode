#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string retVal = "\"\"";
        auto itemLenth = -1;
        auto miniItemLenth = 99999;
        auto length = strs.size();
        cout << "max size = " << length << endl;
        //check if any eletem is empty, find the minimal string
        //for(vector<string>::iterator strl = strs.begin(); strl != strs.end(); strl++){
        for(int index = 0; index < length; index++){
            itemLenth = strs[index].size();        //get inside item minial length
            miniItemLenth = (miniItemLenth > itemLenth) ? (itemLenth) : miniItemLenth;
                    cout << "miniLenth = " << miniItemLenth << endl;

            if('\0' == strs[index][0])  //if item first element is empty <==> string is empty
                return retVal;
        }
        int loopConuter = 0;
        int index;
        int sameLength = -1;
        bool trueFlag = true;
        char c;
        while (((index++) < miniItemLenth) && (trueFlag == true))
        {
            c = strs[index][loopConuter];
            for(index = 0; loopConuter < length; loopConuter++){

                if(c != strs[index][loopConuter])
                {
                    trueFlag = false;
                    break;
                }
            }
            retVal[loopConuter] = c;
            cout << "c = " << c << "--->";
            cout << endl;
        }
        return  retVal;
    }
};

int main()
{
    std::cout << "---------------- start --------------" << std::endl;
    Solution solution;

    vector <string>strArry;
    strArry.push_back("flower");
    strArry.push_back("flow");
    strArry.push_back("flight");

    cout << strArry[0] << endl;
    cout << strArry[1] << endl;
    cout << strArry[2] << endl;

    string answ = solution.longestCommonPrefix(strArry);
    cout << "comman part is : " << answ;
    return 0;
}