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
////	int dp[n+10][n+10];
//	memset(dp, 0, sizeof(dp));
//	for (int i = n - 1; i >= 0; i--) {
//		for (int j = i + 1; j < n; j++) {
//			if (s[i] == s[j]) {
//				dp[i][j] = dp[i + 1][j - 1];
//			} else {
//				dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
//			}
//		}
//	}
//	cout<<dp[0][n-1];
//	return 0;
//}
//
