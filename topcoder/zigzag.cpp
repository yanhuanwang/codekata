///*
// * zigzag.cpp
//
// *
// *  Created on: May 27, 2014
// *      Author: ecaiyan
// */
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
//int longestZigZag(int a[], int n) {
//	int res = 1;
//	int dp[n];
//	memset(dp, 0, sizeof(dp));
//	dp[0] = 1;
//	if (a[1] != a[0]) {
//		dp[1] = 2;
//	} else {
//		dp[1] = 1;
//	}
//	for (int i = 2; i < n; i++) {
//		if ((a[i - 1] > a[i] && a[i - 1] > a[i - 2])
//				|| (a[i - 1] < a[i] && a[i - 1] < a[i - 2])) {
//			dp[i] = dp[i - 1] + 1;
//		} else if (a[i] != a[i - 1]) {
//			dp[i] = 2;
//		} else {
//			dp[i] = 1;
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		res = max(res, dp[i]);
//	}
//	return res;
//}
//int longestZigZag2(int a[], int n) {
//	int res = 1;
//	int b[n - 1];
//	for (int i = 0; i < n - 1; i++) {
//		b[i] = a[i + 1] - a[i];
//	}
//	int dp[n], status[n];
//	memset(dp, 0, sizeof(dp) );
//	memset(status, 0, sizeof(status));
//	dp[0] = 1;
//	if (a[1] > a[0]) {
//		dp[1] = 2;
//		status[1] = 1;
//	} else if (a[1] < a[0]) {
//		dp[1] = 2;
//		status[1] = -1;
//	} else {
//		dp[1] = 1;
//	}
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			if (a[i] > a[j]) {
//				if (status[j] == -1) {
//					if (dp[i] < dp[j] + 1) {
//						dp[i] = dp[j] + 1;
//						status[i] = 1;
//					}
//				} else if (status[j] == 1) {
//					if (dp[i] < 2) {
//						dp[i] = 2;
//						status[i] = 1;
//					}
//				}
//			} else if (a[i] < a[j]) {
//				if (status[j] == 1) {
//					if (dp[i] < dp[j] + 1) {
//						dp[i] = dp[j] + 1;
//						status[i] = -1;
//					}
//				} else if (status[j] == -1) {
//					if (dp[i] < 2) {
//						dp[i] = 2;
//						status[i] = -1;
//					}
//				}
//			} else if (a[i] == a[j]) {
//				if (dp[i] < 1) {
//					dp[i] = 1;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		res = max(res, dp[i]);
//	}
//	return res;
//}
//int main() {
////	int a[] = { 1, 7, 4, 9, 2, 5 };
////	int a[] = { 1, 17, 5, 10, 13, 15, 10, 5, 16, 8 };
////	int a[]={44};
////	int a[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9};
////	int a[]={70, 55, 13, 2, 99, 2, 80, 80, 80, 80, 100, 19, 7, 5, 5, 5, 1000, 32, 32};
//	int a[]={374, 40, 854, 203, 203, 156, 362, 279, 812, 955,
//			600, 947, 978, 46, 100, 953, 670, 862, 568, 188,
//			67, 669, 810, 704, 52, 861, 49, 640, 370, 908,
//			477, 245, 413, 109, 659, 401, 483, 308, 609, 120,
//			249, 22, 176, 279, 23, 22, 617, 462, 459, 244};
//	int n = sizeof(a) / sizeof(int);
////	cout << n;
//	cout << longestZigZag2(a, n);
//	return 0;
//}
//
