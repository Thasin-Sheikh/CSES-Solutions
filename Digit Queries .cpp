///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll digit[30];
ll st[30];
ll num[30];
ll ok(ll m)
{
    ll i,pre=0;
    for(i=0;i<=18;i++)
    {
        if(num[i]>m)
        {
            break;
        }
        pre=i;
    }
    ll tot=digit[pre]+(m-num[pre])*(pre+1);
    return tot;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    k=1;
    num[0]=digit[0]=0;
    for(i=1; i<=18; i++)
    {
        digit[i]=digit[i-1]+i*k*9;
        num[i]=k*9+num[i-1];
        k*=10;
    }
    cin>>q;
    while(q--)
    {
        cin>>n;
        l=0,r=1000000000000000000;
        ans=0;
        while(l<=r)
        {
            m=(l+r)/2;
            ll val=ok(m);
            if(val<n)
            {
                ans=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        n-=ok(ans);
        ans++;
        string s=to_string(ans);
        cout<<s[n-1]<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

