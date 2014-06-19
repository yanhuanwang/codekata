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
//		for (int j = 0; j <= i; j++) {
//			cin >> vvi[i][j];
//		}
//	}
//	int dp[n];
//	for (int i = 0; i < n; i++) {
//		dp[i] = vvi[n - 1][i];
//	}
//	for (int i = n - 2; i >= 0; i--) {
//		for (int j = 0; j <= i; j++) {
//			dp[j] = vvi[i][j] + max(dp[j], dp[j + 1]);
//		}
//	}
//	cout << dp[0];
//	return 0;
//}
//
