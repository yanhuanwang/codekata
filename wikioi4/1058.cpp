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
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y, val;
//	bool operator<(const node &a) const {
//		return val < a.val;
//	}
//};
//int main() {
//	int n;
//	cin >> n;
//	int a[n], dp1[n], dp2[n], res = INT_MIN;
//	memset(dp1, 0, sizeof(dp1));
//	memset(dp2, 0, sizeof(dp2));
////	memset(board,0,sizeof(board));
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	dp1[0] = 1;
//	dp2[n - 1] = 1;
////	int j1 = 0, j2 = n - 1;
//	for (int i = 1; i < n; i++) {
//		dp1[i]=1;
//		for (int j = 0; j < i; j++) {
//			if (a[i] > a[j]) {
//				dp1[i] = max(dp1[i], dp1[j] + 1);
//
//			}
//		}
//	}
//	for (int i = n - 2; i >= 0; i--) {
//		dp2[i]=1;
//		for (int j = n - 1; j > i; j--) {
//			if (a[i] > a[j]) {
//				dp2[i] = max(dp2[i], dp2[j] + 1);
//			}
//		}
//	}
//	int res1 = INT_MIN;
//	for (int i = 0; i < n; i++) {
//		res1 = max(res1, dp1[i] + dp2[i]-1);
//	}
//	cout << n  - res1;
//	return 0;
//}
//
