//#include<iostream>
//#include<string.h>
//#include<algorithm>
//#include <cstdlib>
//using namespace std;
//int main() {
//	int n, K;
//	string s;
//	long long dp[45][45];
//	while (cin >> n >> K) {
//		memset(dp, 0, sizeof(dp));
//		cin >> s;
//		for (int k = 1; k <= K; k++) {
//			for (int i = k; i <= n; i++) {
//				for (int j = k - 1; j < i; j++) {
//					if (!j) {
//						continue;
//					}
////					int index1 = 1, num1 = 0, index2 = j + 1, num2 = 0;
////					while (index1 <= j) {
////						num1 = num1 * 10 + a[index1];
////						index1++;
////					}
//					int num1 = atoi(s.substr(0, j).c_str());
////					cout << "k=" << k << "\ti=" << i << "\tj=" << j << "\tnum1="
////							<< num1 << "\tdp[" << i << "][" << k << "]="
////							<< dp[i][k] << endl;
////					while (index2 <= i) {
////						num2 = num2 * 10 + a[index2];
////						index2++;
////					}
//					int num2 = atoi(s.substr(j, i - j).c_str());
////					cout << "k=" << k << "\ti=" << i << "\tj=" << j << "\tnum2="
////							<< num2 << "\tdp[" << i << "][" << k << "]="
////							<< dp[i][k] << endl;
//					if (k == 1)
//						dp[i][k] = max(dp[i][k], (long long) num1 * num2); //只插入一个乘号
//					else
//						dp[i][k] = max(dp[i][k], dp[j][k - 1] * num2);
//				}
//			}
//		}
//		cout << dp[n][K] << endl;
//	}
//	return 0;
//}
