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
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a == b) {
//		cout << 0;
//		return 0;
//	}
//	queue<int> q, p;
////	set<int> used;
//	bool f[100004];
//	memset(f, 0, sizeof(f));
//	q.push(a);
////	used.insert(a);
//	f[a] = 1;
//	int cnt = 0;
//	while (!q.empty()) {
//		cnt++;
//		while (!q.empty()) {
//			int t = q.front();
//			q.pop();
//			//case1
//			int x = t + 1;
//			if (x < 0 || x > 100000 || f[x]) {
////				goto case2;
//			} else if (x == b) {
//				cout << cnt << endl;
//				return 0;
//			} else {
//				p.push(x);
////				used.insert(x);
//				f[x] = 1;
//			}
//			//case1
//			//case2
////			case2:;
//			x = t - 1;
//			if (x < 0 || x > 100000 || f[x]) {
////				goto case3;
//			} else if (x == b) {
//				cout << cnt << endl;
//				return 0;
//			} else {
//				p.push(x);
////				used.insert(x);
//				f[x] = 1;
//			}
//			//case2
//			//case3
////			case3: ;
//			x = t * 2;
//			if (x < 0 || x > 100000 || f[x]) {
////				continue;
//			} else if (x == b) {
//				cout << cnt << endl;
//				return 0;
//			} else {
//				p.push(x);
////				used.insert(x);
//				f[x] = 1;
//			}
//			//case3
//		}
//		swap(q, p);
//	}
//	return 0;
//}
