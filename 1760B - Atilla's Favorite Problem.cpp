#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int t; cin >> t;
	for(int i=0;i<t;i++){
		int n; cin >> n; 
		string s; cin >> s;
		vector<int> indices(n);
		for(int j=0; j<n; j++){
			indices[j] = alphabet.find(s[j], 0);
		}
		cout << *max_element(indices.begin(), indices.end())+1 << endl;
	}
}
