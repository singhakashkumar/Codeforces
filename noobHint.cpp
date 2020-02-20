#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a,b,i,j;
    cin>>a>>b;
    for(i=0;i<=a;i++)
    for(j=0;j<=b;j++)
    if(i*j == i+j)
    cout<<i<<" "<<j<<"\n";
    return 0;
    
}