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
//	int n, l;
//	cin >> n >> l;
//	long long int c[n + 1], s[n + 1];
//	memset(s, 0, sizeof(s));
//	for (int i = 1; i <= n; i++) {
//		cin >> c[i];
//		if (i > 1) {
//			s[i] = s[i - 1] + c[i];
//		} else {
//			s[i] = c[i];
//		}
//	}
//	long long int dp[n + 1]; //dp[i]=min(dp[j]+(i-j+¦²Ck-L)^2));
//	dp[0] = 0;
//	dp[1] = c[1];
//	memset(dp, 0, sizeof(dp));
////	cout<<~(1<<31)<<endl;
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 9223372036854775807;
//		for (int j = 0; j < i; j++) {
//			if (j == 0) {
//				long long int a = i - j - 1 + s[i] - l;
//				a = a * a;
//				dp[i] = min(dp[i], dp[j] + a);
//				continue;
//			}
//			long long int a = i - j - 1 + s[i] - s[j] - l;
//			a = a * a;
//			dp[i] = min(dp[i], dp[j] + a);
//		}
//	}
//	cout << dp[n];
//	return 0;
//}
