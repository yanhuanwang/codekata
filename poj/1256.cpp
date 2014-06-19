///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <string.h>
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
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//struct node {
//	int val;
//	int i;
//	int j;
//};
//class mycomparison {
//	bool reverse;
//public:
//	mycomparison(const bool& revparam = true) {
//		reverse = revparam;
//	}
//	bool operator()(const node& lhs, const node&rhs) const {
//		if (reverse)
//			return (lhs.val > rhs.val);
//		else
//			return (lhs.val < rhs.val);
//	}
//};
////bool cmp(node a, node b) {
////	return a.val > b.val;
////}
//bool cmp(const char &a, const char &b) {
//	if (a <= 'Z' && a >= 'A' && b <= 'Z' && b >= 'A')
//		return a < b;
//	if (a <= 'z' && a >= 'a' && b <= 'z' && b >= 'a')
//		return a < b;
//	if (a <= 'Z' && a >= 'A' && b <= 'z' && b >= 'a')
//		return a + 'a' - 'A' <= b;
//	if (a <= 'z' && a >= 'a' && b <= 'Z' && b >= 'A')
//		return a < b + 'a' - 'A';
//}
//int main() {
//	int n;
//	cin >> n;
//	string a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		sort(a[i].begin(), a[i].end(),cmp);
//		do {
//			cout << a[i] << endl;
//		} while (next_permutation(a[i].begin(), a[i].end(),cmp));
//	}
//
//	return 0;
//}
//
