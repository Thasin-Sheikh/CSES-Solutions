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
ll pos[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        pos[aarray[i]]=i;
    }
    ans=1;
    for(i=1; i<=n; i++)
    {
        if(pos[i]<pos[i-1])
        {
            ans++;
        }
    }
    while(m--)
    {
        cin>>a>>b;
        c=aarray[a];
        d=aarray[b];
        if(pos[c]>pos[c+1])
        {
            ans--;
        }
        if((c-1)!=0&&pos[c-1]>pos[c])
        {
            ans--;
        }
        if((d-1)!=0&&pos[d-1]>pos[d])
        {
            ans--;
        }
        if(pos[d]>pos[d+1])
        {
            ans--;
        }
        if(abs(c-d)==1&&pos[min(c,d)]>pos[max(c,d)])
        {
            ans++;
        }
      // cout<<ans<<"\n";
        pos[c]=b;
        pos[d]=a;
        swap(aarray[a],aarray[b]);
        c=aarray[a];
        d=aarray[b];
        if(pos[c]>pos[c+1])
        {
            ans++;
        }
        if((c-1)!=0&&pos[c-1]>pos[c])
        {
            ans++;
        }
        if((d-1)!=0&&pos[d-1]>pos[d])
        {
            ans++;
        }
        if(pos[d]>pos[d+1])
        {
            ans++;
        }
        if(abs(c-d)==1&&pos[min(c,d)]>pos[max(c,d)])
        {
            ans--;
        }
        cout<<ans<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

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




