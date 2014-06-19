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
//int main() {
//	int startx, starty;
//	vector<vector<char> > vvi(3, vector<char>(3));
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> vvi[i][j];
//			if (vvi[i][j] == '0') {
//				startx = i;
//				starty = j;
//			}
//		}
//	}
////	vector<vector<char> > target(3, vector<char>(3));
//	vector<vector<char> > target(3, vector<char>(3)); //({ {'1','2','3'}, {'8','0','4'}, {'7','6','5'}});
//	target[0][0] = '1';
//	target[0][1] = '2';
//	target[0][2] = '3';
//	target[1][0] = '8';
//	target[1][1] = '0';
//	target[1][2] = '4';
//	target[2][0] = '7';
//	target[2][1] = '6';
//	target[2][2] = '5';
////	for (auto x : vvi) {
////		for (auto y : x) {
////			cout << y;
////		}
////		cout << endl;
////	}
//	queue<vector<vector<char> > > q, p;
//	q.push(vvi);
//	set<vector<vector<char> > > used;
//	used.insert(vvi);
//	int cnt = 0;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			int x, y, newx, newy;
//			vector<vector<char> > vvc = q.front();
//			q.pop();
//			for (int i = 0; i < 3; i++) {
//				for (int j = 0; j < 3; j++) {
//					if (vvc[i][j] == '0') {
//						x = i;
//						y = j;
//					}
//				}
//			}
//			for (int i = 0; i < 4; i++) {
//				newx = x + dx[i];
//				newy = y + dy[i];
//				if (newx < 0 || newy < 0 || newx >= 3 || newy >= 3) {
//					continue;
//				}
//				vector<vector<char> > vvct = vvc;
//				swap(vvct[x][y], vvct[newx][newy]);
////				x = newx;
////				y = newy;
//				if (used.count(vvct)) {
//					continue;
//				}
////				cout << endl;
////				for (auto x : vvct) {
////					for (auto y : x) {
////						cout << y;
////					}
////					cout << endl;
////				}
//				if (vvct == target) {
//					cout << cnt + 1;
//					return 0;
//				}
//				p.push(vvct);
//				used.insert(vvct);
//			}
//		}
//		cnt++;
//		swap(q, p);
//	}
//	return 0;
//}
//
