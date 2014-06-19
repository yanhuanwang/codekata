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
//int dx[] = { 1, 1, -1, -1, 2, 2, -2, -2 };
//int dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
//struct node {
//	int x, y;
//};
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		int l;
//		cin >> l;
//		int board[l][l];
//		memset(board, 0, sizeof(board));
//		int startx, starty, endx, endy;
//		cin >> startx >> starty >> endx >> endy;
//		if (startx == endx && starty == endy) {
//			cout << 0 << endl;
//			continue;
//		}
//		queue<pair<int, int> > q, p;
//		set<pair<int, int> > visited;
//		q.push(make_pair(startx, starty));
//		board[startx][starty] = 1;
////		visited.insert(make_pair(startx, starty));
//		int cnt = 0;
//		while (!q.empty()) {
//			cnt++;
//			while (!q.empty()) {
//				int x = q.front().first;
//				int y = q.front().second;
//				q.pop();
//				for (int i = 0; i < 8; i++) {
//					int newx = x + dx[i];
//					int newy = y + dy[i];
//					if (newx < 0 || newy < 0 || newx >= l || newy >= l
//							|| board[newx][newy]) {
//						continue;
//					}
//					if (newx == endx && newy == endy) {
//						cout << cnt << endl;
//						goto out;
//					}
//					p.push(make_pair(newx, newy));
////					visited.insert(make_pair(newx, newy));
//					board[newx][newy] = 1;
//				}
//			}
//			swap(q, p);
//		}
//		out: ;
//	}
//	return 0;
//}
//
