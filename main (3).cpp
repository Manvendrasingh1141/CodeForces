#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int A=0,B=0,cnt=0;
        for(int i=0;i<10;i++){
            x=x+3;
            if((x+1)%3==0 || (x-1)%3==0){
                cnt=1;
                break;
            }
        }
        if(cnt==1)cout<<"First\n";
        else if(cnt==0) cout<<"Second\n";
    }
}