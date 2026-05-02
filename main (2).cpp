#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxfuel=v[0]-0;
        maxfuel=max(maxfuel,2*(x-v[v.size()-1]));
        for(int i=0;i<v.size()-1;i++){
            maxfuel = max(maxfuel,v[i+1]-v[i]);
        }
        cout<<maxfuel<<endl;
        
    }
}