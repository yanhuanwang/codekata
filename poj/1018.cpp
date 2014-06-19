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
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y;
//};
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		vector<vector<pair<float, float> > > vvp(n);
//		for (int i = 0; i < n; i++) {
//			int m;
//			cin >> m;
//			for (int j = 0; j < m; j++) {
//				float band, price;
//				cin >> band >> price;
//				vvp[i].push_back(make_pair(band, price));
//			}
//		}
////		for(auto x:vvp){
////			for(auto y:x){
////				cout<<y.first<<' '<<y.second<<' ';
////			}
////			cout<<endl;
////		}
//		pair<float, float> dp[n + 1];
////		memset(dp, 0, sizeof(dp));
////		dp[0] = vvp[0]
//		dp[0] = vvp[0][0];
//		for (int i = 1; i < vvp[0].size(); i++) {
//			if (vvp[0][i].first / vvp[0][i].second
//					> dp[0].first / dp[0].second) {
//				dp[0] = vvp[0][i];
//			}
//		}
//		for (int i = 1; i < vvp.size(); i++) {
//			float a, b;
//			a = min(dp[i - 1].first, vvp[i][0].first);
//			b = dp[i - 1].second + vvp[i][0].second;
//			dp[i] = make_pair(a, b);
//			for (int j = 1; j < vvp[i].size(); j++) {
//				a = min(dp[i - 1].first, vvp[i][j].first);
//				b = dp[i - 1].second + vvp[i][j].second;
//				if ((a / b) > (dp[i].first / dp[i].second)) {
//					dp[i] = make_pair(a, b);
//				}
//			}
//		}
////		cout<<fixed<<setprecision(3)<<dp[n-1].first/dp[n-1].second;
//		printf("%.3f\n", dp[n - 1].first / dp[n - 1].second);
//	}
//	return 0;
//}
//
