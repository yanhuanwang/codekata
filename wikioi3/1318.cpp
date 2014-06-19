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
//	int n, a, b, c;
//	cin >> n >> a >> b >> c;
//	int x[n], s[n];
//	memset(s, 0, sizeof(s));
//	memset(x, 0, sizeof(x));
//	for (int i = 0; i < n; i++) {
//		cin >> x[i];
//		if (i > 0) {
//			s[i] = s[i - 1] + x[i];
//		} else {
//			s[i] = x[i];
//		}
//	}
//	long long int dp[n + 1]; //dp[i]=max(dp[j]+f(i,j));
//	dp[0] = 0;
////	dp[1] = c[1];
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <= n; i++) {
//		dp[i] = INT_MIN;
//		for (int j = 0; j < i; j++) {
//			if (j == 0) {
//				long long int r = s[i - 1];
//				long long t = a * r * r + b * r + c;
//				dp[i] = max(dp[i], dp[j] + t);
//				continue;
//			}
//			long long int r = s[i - 1] - s[j - 1];
//			long long t = a * r * r + b * r + c;
//			dp[i] = max(dp[i], dp[j] + t);
//		}
//	}
//	cout << dp[n];
//	return 0;
//}
