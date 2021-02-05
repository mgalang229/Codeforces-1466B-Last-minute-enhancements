#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
		int n;
		cin >> n;
		set<int> s;
		// The solution is based on a simple, greedy approach, where we analyze the elements in nondecreasing order. 
		// While analyzing, we keep the set of elements for which we have already decided its value. 
		// When we want to add the next element, then we check if it is in the set. If it is, we increase it by 1;
		// otherwise, we keep it as it is.
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (s.count(x)) {
				x++;
			}
			s.insert(x);
		}
		cout << (int) s.size() << '\n';
 	}
  return 0;
}      
