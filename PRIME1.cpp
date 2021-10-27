/*====================================
Auther:    Shyam Makwana
Problem:   PRIME1.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool PrimeNum[1000001];
void sieve()
{
	int maxN=1000000;
	for(int i=1;i<=maxN;i++)
		PrimeNum[i]=true;
	PrimeNum[0]=PrimeNum[1]=false;

	for(int i=2;i*i<=maxN;i++)
	{
		if(PrimeNum[i])
		{
			for(int j=i*i;j<=maxN;j+=i)
				PrimeNum[j]=false;
		}
	}
}


int32_t main()
{
	sieve();
	int n,m;
	int test;
	cin>>test;
	while(test--)
	{
		cin>>n>>m;
		if(n==1)
			n++;
		bool arr[m-n+1];

		for(int i=0;i<(m-n+1);i++)		
			arr[i]=true;
		
		for(int i=2;i*i<=m;i++)
		{
			if(PrimeNum[i]==true)
			{
				int j=(n/i)*i;
				if(j<n)
					j+=i;

				for(;j<=m;j+=i)
				{
					if(j!=i)
						arr[j-n]=false;
				}
			}
		}

		for(int j=0;j<(m-n+1);j++)
			if(arr[j]==true)
				cout<<n+j<<endl;

		cout<<endl;
	}
}