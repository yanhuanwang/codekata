///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
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
//int process(int A) {
//	if (A >= 0) {
//		return 5;
//	}
//	return process(A + 1) + process(A + 2) + 1;
//}
//int main() {
//	int n;
//	cin >> n;
//	int a[101];
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < n; i++) {
//		int b;
//		cin >> b;
//		a[b] = 1;
//	}
//	int cnt = 0, sum = 0, x, i;
//	for (i = 1; i <= 100; i += 2) {
//		if (a[i] > 0) {
//			if (cnt > sum) {
//				sum = cnt;
//				x = i - cnt * 2;
//			}
//			cnt = 0;
//		} else {
//			cnt++;
//		}
//	}
//	if (cnt > sum) {
//		sum = cnt;
//		x = 99 - cnt * 2+2;
//	}
//	cnt = 0;
//	for (i = 2; i <= 100; i += 2) {
//		if (a[i] > 0) {
//			if (cnt > sum) {
//				sum = cnt;
//				x = i - cnt * 2;
//			}
//			cnt = 0;
//		} else {
//			cnt++;
//		}
//	}
//	if (cnt > sum) {
//		sum = cnt;
//		x = 100 - cnt * 2+2;
//	}
////	for (int i = 1; i <= 100; i += 2) {
////		if (a[i] > 0) {
////			if (cnt > sum) {
////				sum = cnt;
////				x = i;
////			}
////			cnt = 0;
////		}
////		cnt++;
////	}
////	cnt = 0;
////	for (int i = 2; i <= 100; i += 2) {
////		if (a[i] > 0) {
////			if (cnt > sum) {
////				sum = cnt;
////				x = i;
////			}
////			cnt = 0;
////		}
////		cnt++;
////	}
//	cout << x << ' ' << sum;
////	int aa[51], bb[51];
////	for (int i = 1; i <= 100; i += 2) {
////		aa[(i + 1) / 2] = a[i];
////	}
////	for (int i = 2; i <= 100; i += 2) {
////		bb[i / 2] = a[i];
////	}
////	int cnt = 0, sum = 0, x;
////	for (int i = 1; i <= 50; i++) {
////		if (aa[i] > 0) {
////			if(cnt>sum){
////				sum=cnt;
////				x=i;
////			}
////			cnt = 0;
////		}
////		cnt++;
////	}
//	return 0;
//}
//
