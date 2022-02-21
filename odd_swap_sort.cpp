#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	scanf("%d", &n);
	
	vector<int> odd, even;
	for(int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		if(x % 2 == 0)
			even.push_back(x);
		else 
			odd.push_back(x);
	}
	
	vector<int> sortedOdd = odd, sortedEven = even;
	sort(sortedOdd.begin(), sortedOdd.end());
	sort(sortedEven.begin(), sortedEven.end());
	bool is = true;

	for(int i=0; i<odd.size(); ++i) {
		if(sortedOdd[i] != odd[i]) {
			is = false;
			break;
		}
	}
	
	for(int i=0; i<even.size(); ++i) {
		if(sortedEven[i] != even[i]) {
			is = false;
			break;
		}
	}	
	
	printf(is ? "YES\n" : "NO\n");
}

int main() {
	int t=1;
	scanf("%d", &t);
	for(int i=1; i<=t; ++i) {
		// printf("Case #%d: ", i);
		solve();
	}
	return 0;
}