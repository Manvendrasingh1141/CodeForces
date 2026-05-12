#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>x>>k;
        
        int cnt=0,sum=0;
        for(int i=x;i>=0;i--){
            if(sum==x){cout<<cnt<<"\n";break;}
            if(i%k==1 && sum+i<=x){
                sum+=i;
                cnt++;
            }
        }
        if(x<k)cout<<"1\n";
    }
}
