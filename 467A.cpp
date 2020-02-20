#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,c=0;
    for(i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        if((q-p)>=2)
        c++;
    }
    cout<<c;
}