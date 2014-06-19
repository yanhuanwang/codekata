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
//int process(int A) {
//	if (A >= 0) {
//		return 5;
//	}
//	return process(A + 1) + process(A + 2) + 1;
//}
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int main() {
//	int n, m;
//	cin >> n >> m;
//	char a[n][n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	vector<vector<char>> vvc;
//	queue<pair<int, int>> q, p;
//	set<pair<int, int>> visited;
////	q.push(make_pair())
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			q.push(make_pair(i, j));
//			while (!q.empty()) {
//				while (!q.empty()) {
//					int newx = q.front().first;
//					int newy = q.front().second;
//					q.pop();
//					visited.insert(make_pair(newx, newy));
//					vvc.pop_back(a[newx][newy]);
//					for (int k = 0; k < 4; k++) {
//						if (newx + dx[i] < 0 || newx + dx[i] >= n
//								|| newy + dy[i] < 0 || newy + dy[i] >= n
//								|| visited.count(
//										make_pair(newx + dx[i], newy + dy[i]))
//								|| a[newx + dx[i]][newy + dy[i]]
//										< a[newx][newy]) {
//							continue;
//						}
//						p.push(make_pair(newx + dx[i], newy + dy[i]));
//					}
//				}
//				swap(q, p);
//			}
//		}
//	}
//	return 0;
//}
//
