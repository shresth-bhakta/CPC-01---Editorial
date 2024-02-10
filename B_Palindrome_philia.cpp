//Shresth's Template
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define fr0 for(int i=0; i<n; i++)
#define fr1 for(int i=1; i<=n; i++)
 
using namespace std;
 
int32_t main()
{
    string s; cin >>  s;
    int n = s.size();
    int ops = 0;
    for(int i = 0; i < (n+1)/2; i++){
        if(s[i] != s[n-i-1]) ops++;
    }

    cout << ops << endl;
}