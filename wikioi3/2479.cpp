///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <string.h>
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
//#define PI 3.14159265358979323846264338327950288
//vector<string> Tokenize(string s, string ch) {
//	vector<string> ret;
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//		if (p2 == -1)
//			p2 = s.size();
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//	return ret;
//}
//int my_abs(int a) {
//	int i = a >> 31;
//	return ((a ^ i) - i);
//}
//
//vector<int> TokenizeInt(string s, string ch) {
//	vector<int> ret;
//	vector<string> p = Tokenize(s, ch);
//	for (int i = 0; i < p.size(); i++)
//		ret.push_back(atoi(p[i].c_str()));
//	return ret;
//}
//
//int main() {
//	int T;
////	cin >> T;
//	scanf("%d",&T);
//	while (T--) {
//		int n;
////		cin >> n;
//		scanf("%d",&n);
//		int a[n], dp[n];
//		for (int i = 0; i < n; i++) {
////			cin >> a[i];
//			scanf("%d",&a[i]);
//			if (i == 0) {
//				dp[0] = a[0];
//			} else {
//				if (dp[i - 1] > 0) {
//					dp[i] = dp[i - 1] + a[i];
//				} else {
//					dp[i] = a[i];
//				}
//			}
//		}
//		int dp2[n];
//		dp2[n - 1] = a[n - 1];
//		for (int i = n - 2; i >= 0; i--) {
//			if (dp2[i + 1] > 0) {
//				dp2[i] = dp2[i + 1] + a[i];
//			} else {
//				dp2[i] = a[i];
//			}
//		}
//		int res = INT_MIN;
//		for (int i = 0; i < n - 1; i++) {
//			for (int j = i + 1; j < n; j++) {
//				res = max(res, dp[i] + dp2[j]);
//			}
//		}
//		cout << res << endl;
////		for (int i = 0; i < n; i++) {
////			cout << dp[i] << ' ';
////		}
////		cout << endl;
////		for (int i = 0; i < n; i++) {
////			cout << dp2[i] << ' ';
////		}
//	}
//	return 0;
//}
//
