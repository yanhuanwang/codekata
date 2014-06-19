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
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int main() {
//	int N, M;
//	cin >> N >> M;
//	int a[N][M];
//	int res[N][M];
//	int m = INT_MIN, x, y;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			res[i][j] = 0;
//			for (int k = 0; k < 4; k++) {
//				if (i + dx[k] < 0 || i + dx[k] >= N || j + dy[k] < 0
//						|| j + dy[k] >= M) {
//					continue;
//				}
//				if (a[i][j] * a[i + dx[k]][j + dy[k]] < 0)
//					res[i][j] += abs(a[i + dx[k]][j + dy[k]]);
//				else
//					res[i][j] -= abs(a[i + dx[k]][j + dy[k]]);
//			}
////			m = max(m, res[i][j]);
//			if (m < res[i][j]) {
//				m = res[i][j];
//				x = i;
//				y = j;
//			}
//			if (m == res[i][j]) {
//				x = min(x, i);
//				y = min(y, j);
//			}
//		}
//	}
//	cout << ++x << " " << ++y << " " << m;
//	return 0;
//}
//
