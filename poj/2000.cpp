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
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	int a;
//	while (cin >> a) {
//		if (!a) {
//			break;
//		}
//		//n(n+1)(2n+1)/6
//		int n = (int) sqrt(a * 2);
//		while (n * (n + 1) / 2 > a) {
//			n--;
//		}
//		int res = n * (n + 1) * (2 * n + 1) / 6;
////		if(n*n>a*2){
////			cout<<"error"<<endl;
////		}
//		res += (n + 1) * (a - n * (n + 1) / 2);
//		cout << a << ' ' << res << endl;
//	}
//	return 0;
//}
//