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
//int process(int A, int B, int K) {
//	int res = 0;
//	return res;
//}
//unsigned long f[50005] = { 0, 1 };
//void set1() {
//	unsigned long i = 2, j, k = 2, p = 2;
//	while (1) {
//		for (j = 1; j <= p; j++) {
//			f[i] = (f[i - 1] + k) % 10000;
//			i++;
//			if (i > 50000)
//				return;
//		}
//		k = k * 2;
//		k = k % 10000;
//		p++;
//	}
//}
//int main() {
//	set1();
//	long n;
//	cin>>n;
//	cout<<f[n];
////	while (scanf("%ld", &n) != EOF) {
////		printf("%ld\n", f[n]);
////	}
////	return 0;
//	return 0;
//}
//
