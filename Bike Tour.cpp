#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int n,cnt=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];	
		}		
		for(int i=1;i<n-1;i++)
		{
			if(a[i-1]<a[i] && a[i]>a[i+1])
			{
				cnt++;
			}
		}
	    cout<<"Case #"<<t+1<<": "<<cnt<<endl;
	}
	
	return 0;
}

