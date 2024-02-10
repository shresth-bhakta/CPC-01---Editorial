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
    int n,a,b; cin >> n >> a >> b;
    vector<int> prefix(n+1,0);

    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = x + prefix[i-1];
    }

    multiset<int> m;

    int ans = -1e18;

    for(int i = a; i <= n; i++){
        if(i > b){
            m.erase(m.find(prefix[i-b-1]));
        }

        m.insert(prefix[i-a]);
        ans = max(ans, prefix[i] - *m.begin());
    }

    cout << ans << endl;
}