#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];


    long long minn = INT_MAX;
    for (int i = 0; i < n; i++) 
        minn = min(minn, abs(a[i]));
    
    cout << minn << endl;
    return 0;
}
