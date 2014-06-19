///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
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
//
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
////int dp[1000][1000];
////#define MAX 1000
//struct node {
//	string s;
//	int meas;
//	node() {
//		meas = 0;
//	}
//};
//bool cmp(node a, node b) {
//	return a.meas < b.meas;
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	node a[m];
//	for (int i = 0; i < m; i++) {
//		cin >> a[i].s;
//		for (int j = 0; j < n; j++) {
//			for (int k = j + 1; k < n; k++) {
//				if (a[i].s[k] < a[i].s[j]) {
//					a[i].meas++;
//				}
//			}
//		}
//	}
//	sort(a, a + m, cmp);
//	for (int i = 0; i < m; i++) {
//		cout << a[i].s << endl;
//	}
//	return 0;
//}
//
