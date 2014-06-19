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
//int dp[1000][1000];
////#define MAX 1000
//int main() {
//	string a, b;
//	while (cin >> a >> b) {
////		int size = max(a.size(), b.size());
//		int m = a.size();
//		int n = b.size();
//
//		for (int i = 0; i <= m; i++) {
//			dp[i][0] = 0;
//		}
//		for (int i = 0; i <= n; i++) {
//			dp[0][i] = 0;
//		}
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (a[i-1] == b[j-1]) {
//					dp[i][j] = dp[i - 1][j - 1] + 1;
//				} else {
//					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//				}
//			}
//		}
//		cout<< dp[m][n]<<endl;
//	}
//	return 0;
//}
//
