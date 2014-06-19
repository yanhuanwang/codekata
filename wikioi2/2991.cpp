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
//#include <iomanip>
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
//
//bool cmp(char a, char b) {
//	return m[a] < m[b];
//}
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int main() {
//	int m, n;
//	cin >> m >> n;
//	int startx, starty;
//	vector<vector<char> > vvc(n, vector<char>(m));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> vvc[i][j];
//			if (vvc[i][j] == 'A') {
//				startx = i;
//				starty = j;
//			}
//		}
//	}
////	for (auto x : vvc) {
////		for (auto y : x) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
//	queue<pair<int, int> > q;
//	queue<pair<int, int> > p;
//	q.push(make_pair(startx, starty));
//	set<pair<int, int> > visited;
//	visited.insert(make_pair(startx, starty));
//	while (!q.empty()) {
//		while (!q.empty()) {
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				if (x + dx[i] >= n || x + dx[i] < 0 || y + dy[i] >= m
//						|| y + dy[i] < 0
//						|| visited.count(make_pair(x + dx[i], y + dy[i]))) {
//					continue;
//				}
//				if (vvc[x + dx[i]][y + dy[i]] == 'B') {
//					cout << "yes";
//					return 0;
////					p.push(make_pair(x + dx[i], y + dy[i]));
//				}
//				if (vvc[x + dx[i]][y + dy[i]] == '0') {
////					cout<<x+dx[i]<<" "<<y+dy[i]<<endl;
//					visited.insert(make_pair(x + dx[i], y + dy[i]));
//					p.push(make_pair(x + dx[i], y + dy[i]));
//				}
//			}
//		}
//		swap(q, p);
//	}
//	cout << "no";
//	return 0;
//}
//
