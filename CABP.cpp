#include <bits/stdc++.h>
#define nmax 100007
using namespace std;
int f[nmax],c[nmax];
long long n,a[nmax];
void sangnt(int u)
{
    for(int i=1;i<=u;i++) f[i]=1;
    f[1]=0;
    for(int i=2;i*i<=u;i++)
        if(f[i]==1)
            for(int j=i;j*i<=u;j+=i)
                f[i*j] = 0;
}
bool snt(int u)
{
    if(u<=1) return false;
    if(u==2||u==3) return true;
    for(int i=2;i<=trunc(sqrt(u));i++)
        if(u%i==0) return false;
    return true;
}
int main()
{
    freopen("CARP.inp","r",stdin);
    freopen("CARP.out","w",stdout);
    long long rmin;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1; i<=n;i++)
        if(snt(a[i]))
        {
            c[i]=a[i];
            rmin=min(rmin,a[i]);
        }
    sort(c+1,c+n+1);
    cout<<c[n]-rmin;
    return 0;
}
