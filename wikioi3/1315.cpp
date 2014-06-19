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
////bitset<100000000> b;
//const int MAXN = 5000000;
//int flag[MAXN / 32 + 1];
//int primes[MAXN / 3 + 1], pi;
//void GetPrime_1() {
//	int i, j;
//	pi = 0;
//	memset(flag, 0, sizeof(flag));
//	for (i = 2; i < MAXN; i++)
//		if (!((flag[i / 32] >> (i % 32)) & 1)) {
//			primes[pi++] = i;
//			for (j = i; j < MAXN; j += i)
//				flag[j / 32] |= (1 << (j % 32));
//		}
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int dp[n + 1][m + 1];
//	memset(dp, 0, sizeof(dp));
//	//dp[i][j]=dp[i-1][j]+dp[i-1][j-1]
////	for (int i = 0; i <= m; i++) {
////		dp[i][1] = 1;
////	}
////dp[i][j]=(dp[i-1][j-k]+dp[i][j])%1000007
//	dp[0][0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= m; j++) {
////		for (int j = m; j >= 0; j--) {
//			for (int k = 0; k <= min(a[i-1], j); k++) {
//				dp[i][j] += dp[i - 1][j - k];
//			}
//			dp[i][j] %= 1000007;
//		}
//	}
//	cout << dp[n][m];
//	return 0;
//}
