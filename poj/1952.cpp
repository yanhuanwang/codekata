///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
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
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	int n;
//	cin >> n;
//	int a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int dp[n], res = 1, cnt = 0, tmp = 0;
//	dp[n - 1] = 1;
//	map<int, vector<int> > m;
//	vector<int> resk;
//	for (int i = n - 2; i >= 0; i--) {
//		dp[i] = 1;
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				if (dp[j] + 1 > dp[i]) {
//					dp[i] = dp[j] + 1;
//					m[i].clear();
//					m[i].push_back(j);
//				} else if (dp[i] == dp[j] + 1) {
//					m[i].push_back(j);
//				}
////				dp[i] = max(dp[i], dp[j] + 1);
//			}
//			res = max(res, dp[i]);
////			if (res < dp[i]) {
////				res = dp[i];
////			}
//		}
//	}
////	for (auto x : m) {
////		cout << x.first << ':';
////		for (auto y : x.second) {
////			cout << y << ' ';
////		}
////		cout << endl;
////	}
//
//	cout << res << endl;
//	int f[n], g[n];
//	for (int i = 0; i < n; i++) {
//		f[i] = 1;
//		g[i] = 1;
//	}
//	for (int i = 0; i < n; i++) {
//		if (res == dp[i]) {
//			cnt++;
//			for (int j = i + 1; j < n; j++) {
//				for (int k = i; k < j; k++) {
//					if (a[j] < a[k] && a[k] < a[i]) {
//						f[j] = max(f[j], f[k] + 1);
//					}
//				}
//			}
//			for (int j = n - 1; j > i; j--) {
//				for (int k = j + 1; k < n; k++) {
//					if (a[j] > a[k]) {
//						g[j] = max(g[j], g[k] + 1);
//					}
//				}
//			}
//			for (int j = i + 1; j < n; j++) {
//				cout << j << ' ' << f[j] << ' ' << g[j] << endl;
//				if (f[j] + g[j] - 1 == res) {
//					tmp++;
//				}
//			}
//			cnt += tmp - (res - 1);
//		}
//
//	}
////	cout << m[res] + 1;
////	for (int i = 0; i < n; i++) {
////		if (res == dp[i]) {
////			int t = 1;
////			queue<int> q;
////			for (auto x : m[i]) {
////				q.push(x);
////			}
////			while (!q.empty()) {
////				int x = q.front();
////				q.pop();
////				if (!m.count(x)) {
////					continue;
////				}
////				t *= (m[x].size());
////				for (auto xx : m[x]) {
////					q.push(xx);
////				}
////			}
////			cnt += t;
////		}
////	}
//	if (res == 1) {
//		cout << n << endl;
//	} else {
//		cout << cnt << endl;
//	}
//	return 0;
//}
//
