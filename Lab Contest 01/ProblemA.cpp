#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        bool isOne = true;
        bool isLoop = false;
        int len = s.length();
        
        for (int j = 0; j < len; j++)
        {
            if (s[j] == '1')
            {
                isLoop = true;
                while (j < len - 1)
                {
                    if (s[j] == '0')
                    {
                        if (s[j + 1] == '1')
                        {
                            isOne = false;
                            break;
                        }
                    }
                    j++;
                }
            }
            if (isOne == false)
            {

                break;
            }
        }
        if (isLoop == true && isOne == false)
        {
            cout << "NO" << endl;
        }
        else if (isLoop == false && isOne == true)
        {
            cout << "NO" << endl;
        }
        else if (isLoop == true && isOne == true)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}