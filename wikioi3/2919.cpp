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
//void move(int&a, int&b) {
//	a -= b;
//	b <<= 1;
//}
////struct node{
////
////};
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y;
//};
//int main() {
//	int n, m, startx, starty;
//	cin >> m >> n >> startx >> starty;
//	startx--;
//	starty--;
////	if (m == 0) {
////		return 0;
////	}
//	vector<vector<char>> vvc(n, vector<char>(m));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> vvc[i][j];
//		}
//	}
//	queue<pair<int, int> > q, p;
//	set<pair<int, int>> visited;
//	q.push(make_pair(startx, starty));
//	visited.insert(make_pair(startx, starty));
//	int cnt = 1;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				int newx = x + dx[i];
//				int newy = y + dy[i];
//				if (newx < 0 || newy < 0 || newx >= n || newy >= m
//						|| visited.count(make_pair(newx, newy))
//						|| vvc[newx][newy] != vvc[startx][starty]) {
//					continue;
//				}
//				cnt++;
//				p.push(make_pair(newx, newy));
//				visited.insert(make_pair(newx, newy));
//			}
//		}
//		swap(q, p);
//	}
//	cout << cnt << endl;
//	return 0;
//}
//
