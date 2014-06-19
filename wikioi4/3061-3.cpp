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
//		ll a[N], s[N];
//		queue<ll> q, p;
//		ll sum = 0;
//		int len = INT_MAX;
//		for (ll i = 0; i < N; i++) {
//			cin >> a[i];
//			if (i == 0) {
//				s[i] = a[i];
//			} else {
//				s[i] = s[i - 1] + a[i];
//			}
//		}
//		vector<int> vi(s, s + N);
//		for (int i = 0; i < N; i++) {
//			vector<int>::iterator it = lower_bound(vi.begin(), vi.end(), vi[i] + S);
//			if (it != vi.end()) {
//				len = min(len, it - vi.begin() - i);
//			}
//		}
////		vector<int>::iterator it = lower_bound(vi.begin(), vi.end(), S);
////		for (int i = it - vi.begin(); i < N; i++) {
////			len = min(len, i);
////			for (int j = 0; j < i; j++) {
////				if (s[i] - s[j] >= S) {
////					len = min(len, i - j);
////				} else {
////					break;
////				}
////			}
////		}
//		if (len == INT_MAX) {
//			cout << 0 << endl;
//		} else {
//			cout << len << '\n';
//		}
//	}
//	return 0;
//}
