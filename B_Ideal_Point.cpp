// OWAIS THE GREAT

#include <bits/stdc++.h>
using namespace std;
void done()
{
    int n, k;
    cin >> n >> k;
    int a, b;
    unordered_map<int, int> mp;
    while (n > 0)
    {
        cin >> a >> b;
        if (a > k || b < k)
        {
            n--;
            continue;
        }
        for (int i = a; i <= b; i++)
        {
            mp[i]++;
        }
        n--;
    }
    if(mp[k]==0){
        cout<<"NO";
        return;
    }
    // cout<<mp.size();
       for(auto it : mp){
        // cout<<it.first<<" "<<it.second<<endl;
        if(mp[k] <= it.second && k!=it.first){
            cout<<"NO";
            return;
        }
       }

    cout << "YES";
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