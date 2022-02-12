#include<bits/stdc++.h>
using namespace std;
int daoso(long long n)
{
    long long x,s=0;
    while (n!=0)
    {
        x=n%10;
        n/=10;
        s=s*10+x;
    }
    return s;
}
int main()
{
    freopen("BSPR.inp","r",stdin);
    freopen("BSPR.out","w",stdout);
    long long n,i,d=0;
    cin>>n;
    for(i=1;i<=n;i++)
        if(daoso(i)==i)
            d++;
    cout<<d<<endl;
    for(i=n;i>=1;i--)
        if(daoso(i)==i)
            cout<<i<<" ";
    return 0;
}
