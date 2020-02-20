#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    cin>>a[i];
    //sort(a,a+n);
    int n1=0,n2=0,n3=0,n4=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        n1++;
        else if(a[i]==2)
        n2++;
        else if(a[i]==3)
        n3++;
        else if(a[i]==4)
        n4++;
    }
    int c=n4;
    
    int temp=min(n3,n1);
    c=c+min(n3,n1);
    n3=n3-temp;n1=n1-temp;
    if(n1==0)
    {
        c+=n3+(n2/2);
        n2=n2%2;
        c+=n2;
    }
    else
    {
        c+=(n2/2);
        n2=n2%2;
        temp=min(n2,n1/2);
        c+=temp;
        n2=n2-temp;
        n1=n1-(2*temp);
        /*c+=(n2/2)+n1;
        n2=n2%2;*/
        c+=(n1/4)+(n2/2);
        n1=n1%4;n2=n2%2;
        if(n1!=0 || n2!=0)
        c+=1;
    }
    cout<<c;
    


}