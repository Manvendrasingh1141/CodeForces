


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int a=v[n-1];
        int b=v[n-2];
        while(b<=a){
            s++;
            b++;
            a--;
        }
        cout<<abs(s)<<"\n";
        
    }
}



















