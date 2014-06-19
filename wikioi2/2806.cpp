///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
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
//#define PI 3.14159265358979323846264338327950288
//vector<string> Tokenize(string s, string ch) {
//	vector<string> ret;
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//		if (p2 == -1)
//			p2 = s.size();
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//	return ret;
//}
//int my_abs(int a) {
//	int i = a >> 31;
//	return ((a ^ i) - i);
//}
//
//vector<int> TokenizeInt(string s, string ch) {
//	vector<int> ret;
//	vector<string> p = Tokenize(s, ch);
//	for (int i = 0; i < p.size(); i++)
//		ret.push_back(atoi(p[i].c_str()));
//	return ret;
//}
//int process(int A, int B, int K) {
//	int res = 0;
//	return res;
//}
//map<char, int> m;
//struct node {
//	int id;
//	int strength;
//};
//map<int, int> mp;
//bool cmp(int a, int b) {
//	if (mp[a] == mp[b]) {
//		return a > b;
//	}
//	return mp[a] < mp[b];
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//void bfs(int startx, int starty, vector<vector<char>>&board, int &cnt,
//		vector<vector<char>>&visited) {
//
//}
//int main() {
//	int w, h, startx, starty;
//	while (scanf("%d%d", &w, &h) != EOF) {
//		if (w == 0 && h == 0) {
//			return 0;
//		}
////		char board[h][m];
//		vector<vector<char>> board(h, vector<char>(w));
//		vector<vector<bool>> visited(h, vector<bool>(w, false));
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> board[i][j];
////				scanf("%c", &board[i][j]);
//				if (board[i][j] == '@') {
//					startx = i;
//					starty = j;
//				}
//			}
//		}
////		for (auto x : board) {
////			for (auto y : x) {
////				cout << y;
////			}
////			cout << endl;
////		}
////		return 0;
////		continue;
//		int cnt = 1;
////		bfs(startx,starty,board,cnt,visited);
//		queue<pair<int, int>> q, p;
//		q.push(make_pair(startx, starty));
//		visited[startx][starty] = true;
//		while (!q.empty()) {
//			while (!q.empty()) {
//				int newx = q.front().first;
//				int newy = q.front().second;
//				q.pop();
//				for (int i = 0; i < 4; i++) {
//					if (newx + dx[i] < 0 || newx + dx[i] >= h
//							|| newy + dy[i] < 0 || newy + dy[i] >= w
//							|| visited[newx + dx[i]][newy + dy[i]]
//							|| board[newx + dx[i]][newy + dy[i]] != '.') {
//						continue;
//					}
//					p.push(make_pair(newx + dx[i], newy + dy[i]));
//					visited[newx + dx[i]][newy + dy[i]] = true;
//					cnt++;
//				}
//			}
//			swap(q, p);
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}
