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
typedef tree<ll ,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
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
map<pair<ll,ll>,ll>mp,pp;
unordered_map<ll,ll>ump;
ll contains[N];//it contains other range
ll contained[N];//it belong in another range
ll a[N],b[N];
bool sortbyCond(const pair<pair<ll, ll>,ll>& a,pair<pair<ll, ll>,ll>& b)
{
    if (a.first.first!= b.first.first)
        return (a.first.first < b.first.first);
    else
       return (a.first.second > b.first.second);
}
map<ll,ll>cp;
ll ar[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<pair<pair<ll,ll>,ll>>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        v.push_back({{a[i],b[i]},i});
    }
    sort(v.begin(),v.end(),sortbyCond);
     ma=0;
     os s;
    for(i=0;i<v.size();i++)
    {
        c=v[i].first.second;
        d=v[i].first.first;
        if(s.size())
        {
            l=s.order_of_key(c);
            //cout<<c<<" "<<l<<"\n";
            r=s.size()-l;
            d=v[i].second;
            ar[d]=r;
        }
        s.insert(c);
    }
    s.clear();
    cp.clear();
    for(i=n-1;i>=0;i--)
    {
        c=v[i].first.second;
        d=v[i].first.first;
        if(s.size())
        {
            l=s.order_of_key(c);
          //  cout<<c<<" "<<l<<"\n";
          d=v[i].second;
            aarray[d]=l+cp[c];
        }
        cp[c]++;
        s.insert(c);
    }

    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
    }
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
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





