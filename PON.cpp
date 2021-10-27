/*====================================
Auther:    Shyam Makwana
Problem:   PON.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
#define add(a,b,m) ((a%m)+(b%m))%m
#define mul(a,b,m) ((a%m)*(b%m))%m

lli mulmod(lli a,lli b,lli c)
{
	lli x=0,y=a%c;
	while(b>0)
	{
		if(b%2==1)
			x=(x+y)%c;
		y=(y*2LL)%c;
		b/=2;
	}
	return x%c;
}

lli power(lli a, lli b, lli m)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2 == 1)
        return mulmod(power(a,b-1,m),a,m);
    lli q = power(a,b/2,m);
    return mulmod(q,q,m);
}

bool isPrime(lli n)
{
	if(n<2 || n==4)
		return false;
	if(n<4)
		return true;
	int k=10;	
	while(k--)
	{
		lli temp = 2+rand()%(n-3);		
		if(power(temp,n-1,n)!=1)
				return false;
		k--;
	}
	return true;
}	
int main()
{
	lli n,m;
	lli test;
	cin>>test;
	while(test--)
	{
		cin>>n;
		if(isPrime(n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}