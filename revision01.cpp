#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        
        int sum=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(sum==n){
                cout<<"YES\n";
                cout<<v.size()<<"\n";
                for(int j:v)cout<<j<<" ";
                break;
            }
            if(k!=x && sum+k<=n){
                v.push_back(k);
                sum+=k;
            }else{
                k--;
            }
        }
        if(sum!=n)cout<<"\nNO\n";
    }
}
