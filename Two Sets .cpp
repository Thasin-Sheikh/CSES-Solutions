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
ll cnt[1000000+10];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    sum=(n*(n+1))/2;
    if(sum%2)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    ll mid=sum/2;
    p=0;
    for(i=n;i>=1;i--)
    {
        if(p+i<=mid)
        {
            v.push_back(i);
            cnt[i]++;
            p+=i;
        }
        else
        {
            v.push_back(mid-p);
            cnt[mid-p]++;
            break;
        }
        if(p==mid)
        {
            break;
        }
    }
    vector<ll>a;
    for(i=1;i<=n;i++)
    {
        if(cnt[i]==0)
        {
            a.push_back(i);

        }
    }
    cout<<"YES"<<"\n";
    cout<<v.size()<<"\n";
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<a.size()<<"\n";
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
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
