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
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int dp[n + 1][m + 1];
//	//dp[i][j]=dp[i-j][j]+dp[i-1][j-1]
//	dp[0][0] = 0;
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <= n; i++) {
//		dp[i][1] = 1;
//
//		for (int j = 2; j <= m && j <= i; j++) {
//			dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1];
//		}
////		dp[i][i] = 1;
//	}
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= m; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}
