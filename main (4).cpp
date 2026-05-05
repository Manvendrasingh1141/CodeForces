#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>nums(x);
        for(int i=0;i<x;i++){
            cin>>nums[i];
        }
        vector<int>copy = nums;
        sort(copy.begin(),copy.end());
        
        for(int i=1;i<x-1;i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
        
        if(copy==nums)cout<<"YES\n";
        else cout<<"NO\n";
    }
}







