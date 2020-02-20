#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long i,a[n],maxc=0,temp=1;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            temp++;
        }
        else
        {
            if(maxc<temp)
            maxc=temp;
            temp=1;
            
        }
        
    }
    if(maxc<temp)
    maxc=temp;
    cout<<maxc;
}