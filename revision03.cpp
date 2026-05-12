#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        
        int neg=0,pos=0;
        for(int x : v){
            if(x>0)pos++;
            else neg++;
        }
        
        if(pos==0)cout<<neg<<"\n";
        else if(pos==neg || neg==0)cout<<"0\n";
        else if(neg>pos)cout<<"1"<<"\n";
    }
}
