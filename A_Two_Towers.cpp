// OWAIS THE GREAT

#include <bits/stdc++.h>
using namespace std;
void done()
{
    int a, b;
    cin >> a >> b;
    string s1, s2;
    cin >> s1 >> s2;
    int irr1 = 0;
    int irr2 = 0;
    int t;
    int f = 0;
    for (int i = 0; i < a - 1; i++)
    {
        if (s1[i] == s1[i + 1])
        {
            irr1++;
            t = i;
        }
    }
    for (int i = 0; i < b - 1; i++)
    {
        if (s2[i] == s2[i + 1])
        {
            irr2++;
            t = i;
        }
    }
    if (irr1 + irr2 == 0)
    {
        cout << "YES";
        return;
    }
    else if (irr1 + irr2 > 1)
    {
        cout << "NO";
        return;
    }
    else
    {
        if (irr1 > 0)
        {
            if (s1[a - 1] == s2[b - 1])
            {
                cout << "NO";
                return;
            }
            else
            {
                for (int i = a - 1; i > t; i--)
                {
                    s2.push_back(s1[i]);
                    s1.pop_back();
                }
                // cout << s2;
                for (int i = 0; i < s2.size()-1; i++)
                {
                    if (s2[i] == s2[i + 1])
                    {
                        f = 1;
                        break;
                    }
                }
                if (f)
                {
                    cout << "NO";
                }
                else
                    cout << "YES";
            }
        }
        else
        {
            if (s2[b - 1] == s1[a - 1])
            {
                cout << "NO";
                return;
            }
            else
            {
                for (int i = b - 1; i > t; i--)
                {
                    s1.push_back(s2[i]);
                    s2.pop_back();
                }
                // cout << s1;
                for (int i = 0; i < s1.size()-1; i++)
                {
                    if (s1[i] == s1[i + 1])
                    {
                        f = 1;
                        break;
                    }
                }
                if (f)
                {
                    cout << "NO";
                }
                else
                    cout << "YES";
            }
        }
    }
    // cout << s2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        done();
        cout << endl;
    }
    return 0;
}