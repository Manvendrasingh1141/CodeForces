


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,s=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int x : v)sum+=x;
        sort(v.begin(),v.end());
        bool flag=false;
        for(int i=0;i<v.size();i++){
            s+=v[i];
            if((s%2==0 && (sum-s)%2==0 ) || (s%2!=0 && (sum-s)%2!=0)){
                flag=true;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}



















