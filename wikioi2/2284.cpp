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
//const int m = 10000;
//int f[m];
//int main() {
//	int i, l, k, n, j;
//	scanf("%d", &n);
//	memset(f, 0, sizeof(f));
//	f[0] = 1;
//	for (i = 2; i <= n; i++) {
//		int c = 0;
//		for (j = 0; j < m; j++) {
//			int s = f[j] * i + c;
//			f[j] = s % 10;
//			c = s / 10;
//		}
//	}
//	for (j = m - 1; j >= 0; j--)
//		if (f[j])
//			break;
//	for (i = j; i >= 0; i--)
//		printf("%d", f[i]);
//	printf("\n");
//
//	return 0;
//}
