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
//void move(int&a, int&b) {
//	a -= b;
//	b <<= 1;
//}
////struct node{
////
////};
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int main() {
//	int n;
//	cin >> n;
//	int a[n], sum = 0, ave, cnt = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	ave = sum / n;
////	if (a[0] > ave) {
////		a[0] -= ave;
////		a[1] += ave;
////		cnt++;
////	}
//	for (int i = 0; i < n; i++) {
//		if (a[i] > ave) {
//			a[i + 1] += a[i] - ave;
//			cnt++;
//		}
//
//		else if (a[i] < ave) {
//			a[i + 1] -= (ave - a[i]);
//			cnt++;
//		}
//	}
////	if (a[n - 1] > ave) {
////		a[n - 1] -= ave;
////		a[n - 2] += ave;
////	}
//	cout<<cnt;
//	return 0;
//}
//
