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
//int getNext(int a) {
//	if (a == 1) {
//		return 2;
//	}
//	if (a == 2) {
//		return 3;
//	}
//	if (a == 3) {
//		return 1;
//	}
//}
//int getPrev(int a) {
//	if (a == 1) {
//		return 3;
//	}
//	if (a == 2) {
//		return 1;
//	}
//	if (a == 3) {
//		return 2;
//	}
//}
//int main() {
//	int n, k, d, x, y;
//	vector<int> a, b, c;
//	map<int, int> m;
//	cin >> n >> k;
//	int cnt = 0;
//	while (k--) {
//		cin >> d >> x >> y;
//		if (x > n || y > n) {
//			cnt++;
//			continue;
//		}
//		if (d == 2 && x == y) {
//			cnt++;
//			continue;
//		}
//		if (m.empty()) {
//			if (d == 1) {
//				m[x] = 1;
//				m[y] = 1;
////				a.push_back(x);
////				a.push_back(y);
//			} else if (d == 2) {
////				a.push_back(x);
////				b.push_back(y);
//				m[x] = 1;
//				m[y] = 2;
//			}
//		} else {
//			if (d == 1) {
//				if (m.count(x) && m.count(y)) {
//					if (m[x] != m[y]) {
//						cnt++;
//						continue;
//					}
//				} else if (m.count(x)) {
//					m[y] = m[x];
//				} else if (m.count(y)) {
//					m[x] = m[y];
//				} else {
//
//				}
//			} else if (d == 2) {
//				if (m.count(x) && m.count(y)) {
//					if (m[x] != getNext(m[y])) {
//						cnt++;
//						continue;
//					} else if (m.count(x)) {
//						m[y] = getNext(m[x]);
//					} else if (m.count(y)) {
//						m[x] = getPrev(m[y]);
//					}
//				}
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}
//
