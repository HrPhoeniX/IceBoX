#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL))

string stringTransform(const string &s) {

	string newString = "@";

	for (char c : s) {
		newString.push_back('#');
		newString.push_back(c);
	}
	newString.append("#$");

	return newString;
}

string manachar(const string &s) {

	string Q = stringTransform(s);
	int n = Q.length();
	vector<int> P(n);
	int c = 0, r = 0;	// current center, right limit

	for (int i = 1; i < n - 1; i++) {
		int iMirror = c - (i - c);

		if (r > i) {
			P[i] = min(r - i, P[iMirror]);
		}

		// expanding around center i
		while ( Q[i + 1 + P[i]] == Q[i - 1 - P[i]])
			P[i]++;

		// update c,r if the current palindrom expands previous r,
		if (i + P[i] > r) {
			c = i;
			r = i + P[i];
		}
	}

	// find the length and center of the longest palindrome
	int maxPalindrome = 0;
	int centerIndex = 0;

	for (int i = 1; i < n - 1; i++) {
		if (P[i] > maxPalindrome) {
			maxPalindrome = P[i];
			centerIndex = i;
		}
	}

	cout << maxPalindrome << '\n';	// printing max length
	return s.substr((centerIndex - 1 - maxPalindrome) / 2, maxPalindrome);

}

int main() {
	IOS;
	string s = "czcaba";
	//cin >> s;
	cout << manachar(s);
	return 0;
}