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
//	int a, b;
//	cin>>a>>b;
//	queue<int> q, p;
//	set<int> used;
//	q.push(a);
//	used.insert(a);
//	int cnt=0;
//	while (!q.empty()) {
//		cnt++;
//		while (!q.empty()) {
//			int t = q.front();
//			q.pop();
//			//case1
//			int x = t + 1;
//			if (x < 0 || x > 100000 || used.count(x)) {
//				goto case2;
//			}
//			if (x == b) {
//				cout << cnt << endl;
//				return 0;
//			}
//			p.push(x);
//			used.insert(x);
//			//case1
//			//case2
//			case2:;
//			x = t - 1;
//			if (x < 0 || x > 100000 || used.count(x)) {
//				goto case3;
//			}
//			if (x == b) {
//				cout << cnt << endl;
//				return 0;
//			}
//			p.push(x);
//			used.insert(x);
//			//case2
//			//case3
//			case3:;
//			x = t * 2;
//			if (x < 0 || x > 100000 || used.count(x)) {
//				continue;
//			}
//			if (x == b) {
//				cout << cnt << endl;
//				return 0;
//			}
//			p.push(x);
//			used.insert(x);
//			//case3
//		}
//		swap(q, p);
//	}
//	return 0;
//}
