#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll check(ll a[],ll n,ll l,ll r,ll d)
{
    
    ll i=0,ele=r-i*d,sum=0;
    while(ele>=l )
    {
        
        sum+=a[ele-1];
        i++;
        ele=r-i*d;
    }
    
    return sum;
}
int main()
{
        ll n;
        cin>>n;
        ll i,a[n];
        for(i=0;i<n;i++)cin>>a[i];
        //for(i=0;i<n;i++)cout<<a[i]<<" ";
        //cout<<"\n";
        ll q;
        cin>>q;
        while(q--)
        {
            ll l,r,d,sum=0;
            cin>>l>>r>>d;
            cout<<check(a,n,l,r,d)<<"\n";
        }

}