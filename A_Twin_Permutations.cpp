//OWAIS THE GREAT

#include<bits/stdc++.h>
using namespace std;
void done(){
   int n;
   cin>>n;
   int arr[n];
   vector<int>v;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    v.push_back((n+1)-arr[i]);
   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   
}
int main(){
int t;
cin>>t;
while(t--){
done();
cout<<endl;
}
return  0;
}