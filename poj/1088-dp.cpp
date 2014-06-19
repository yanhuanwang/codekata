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
//int DP(int x, int y, vector<vector<int> >&vvi, vector<vector<int> >&dp) {
//	int res = dp[x][y];
//	if(res>1){
//		return res;
//	}
//	for (int i = 0; i < 4; i++) {
//		int newx = x + dx[i];
//		int newy = y + dy[i];
//		if (newx < 0 || newy < 0 || newx >= vvi.size() || newy >= vvi[0].size()
//				|| vvi[newx][newy] >= vvi[x][y]) {
//			continue;
//		}
//		res = max(res, DP(newx, newy, vvi, dp) + 1);
//	}
//	return res;
//}
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	int R, C;
//	cin >> R >> C;
//	vector<vector<int> > vvi(R, vector<int>(C));
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> vvi[i][j];
//		}
//	}
//	vector<vector<int> > dp(R, vector<int>(C, 1));
//	int res = INT_MIN;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			dp[i][j] = DP(i, j, vvi, dp);
//			res = max(res, dp[i][j]);
//		}
//	}
//	cout<<res;
//	return 0;
//}
//
