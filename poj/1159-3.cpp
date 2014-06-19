///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
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
//#define MAX 5005
//short int dp[MAX][MAX];
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//	string t = s;
//	reverse(t.begin(), t.end());
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (s[i-1] == t[j-1]) {
//				dp[i][j] = 1 + dp[i - 1][j - 1];
//			} else {
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			}
//		}
//	}
//	cout<<n-dp[n][n];
////	cout<<dp[n][n];
//	return 0;
//}
//
