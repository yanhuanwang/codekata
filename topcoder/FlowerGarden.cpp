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
//	memset(dp, 0, sizeof(dp));
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
//int* getOrdering(int height[], int bloom[], int wilt[]) {
//	int res[2] = { 1, 2 };
//
//	return res;
//}
//int main() {
//	int a[1] = { };
//	int n = sizeof(a) / sizeof(int);
////	cout << n;
//	int* ans = getOrdering(a, a, a);
////	cout << ans[1];
//	return 0;
//}
//
