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
//	cin >> n >> m >> k;
//	int a[n], b[m];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> b[i];
//	}
//	priority_queue<int, vector<int>, greater<int>> Q;
//	if (k < n) {
//		for (int i = 0; i < k; i++) {
//			Q.push(a[i]);
//		}
//	} else {
//		for (int i = 0; i < n; i++) {
//			Q.push(a[i]);
//		}
//	}
//	int res;
//	if (k < m) {
//		for (int i = 0; i < k; i++) {
//			Q.push(b[i]);
//			res = Q.top();
//			Q.pop();
//		}
//	} else {
//		for (int i = 0; i < m; i++) {
//			Q.push(b[i]);
//			res = Q.top();
//			Q.pop();
//		}
//		for (int i = m; i < k; i++) {
////			Q.push(b[i]);
//			res = Q.top();
//			Q.pop();
//		}
//	}
//	cout << res;
//	return 0;
//}
//