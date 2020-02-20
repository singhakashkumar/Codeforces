#include<iostream>
#include<stack>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c=0;
    ll i,j;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            string t=to_string(i);
            t+=to_string(j);
            if(to_string((i*j)+i+j)==t)
            {   c++;}//cout<<i<<" "<<j<<"\n";}
        }
    }
    cout<<c<<"\n";
    ll val=floor(log10(b));
        cout<<a*val<<"\n";
    return 0;
}