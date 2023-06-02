// OWAIS THE GREAT

#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
void done()
{
    int n;
    cin >> n;
    int a[n], b[n];
    vector<int> res1, res2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    int j = 0;
    while (i != n && j != n)
    {
        if (a[i] != b[j])
        {
            res1.push_back(a[i]);
            i++;
        }
        else
        {
            res1.push_back(b[j]);
            j++;
        }
    }

    while (i != n)
    {
        res1.push_back(a[i]);
        i++;
    }
    while (j != n)
    {
        res1.push_back(b[j]);
        j++;
    }

    i = 0;
    j = 0;
    while (i != n && j != n)
    {
        if (a[i] != b[j])
        {
            res2.push_back(b[j]);
            j++;
        }
        else
        {
            res2.push_back(a[i]);
            i++;
        }
    }
    while (i != n)
    {
        res2.push_back(a[i]);
        i++;
    }
    while (j != n)
    {
        res2.push_back(b[j]);
        j++;
    }
    int mx1 = 0;
    int cnt = 0;
    for (int i = 0; i < res1.size() - 1; i++)
    {
        if (res1[i] == res1[i + 1])
        {
            cnt++;
            mx1 = max(mx1, cnt);
            
        }
        else
        {
            
            cnt = 0;
        }
    }

    int mx2 = 0;
    cnt = 0;
    for (int i = 0; i < res2.size() - 1; i++)
    {
        if (res2[i] == res2[i + 1])
        {
            // cout<<"here";
            cnt++;
            mx2 = max(mx2, cnt);
        }
        else
        {
            
            cnt = 0;
        }
    }
    // print(res1);
    // cout<<endl;
    mx1++;
    mx2++;
    cout<<max(mx1,mx2);
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