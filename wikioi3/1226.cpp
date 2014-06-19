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
//	int x, y, z;
//	cin >> x >> y >> z;
//	queue<pair<int, int> > q, p;
//	q.push(make_pair(0, 0));
//	set<pair<int, int> > used;
//	used.insert(make_pair(0, 0));
//	int cnt = 0;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			int xx = q.front().first;
//			int yy = q.front().second;
//			if (xx == z || yy == z) {
//				cout << cnt;
//				return 0;
//			}
//			q.pop();
//			//extend xx,yy
//			int newx, newy;
////			if (xx > 0) {
//			//state1
//			if (!used.count(make_pair(0, yy))) {
//				p.push(make_pair(0, yy));
//				used.insert(make_pair(0, yy));
//			}
//			//state2
//			if (!used.count(make_pair(xx, 0))) {
//				p.push(make_pair(xx, 0));
//				used.insert(make_pair(xx, 0));
//			}
//			//state3
//			if (xx + yy <= y) {
//				newx = 0;
//				newy = yy + xx;			//) <= y ? yy + xx : y;
//				if (!used.count(make_pair(newx, newy))) {
//					p.push(make_pair(newx, newy));
//					used.insert(make_pair(newx, newy));
//				}
//			} else {
//				newx = (xx + yy - y);
//				newy = y;
//				if (!used.count(make_pair(newx, newy))) {
//					p.push(make_pair(newx, newy));
//					used.insert(make_pair(newx, newy));
//				}
//			}
//			//state4
//			if (xx + yy <= x) {
//				newy = 0;
//				newx = xx + yy;			//) < x ? xx + yy : x;
//				if (!used.count(make_pair(newx, newy))) {
//					p.push(make_pair(newx, newy));
//					used.insert(make_pair(newx, newy));
//				}
//			} else {
//				newy = (xx + yy - x);
//				newx = x;			//) < x ? xx + yy : x;
//				if (!used.count(make_pair(newx, newy))) {
//					p.push(make_pair(newx, newy));
//					used.insert(make_pair(newx, newy));
//				}
//			}
//			//state5
//			newx = x;
//			newy = yy;
//			if (!used.count(make_pair(newx, newy))) {
//				p.push(make_pair(newx, newy));
//				used.insert(make_pair(newx, newy));
//			}
//			//state6
//			newx = xx;
//			newy = y;
//			if (!used.count(make_pair(newx, newy))) {
//				p.push(make_pair(newx, newy));
//				used.insert(make_pair(newx, newy));
//			}
////			}
//		}
//		cnt++;
//		if (cnt > 1000000) {
//			cout << "impossible";
//			return 0;
//		}
//		swap(q, p);
//	}
//	cout << "impossible";
//	return 0;
//}
//
