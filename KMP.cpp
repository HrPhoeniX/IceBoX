#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> computeLPS(string pattern) {

	int m = pattern.length();
	vector<int> lps(m);
	lps[0] = 0;

	for (int i = 1; i < m; i++) {
		int j = lps[i - 1];	// length of the previous longest prefix suffix

		while (j > 0 && pattern[i] != pattern[j])
			j = lps[j - 1];

		if (pattern[i] == pattern[j])
			j++;

		lps[i] = j;
	}
	return lps;
}

vector<int> KMP(string text, string pattern) {

	int n = text.length();
	int m = pattern.length();
	vector<int> foundPos;
	vector<int> lps = computeLPS(pattern);	// longest prefix suffix

	int i = 0;	// index for text
	int j = 0;	// index for pattern
	while (i < n) {
		if (text[i] == pattern[j]) {
			i++;
			j++;
		}
		else {
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
		if (j == m) {
			foundPos.push_back(i - m);
			j = lps[j - 1];
		}
	}
	return foundPos.size() > 0 ? foundPos : vector<int>({ -1});
}

int main() {
	string text = "ababcdabcb";
	string pattern = "abc";
	vector<int> indecis = KMP(text, pattern);
	for (int i : indecis)
		cout << i << " ";
	return 0;
}