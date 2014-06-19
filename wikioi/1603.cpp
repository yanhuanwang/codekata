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
//struct node {
//	int a, b, c;
//};
//bool compareNode(node nd1, node nd2) {
//	return ((nd1.a < nd2.a)); //&& (nd1.b >= nd2.b) && (nd1.c <= nd2.c));
//}
//bool compareNode2(node nd1, node nd2) {
//	return  (nd1.b > nd2.b);// && (nd1.c <= nd2.c));
//}
//bool compareNode3(node nd1, node nd2) {
//	return  (nd1.c < nd2.c);// && (nd1.c <= nd2.c));
//}
//int main() {
//	int n;
//	cin >> n;
//	node nd[n];
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].a >> nd[i].b >> nd[i].c;
//	}
//	vector<node> vn(nd, nd + n);
//	sort(vn.begin(), vn.end(), compareNode);
////	for (auto x : vn) {
////		cout << x.a << " " << x.b << " " << x.c << endl;
////	}
////	cout << vn.back().c;
//	vector<node> vn2;
//	int maxLength = vn.back().a;
//	for (int i = 0; i < vn.size(); i++) {
//		if (vn[i].a == maxLength) {
//			vn2.push_back(vn[i]);
//		}
//	}
//	sort(vn2.begin(), vn2.end(), compareNode2);
////	for (auto x : vn2) {
////		cout << x.a << " " << x.b << " " << x.c << endl;
////	}
//	int minDiameter=vn2.back().b;
//	vector<node> vn3;
//	for (int i = 0; i < vn2.size(); i++) {
//		if (vn2[i].b == minDiameter) {
//			vn3.push_back(vn2[i]);
//		}
//	}
//	sort(vn3.begin(), vn3.end(), compareNode3);
//	cout << vn3.back().c;
////	vector<int> via(a,a+n), vib(b,b+n), vic(c,c+n);
//
//	return 0;
//}
//
