#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,f=0,l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            f=1;
            break;
        }
    }
    if(f==1)
    cout<<"YES";
    else
    cout<<"NO";
}