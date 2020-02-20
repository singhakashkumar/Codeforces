#include<iostream>
#include<vector>
using namespace std;
bool check(int n)
{
    int i,f=0;
    while(n)
    {
        if(n%10 == 4 || n%10 == 7)
        {
            f=0;
        }
        else
        {
        
            f=1;
            break;
        }
        n=n/10;
    }
    if(f)return false;
    return true;
}
int main()
{
    int n,i;
    cin>>n;
    vector <int> v;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0){
        v.push_back(i);
        v.push_back(n/i);
        }
    }
    int f=0;
    for(i=0;i<v.size();i++)
    {
        if(check(v[i]))
        {
            f=1;
            break;
        }
    }
    if(f)
    cout<<"YES";
    else
    cout<<"NO";

}