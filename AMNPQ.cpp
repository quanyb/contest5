#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d,maxa,maxb,maxc,maxd;
int tichso(int u)
{
    long long s=1;
    while(u!=0)
    {
        long long j=u%10;
        u=u/10;
        s*=j;
    }
    return s;
}
int main()
{
    freopen("AMNPQ.inp","r",stdin);
    freopen("AMNPQ.out","w",stdout);
    cin>>a>>b>>c>>d;
    maxa=tichso(a);
    maxb=tichso(b);
    maxc=tichso(c);
    maxd=tichso(d);
    cout<<max(max(max(maxa,maxb),maxc),maxd);
    return 0;
}
