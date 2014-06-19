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
//struct node {
//	int x, y;
//};
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	string s, t;
//	while (cin >> s >> t) {
//		int n = s.size();
//		int m = t.size();
//		int dp[n + 1][m + 1];
//		for (int i = 0; i <= n; i++) {
//			dp[i][0] = 0;
//		}
//		for (int i = 0; i <= m; i++) {
//			dp[0][i] = 0;
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (s[i - 1] == t[j - 1]) {
//					dp[i][j] = dp[i - 1][j - 1] + 1;
//				} else {
//					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//				}
//			}
//		}
////		cout<<dp[n][m]<<endl;
//		if (dp[n][m] == n) {
//			cout << "Yes"<<endl;
//		} else {
//			cout << "No"<<endl;
//		}
//	}
//	return 0;
//}
//
