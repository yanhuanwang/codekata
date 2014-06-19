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
//int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
//int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	int n, m, startx, starty, cnt = 0;
//	bool f=false;
//	cin >> n >> m;
//	char board[n][m];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 'W') {
//				startx = i;
//				starty = j;
//				f=true;
//			}
//		}
//	}
//	while (1&&f) {
//		cnt++;
//		queue<pair<int, int> > q, p;
//		q.push(make_pair(startx, starty));
//		board[startx][starty]='.';
//		while (!q.empty()) {
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//			for (int i = 0; i < 8; i++) {
//				int newx = x + dx[i];
//				int newy = y + dy[i];
//				if (newx < 0 || newy < 0 || newx >= n || newy >= m
//						|| board[newx][newy] == '.') {
//					continue;
//				}
//				q.push(make_pair(newx, newy));
//				board[newx][newy] = '.';
//			}
//		}
//		int rest = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (board[i][j] == 'W') {
//					startx = i;
//					starty = j;
//					rest++;
//				}
//			}
//		}
//		if (rest == 0) {
//			break;
//		}
//	}
//	cout<<cnt<<endl;
//	return 0;
//}
//
