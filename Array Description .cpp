///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
const long long  maxval=1e18;
const long long minval=-1e18;
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
bool sortbyCond(const pair<ll, ll>& a,const pair<ll, ll>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//priority_queue<ll>pq;// from max to min
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
unordered_map<ll,ll>ump;
ll dp[100005][105],n,m,last;
void solve()
{
    ll i,j,k,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    last=-1;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];

    }
    if(aarray[1]!=0)
    {
        dp[1][aarray[1]]=1;
    }
    else
    {
        for(i=1; i<=m; i++)
        {
            dp[1][i]=1;
        }
    }

    ans=0;
    for(i=2; i<=n; i++)
    {
        if(aarray[i]==0)
        {
            for(j=1; j<=m; j++)
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
                dp[i][j]%=MOD;


            }
        }
        else
        {
            dp[i][aarray[i]]=dp[i-1][aarray[i]-1]+dp[i-1][aarray[i]]+dp[i-1][aarray[i]+1];
            dp[i][aarray[i]]%=MOD;

        }
    }
    if(aarray[n])
    {
        ans=dp[n][aarray[n]];
    }
    else
    {
        for(i=1;i<=m;i++)
        {
            ans+=dp[n][i];
            ans%=MOD;
        }
    }
    ans%=MOD;
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

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




