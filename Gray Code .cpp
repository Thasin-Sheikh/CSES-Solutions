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
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<string>v;
    cin>>n;
    v.push_back("0");
    v.push_back("1");
    if(n==1)
    {
        cout<<v[0]<<"\n";
        cout<<v[1]<<"\n";
        return ;
    }
    for(i=2;i<(1<<n);i=i<<1)
    {
        for(j=i-1;j>=0;j--)
        {
            v.push_back(v[j]);
        }
        for(j=0;j<i;j++)
        {
            v[j]='0'+v[j];
        }
        for(j=i;j<2*i;j++)
        {
            v[j]='1'+v[j];
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\n";
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
