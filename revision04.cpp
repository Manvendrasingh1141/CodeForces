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
        
        int j=0,cnt=0,maxx=0;
        if(n==1 && v[0]==0)maxx=1;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                cnt++;
            }else{
                maxx=max(cnt,maxx);
                cnt=0;
            }
        }
        cout<<maxx<<"\n";
    }
}
