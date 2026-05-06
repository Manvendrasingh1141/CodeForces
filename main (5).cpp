#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;

        while(x.size() <= 50){   
            if(x.find(s) != string::npos){
                cout << count << "\n";
                break;
            }
            x = x + x;  
            count++;
        }

        if(x.find(s) == string::npos){
            cout << -1 << "\n";
        }
    }
}