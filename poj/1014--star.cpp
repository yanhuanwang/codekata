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
//int b[6] = { 60, 30, 20, 15, 12, 10 };
//void dfs(int a[], int n, int start, int sum, int &res, bool &f,
//		vector<int>&path) {
//	if (f) {
//		return;
//	}
//	if (res * 2 == sum) {
//		f = true;
//		return;
//	}
//	if (res * 2 > sum) {
//		return;
//	}
//	if (start >= n) {
//		return;
//	}
////	if (res * 2 > sum) {
////		return;
////	}
//	for (int i = start; i < n; i++) {
//		for (int j = 0; j <= a[i]; j++) {
//			int t = res;
//			res += (i + 1) * j;
////			cout << "i=" << i << " j=" << j << " res=" << res << " path="; //<< endl;
//			path.push_back((i + 1) * j);
////			for (auto x : path) {
////				cout << x << ' ';
////			}
////			cout << endl;
//			dfs(a, n, i + 1, sum, res, f, path);
////			res -= (i + 1) * j;
//			path.pop_back();
//			res = t;
//		}
//	}
//}
//int main() {
//	int a[6];
//	int T = 0;
//	while (1) {
//		T++;
//		int sum = 0;
//		for (int i = 0; i < 6; i++) {
//			cin >> a[i];
//			a[i]%=b[i];
////			a[i] /= b[i];
////			if(a[i]>60){
////				if(a[i]&1){
////					a[i]=61;
////				}else{
////					a[i]=60;
////				}
////			}
//			sum += a[i] * (i + 1);
//		}
////		cout << sum << ' ';
//		if ((!a[0]) && (!a[1]) && (!a[2]) && (!a[3]) && (!a[4]) && (!a[5])) {
//			break;
//		}
////dp[i][j]=max(dp[i][j-1],dp[i-1][j-1]+a[j])
////		memset(dp, 0, sizeof(dp));
//		int res = 0;
//		bool f = false;
//		vector<int> path;
//		dfs(a, 6, 0, sum, res, f, path);
//		if (f) {
//			cout << "Collection #" << T << ":\n" << "Can be divided.\n\n";
//		} else {
//			cout << "Collection #" << T << ":\n" << "Can't be divided.\n\n";
//		}
//	}
//	return 0;
//}
//
