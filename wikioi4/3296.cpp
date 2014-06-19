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
//#include <stack>
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
//
//struct node {
//	int x, y;
//};
//int main() {
//	int n, m, k;
//	cin >> n >> m;
//	int a[n + m], b[m];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> b[i];
//	}
//	int u = n - 1, v = m - 1;
//	for (int i = n + m - 1; i >= 0 && u >= 0 && v >= 0; i--) {
//		if (a[u] > b[v]) {
//			a[i] = a[u];
//			u--;
//		} else {
//			a[i] = b[v];
//			v--;
//		}
//	}
//	if (u < 0) {
//		for (int i = 0; i <= v; i++) {
//			a[i] = b[i];
//		}
//	}
//	if (v < 0) {
//
//	}
//	for (int i = 0; i < n + m; i++) {
//		cout << a[i] << ' ';
//	}
//	return 0;
//}
//
