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
//struct node {
//	int id;
//	int h;
//	int w;
//};
//bool cmp(node a, node b) {
//	if (a.h == b.h && a.w == b.w) {
//		return a.id < b.id;
//	} else if (a.h == b.h) {
//		return a.w < b.w;
//	} else {
//		return a.h < b.h;
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	node nd[n];
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].h >> nd[i].w;
//		nd[i].id = i + 1;
//	}
//	node nd2[n];
//	for (int i = 0; i < n; i++) {
//		nd2[i] = nd[i];
//	}
//	sort(nd, nd + n, cmp);
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (nd2[j].id == nd[i].id) {
//				sum += abs(j - i);
//			}
//		}
//	}
//	cout<<sum;
//	return 0;
//}
//
