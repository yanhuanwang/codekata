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
//struct node {
//	int start;
//	int end;
//};
//bool cmp(node a, node b) {
//	return a.end < b.end;
//}
//int main() {
//	int m, s, c;
//	cin >> m >> s >> c;
//	int a[c];
//	node nd[c];
//	for (int i = 0; i < c; i++) {
//		int t;
//		cin >> t;
//		a[i] = t;
//		cin >> t;
//		nd[i].start = nd[i].end - 1;
//	}
//	sort(a, a + c);
//	sort(nd, nd + c, cmp);
////	for (int i = 0; i < c; i++) {
////		cout << nd[i].start << ' ' << nd[i].end << endl;
////	}
//	vector<node>vnode;
//	node node1;
//	node1.start = a[0];
//	for (int i = 1; i < c; i++) {
//		if (a[i] == a[i - 1] + 1) {
//
//		}
//	}
//	return 0;
//}
//
