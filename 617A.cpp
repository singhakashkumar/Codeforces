#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll c=0;
    for(int i=5;i>=1;i--)
    {
        c+=(n/i);
        n=n%i;
    
    }
    cout<<c;
}