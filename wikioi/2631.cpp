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
//	int a1, b1, c1;
//	int a2, b2, c2;
//	cin >> a1 >> b1 >> c1;
//	cin >> a2 >> b2 >> c2;
//	int d = a1 * a2 / (__gcd(a1, a2));
//	b1*=(d/a1);
//	c1*=(d/a1);
//	b2*=(d/a2);
//	c2*=(d/a2);
//	int y=(c2-c1)/(b2-b1);
//	int x=(c1-b1*y)/d;
//	cout<<"x="<<x<<endl;
//	cout<<"y="<<y<<endl;
//	return 0;
//}
//
