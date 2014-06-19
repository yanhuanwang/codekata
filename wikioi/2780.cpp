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
//bool is_prime(int n) {
//	if (n < 2)
//		return false;
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}
//bool compareStr(string a, string b) {
//	if (a.size() < b.size()) {
//		return true;
//	} else if (a.size() > b.size()) {
//		return false;
//	} else {
//		return a < b;
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	string a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	vector<string> vs(a, a + n);
//	sort(vs.begin(), vs.end(), compareStr);
//	for (int i = 0; i < n; i++) {
//		cout << vs[i] << endl;
//	}
//	return 0;
//}
//
