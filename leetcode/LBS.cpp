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
//int main() {
//	int arr[] = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int dp[n], dp2[n];
//	for (int i = 0; i < n; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	for (int i = n - 1; i >= 0; i--) {
//		dp2[i] = 1;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[i] > arr[j]) {
//				dp2[i] = max(dp2[i], dp2[j] + 1);
//			}
//		}
//	}
//	int res = INT_MIN;
//	for (int i = 0; i < n; i++) {
//		res = max(res, dp[i] + dp2[i]);
//	}
//	printf("Length of LBS is %d\n", res-1);
//
//	getchar();
//	return 0;
//}
