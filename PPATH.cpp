/*====================================
Auther:    Shyam Makwana
Problem:   PPATH.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fori(i,n) for(int i=0;i<n;i++)
#define forr(i,n) for(int i=n-1;i>=0;i--)
#define cina(a)	for(int i=0;i<n;i++)cin>>a[i]
#define couta(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define add(a,b) ((a%mod)+(b%mod))%mod
#define mul(a,b) ((a%mod)*(b%mod))%mod
#define __lcm(a,b) ((a*b)/__gcd(a,b))
#define endl "\n"
#define MAX 100005

vector<int> arr[10005];
vector<int> primes;
bool vis[10005];
int dist[10005];

bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

void bfs(int src)
{
	queue<int> q;
	q.push(src);
	vis[src]=true;
	dist[src]=0;

	while(!q.empty())
	{
		int cur = q.front();
		q.pop();

		for(int child : arr[cur])
		{
			if(vis[child] == false)
			{
				q.push(child);
				vis[child] = true;
				dist[child] = dist[cur]+1;
			}
		}
	}
}
bool isValid(int a, int b)
{
	int cnt=0;
	while(a>0)
	{
		if(a%10 != b%10)
			cnt++;
		a/=10;
		b/=10;
	}
	if(cnt==1)
		return true;
	else
		return false;
}

int main()
{
	int a,b;
	for(int i=1000; i<=9999 ; i++)
	{
		// arr[i].clear();
		if(isPrime(i))
			primes.push_back(i);
	}
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			a=primes[i];
			b=primes[j];

			if(isValid(a,b))
			{
				arr[a].push_back(b);
				arr[b].push_back(a);
			}
		}
	}
	int test; 
	cin >> test;

	// for(int i=0;i<primes.size();i++) cout << primes[i] << " ";

	while(test--)
	{
		for(int i=1000; i<=10005 ; i++) dist[i]=-1, vis[i]=false;

		cin >> a>>b;

		bfs(a);

		if(dist[b]==-1)
			cout << "Impossible" << endl;
		else
			cout << dist[b] << endl;
	}
    	
}
