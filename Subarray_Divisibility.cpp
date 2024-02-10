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
    int n; cin >> n;
    vector<int> v(n);
    map<int,int> mp;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int psum = 0;
    mp[psum] = 1;
    for(auto &i : v){
        psum += i;
        mp[((psum%n)+n)%n]++;
    }

    int ans = 0;
    for(auto &i : mp){
        int x = i.second;
        ans += (x)*(x-1)/2;
    }

    cout << ans << endl;


}