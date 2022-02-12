#include<bits/stdc++.h>
using namespace std;
long x, n, a[10000], b[10000], i, j, k = 0, rmin;
int main()
{
    freopen("DPRES.inp","r",stdin);
    freopen("DPRES.out","w",stdout);
	cin>>n;
	for(i=0;i<n;i++)
		cin >> a[i];
	x=n*(n-1)/2;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			b[k]=a[i]-a[j];
			k++;
		}
	for(i=0;i<x;i++)
		b[i]=abs(b[i]);
	rmin=b[0];
	for(i=1;i<x;i++)
	{
		if(b[i]<rmin)
			rmin=b[i];
		}
	cout<<rmin;
	return 0;
}
