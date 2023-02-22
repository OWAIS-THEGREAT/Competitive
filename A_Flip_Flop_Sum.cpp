//OWAIS THE GREAT

#include<bits/stdc++.h>
using namespace std;
void done(){
   long long int n;
   cin>>n;
   long long int a[n];
   long long int cnt=0;
   long long int dou = 0;
   int f=0;
   int sum = 0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==-1){
        cnt++;
    }
    sum+=a[i];
   }
   for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1] && a[i]!=1){
        f=1;
    }
   }
   if(cnt==0){
    cout<<sum-4;
    return;
   }
   if(f==1){
    cout<<sum+4;
    return;
   }
   else{
    cout<<sum;
    return;
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