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
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y, val;
//	bool operator<(const node &a) const {
//		return val < a.val;
//	}
//};
//void dfs(vector<node>&vn, vector<vector<node>>&res, vector<node>&path,
//		map<node, vector<node>> &m) {
//	node t = path.back();
//	if (!m.count(t) || m[t].empty()) {
//		res.push_back(path);
//		return;
//	}
//	for (int i = 0; i < m[t].size(); i++) {
////		cout<<m[t][i].x<<' '<<m[t][i].y<<' '<<m[t][i].val<<endl;
//		path.push_back(m[t][i]);
//		dfs(vn, res, path, m);
//		path.pop_back();
//	}
//}
//int dp[10][10][10][10];
//int board[10][10];
//int main() {
//	int n;
//	cin >> n;
//	memset(dp,0,sizeof(dp));
//	memset(board,0,sizeof(board));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//		}
//	}
//
//	return 0;
//}
//
