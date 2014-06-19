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
////vector<pair<int, int>> vpii;
//bool com(pair<int, int> p1, pair<int, int> p2) {
//	return p1.first < p2.first;
//}
//bool m[1000001]={0};
//int main() {
//	int n;
//	cin >> n;
//	int start = INT_MAX;
//	int end = INT_MIN;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		start = min(start, a);
//		end = max(end, b);
////		vpii.push_back(make_pair(a, b));
//		for (int i = a; i < b; i++)
//			m[i] = true;
//	}
//	int res1 = INT_MIN, res2 = INT_MIN;
////	bool flag = true;
//	int i = start, j = end;
//	while (i < j) {
//		int t1 = 0;
//		while (m[i]&&(i < j)) {
//			t1++;
//			i++;
//		}
//		res1 = max(res1, t1);
//		int t2 = 0;
//		while (!m[i]&&(i < j)) {
//			t2++;
//			i++;
//		}
//		res2 = max(res2, t2);
////		cout<<res2<<endl;
//	}
//	cout << res1 << " " << res2;
////	sort(vpii.begin(), vpii.end());
//
//	return 0;
//}
//
