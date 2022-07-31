#include <bits/stdc++.h>
using namespace std;

void subString(string s, int n)
{
}

int main()
{
    string s;
    cin >> s;
    int start;
    int end;
    string subStr;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A')
        {
            start = i;
            for (; i < len; i++)
            {
                if (s[i] == 'Z')
                {
                    end = i;
                }
            }
        }
    }
    cout << end - start + 1 << endl;
    return 0;
}