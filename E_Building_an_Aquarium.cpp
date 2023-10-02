// بسم الله الرحمن الرحيم
// Author : Rakibul Islam
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define inn cin >> n
#define ins cin >> s
#define nl endl
#define ll long long int
#define Pair pair<ll, ll>
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Max 99999999999999999999
#define Min -1000000000000000014
#define mod 1000000007
#define range 100007
#define pb push_back
#define Vector vector<ll>
#define PI 3.1415926535897

//--------------------RAW CODE--------------------


void solve()
{
   
    ll n, w, ans = -1;
    cin >> n >> w;
    Vector v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

   
    ll low = 1, high = 1e10, mid;
    while (  low < high - 1)
    {
        ll rem=0;
         mid = low + (high-low) / 2LL;
         for (int i = 0; i < n; i++)
    {
         if(mid > v[i])
         rem += (mid - v[i]);
    }
        if (rem>w)
        {
            high = mid; 
           // cout <<low <<" "<<mid<<" "<<  high << endl;
        }
        else
            low = mid;
    }
    cout << low << endl;
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}