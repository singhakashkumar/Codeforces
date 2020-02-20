#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l=s.length(),c=0,sm=0;
    for(i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        sm++;
        else if(s[i]>='A' && s[i]<='Z')
        c++;
    }
    if(sm>=c)
    transform(s.begin(),s.end(),s.begin(),::tolower);
    else
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
}