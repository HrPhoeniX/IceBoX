/*====================================
Auther:    Shyam Makwana
Problem:   PHONELST.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define add(a,b) ((a%mod)+(b%mod))%mod
#define mul(a,b) ((a%mod)*(b%mod))%mod
#define __lcm(a,b) ((a*b)/__gcd(a,b))
#define endl "\n"
#define MAX 100005

struct trie{
	bool isEnd;
	unordered_map<char,trie *> mp;

	trie(){
		isEnd = false;
	}	 
};

struct trie* root;
bool flag;

void insert(string str)
{
	struct trie* curr = root;	
	for(char c:str)
	{
		if(curr->isEnd)
			flag=false;

		if(!curr->mp.count(c))
			curr->mp[c] = new trie;
		curr = curr->mp[c];
	}
	curr->isEnd = true;

	for(int i=0;i<10;i++)
	{
		char indx = i+'0';
		if(curr->mp.count(indx))
			flag=false;
	}	
}

int32_t main()
{
    int n,m,a,b,c,d,n1; 
    int max1=INT_MIN,min1=INT_MAX;    
    fastio; 
    string str;

    int test;
    cin >> test;

    while(test--)
    {
		root = new trie;
		flag=true;

		int n;
		cin>>n;

		while(n--)
		{
			cin>>str;
			insert(str);
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

    }
}
