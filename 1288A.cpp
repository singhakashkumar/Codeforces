#include<iostream>
#include<stack>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll check(ll n,ll d)
{
    ll x=1,sum=0,t=sqrt(d);
    while(x<=t)
    {
        sum=x+ceil((double)d/(x+1));
        if(sum<=n)
        return 1;
        x++;


    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,d,f=0;
        cin>>n>>d;
        if(d<=n)
        f=1;
        else
        {
            f=check(n,d);
        }
        if(f==1)
        cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<"\n";
        
        
    }
    return 0;
}