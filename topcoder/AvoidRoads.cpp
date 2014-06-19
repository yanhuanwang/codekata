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
//int maxDonations(int a[], int n) {
//	int res = 0;
//	int dp[n];
//	memset(dp, 0, sizeof(dp));
//	dp[0] = a[0];
//	for (int i = 2; i < n - 1; i++) {
//		dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
//	}
//	int res1 = dp[n - 2];
//	memset(dp, 0, sizeof(dp));
//	dp[1] = a[1];
//	for (int i = 3; i < n; i++) {
//		dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
//	}
//	int res2 = dp[n - 1];
//	return max(res1, res2);
//}
//long long numWays(int width, int height, string bad[]) {
//	long long res = 0;
//	long long dp[width + 10][height + 10];
//	memset(dp, 0, sizeof(dp));
//	dp[0][0] = 1;
//	for (int i = 1; i <= width; i++) {
//		dp[i][0] += dp[i-1][0];
//	}
//	for (int i = 1; i <= height; i++) {
//		dp[0][i] += dp[0][i-1];
//	}
//	for (int i = 1; i <= width; i++) {
//		for (int j = 1; j <= height; j++) {
//			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//		}
//	}
//	res = dp[width][height];
//
////	dp[0][0] = 1;
////
////	for (int i = 0; i <= height; ++i) {
////		for (int j = 0; j <= width; ++j) {
//////			if (t[i][j][1])
////				dp[i + 1][j] += dp[i][j];
//////			if (t[i][j][0])
////				dp[i][j + 1] += dp[i][j];
////		}
////	}
////	res=dp[height][width];
//	return res;
//}
//int main() {
////	int a[] = { 10, 3, 2, 5, 7, 8 };
////	int a[]={11, 15};
////	int a[]={7, 7, 7, 7, 7, 7, 7};
////	int a[]={1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
////	int a[] = { 94, 40, 49, 65, 21, 21, 106, 80, 92, 81, 679, 4, 61, 6, 237, 12,
////			72, 74, 29, 95, 265, 35, 47, 1, 61, 397, 52, 72, 37, 51, 1, 81, 45,
////			435, 7, 36, 57, 86, 81, 72 };
////	int n = sizeof(a) / sizeof(int);
////	cout << maxDonations(a, n);
//	string bad[] = { };
////	cout<<numWays(1,1,bad);
//	cout << numWays(35, 31, bad);
//	return 0;
//}
//
