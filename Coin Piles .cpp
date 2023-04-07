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
void solve()
{
    int i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    l=min(n,m);
    r=max(n,m);
    if(2*l==r)
    {
        cout<<"YES"<<"\n";
    }
    else if(2*l<r)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        ll a,b;
        a=l%3;
        b=r%3;
        if(a==0&&b==0)
        {
            cout<<"YES"<<"\n";
        }
        else if(a==1&&b==2)
        {
            cout<<"YES"<<"\n";
        }
        else if(a==2&&b==1)
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";

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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
