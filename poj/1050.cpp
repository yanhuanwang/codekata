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
//#include <string.h>
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
//	int n;
//	cin >> n;
//	vector<vector<int> > vvi(n, vector<int>(n));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> vvi[i][j];
//		}
//	}
////	for (auto x : vvi) {
////		for (auto y : x) {
////			cout << y << ' ';
////		}
////		cout << endl;
////	}
//	//dp[k]=max(dp[k-1],0)+a[k]
//	int dp[n], a[n], res = INT_MIN;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			memset(a, 0, sizeof(a));
//			memset(dp, 0, sizeof(dp));
//			for (int k = i; k <= j; k++) {
//				dp[0] += vvi[k][0];
//			}
//			for (int l = 1; l < n; l++) {
//				for (int m = i; m <= j; m++) {
//					a[l] += vvi[m][l];
//				}
//				if (dp[l - 1] > 0) {
//					dp[l] = dp[l - 1] + a[l];
//				} else {
//					dp[l] = a[l];
//				}
//			}
//			for (int l = 0; l < n; l++) {
//				res = max(res, dp[l]);
//			}
//		}
//	}
//	cout << res;
////	int dp[n][n];
////	memset(dp, 0, sizeof(dp));
////	dp[0][0] = vvi[0][0];
////	for (int i = 1; i < n; i++) {
////		if (dp[i - 1][0] > 0) {
////			dp[i][0] = dp[i - 1][0] + vvi[i][0];
////		} else {
////			dp[i][0] = vvi[i][0];
////		}
////	}
////	for (int i = 1; i < n; i++) {
////		if (dp[0][i - 1] > 0) {
////			dp[0][i] = vvi[0][i] + dp[0][i - 1];
////		} else {
////			dp[0][i] = vvi[0][i];
////		}
////	}
////	for (int i = 1; i < n; i++) {
////		for (int j = 1; j < n; j++) {
////
////		}
////	}
//	return 0;
//}
//
