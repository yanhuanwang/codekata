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
//int main() {
//	int n;
//	cin >> n;
//	vector<pair<int, int>> vp(n);
//	for (int i = 0; i < n; i++) {
//		int h, t;
//		cin >> h >> t;
//		if (h < t) {
//			vp[i].first = h;
//			vp[i].second = t;
//		} else {
//			vp[i].first = t;
//			vp[i].second = h;
//		}
////		cin >> vp[i].first >> vp[i].second;
//	}
//	sort(vp.begin(), vp.end(), cmp);
////	for (auto x : vp) {
////		cout << x.first << ' ' << x.second << endl;
////	}
//	bool a[n];
//	memset(a, 0, sizeof(a));
//	a[0] = 1;
//	int j = 0;
//	for (int i = 1; i < n; i++) {
//		if (vp[i].first >= vp[j].second) {
//			a[i] = 1;
//			j = i;
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i]) {
//			cnt++;
//		}
//	}
//	cout << cnt;
//	return 0;
//}
//
