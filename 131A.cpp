#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;int f=0;
    cin>>s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            f=1;
            break;
        }
    }
    if(f==0){
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-'a'+'A';
            else if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]-'A'+'a';
        }
    //transform(s.begin(),s.end(),s.begin(),::tolower);
    //s[0]=s[0]-'a'+'A';
    }
    cout<<s;

}