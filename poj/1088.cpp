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
////void dfs(vector<vector<int> >&vvi, set<pair<int, int> >&visited, int i, int j,
////		vector<pair<int, int> >&path) {
////
////}
//int main() {
//	int R, C;
//	cin >> R >> C;
//	vector<vector<int> > vvi(R, vector<int>(C));
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> vvi[i][j];
//		}
//	}
//
////	vector<pair<int, int> > path;
//	int res = INT_MIN;
////	for (int i = 0; i < R; i++) {
////		for (int j = 0; j < C; j++) {
////			dfs(vvi, visited, i, j, path);
////		}
////	}
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			queue<pair<int, int> > q, p;
//			q.push(make_pair(i, j));
//			set<pair<int, int> > visited;
//			visited.insert(make_pair(i, j));
//			int cnt = 0;
//			while (!q.empty()) {
//				while (!q.empty()) {
//					int x = q.front().first;
//					int y = q.front().second;
//					q.pop();
//					for (int k = 0; k < 4; k++) {
//						int newx = x + dx[k];
//						int newy = y + dy[k];
//						if (newx < 0 || newy < 0 || newx >= R || newy >= C
//								|| visited.count(make_pair(newx, newy))
//								|| vvi[newx][newy] <= vvi[x][y]) {
//							continue;
//						}
//						p.push(make_pair(newx, newy));
//					}
//				}
//				cnt++;
//				swap(q, p);
//			}
//			res = max(res, cnt);
//		}
//	}
//	cout << res;
//	return 0;
//}
//
