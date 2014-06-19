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
//int gcd(int a, int b) {
//	return !b ? a : gcd(b, a % b);
//}
//
//int main() {
//	char c;
//	int l;
//	cin >> c >> l;
//	if (c == 'Z')
//		for (int i = 1; i <= l; i++) {
//			for (int j = 1; j <= l; j++)
//				printf("*");
//			if (i < l)
//				printf("\n");
//		}
//	else
//		for (int i = 1; i <= l * 2 - 1; i++) {
//			for (int j = 1; j <= l * 2 - 1; j++) {
//				if (j >= abs(l - i) + 1 && j <= (2 * l - 1) - abs(l - i))
//					printf("*");
//				else
//					printf(" ");
//			}
//
//			if (i < 2 * l - 1)
//				printf("\n");
//		}
//
//	return 0;
//}
//
