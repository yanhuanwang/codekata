//#include <cstdio>
//#include <cstdlib>
////#include <memory.h>
//#include <algorithm>
//#include <string>
//#include <map>
////#include <unordered_map>
////#include <unordered_set>
//#include <set>
//#include <vector>
//#include <cmath>
//#include <climits>
//#include <queue>
//#include <cassert>
//#include <iostream>
//#include <sstream>
//#include <utility>
//#include <bitset>
//using namespace std;
//typedef long long ll;
//int main() {
//	ll T;
//	cin >> T;
//	while (T--) {
//		ll N, S;
//		cin >> N >> S;
//		ll a[N];
//		queue<ll> q, p;
//		ll sum = 0;
//		int len = INT_MAX;
//		for (ll i = 0; i < N; i++) {
//			cin >> a[i];
//			q.push(a[i]);
//			sum += a[i];
//			ll top = 0;
//			while (sum >= S) {
//				len = min(len, (int) q.size());
//				top = q.front();
//				sum -= top;
//				q.pop();
//			}
//		}
//		if (len == INT_MAX) {
//			cout << 0 << endl;
//		} else {
//			cout << len << '\n';
//		}
//	}
//	return 0;
//}
