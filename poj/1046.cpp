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
//#include <string.h>
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
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct color {
//	int r, g, b;
//};
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	color a[16];
//	int b[16];
//	memset(b, 0, sizeof(b));
//	for (int i = 0; i < 16; i++) {
//		cin >> a[i].r >> a[i].g >> a[i].b;
//	}
//	color t;
//	while (cin >> t.r >> t.g >> t.b) {
//		if (t.r == -1 && t.g == -1 && t.b == -1) {
//			break;
//		}
//		int min = INT_MAX, c = -1;
//		for (int i = 0; i < 16; i++) {
//			if (b[i]) {
//				continue;
//			}
//			int res = (a[i].r - t.r) * (a[i].r - t.r)
//					+ (a[i].g - t.g) * (a[i].g - t.g)
//					+ (a[i].b - t.b) * (a[i].b - t.b);
//			if (res < min) {
//				min=res;
//				c = i;
//			}
//		}
//		cout << "(" << t.r << "," << t.g << "," << t.b << ") maps to ("
//				<< a[c].r << "," << a[c].g << "," << a[c].b << ")" << endl;
////		b[c] = 1;
//	}
//
//	return 0;
//}
//
