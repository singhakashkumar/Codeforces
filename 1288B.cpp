    #include<iostream>
    #include<stack>
    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            ll a,b,m=0;
            //ll val;
            cin>>a>>b;
            string c=to_string(b);
            for(ll i=0;i<c.length();i++)
            if(c[i]!='9')
            {
                m=1;
                break;
            }
            if(m==0)
            cout<<a*c.length();
            else
            {
                cout<<a*(c.length()-1);
            }
            
            //val=floor(log10(b));
            cout<<"\n";
        }
        return 0;
    }