#include<stdio.h>
#include<iostream>
#include<string.h>
#include<vector>
#define MOD 1000000007
using namespace std;
#include<map>
using ll=long long int;
ll dp[505][100000],n;
ll ddp(ll cur,ll cursum)
{
    ll i,j,k;
    if(cur>n)
    {
        return 0;
    }
    if(dp[cur][cursum]!=-1)
    {
        return dp[cur][cursum];
    }
    if(cursum==0)
    {
        return 1;
    }
    ll ans=0;
    if(cur<=cursum)
    {
        ans+=ddp(cur+1,cursum-cur)%MOD;
    }
    ans+=ddp(cur+1,cursum)%MOD;
    return dp[cur][cursum]=ans%MOD;
}
void solve()
{
    ll i,k,a;
    cin>>n;
    a=(n*(n+1))/2;
    if(a%2)
    {
        cout<<0<<"\n";
        return ;
    }
    memset(dp,-1,sizeof dp);
    ll ans=ddp(1,a/2);
    cout<<ans%MOD<<"\n";

}
int main()
{
    int a,b,c,d,i,j,k,n;
    int t;
    t=1;
    while(t--)
    {
        solve();
    }

}

