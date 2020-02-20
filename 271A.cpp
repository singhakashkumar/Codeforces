#include<bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    set<int> s;
    while(n)
    {
        if(s.find(n%10)==s.end())
        {
            s.insert(n%10);
            n=n/10;
        }
        else
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    long long n,i;
    cin>>n;
    for(i=n+1;;i++)
    {
        if(check(i)==1)
        {
            cout<<i;
            break;
        }
    }
}