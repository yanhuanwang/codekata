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
//#include <stack>
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
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y;
//};
//int main() {
//	int n;
//	cin >> n;
//	string s[n];
//	for (int i = 0; i < n; i++) {
//		cin >> s[i];
//	}
//	sort(s, s + n);
////	for (int i = 0; i < n; i++) {
////		cout << s[i] << endl;
////	}
//	stack<string> ss;
//	ss.push(s[0]);
//	int res = 1;
//	for (int i = 1; i < n; i++) {
////		cout<<s[i].find(ss.top(), 0)<<endl;
//		if (s[i].find(ss.top(), 0) == 0) {
//			ss.push(s[i]);
//		} else {
//			res = max(res, (int) ss.size());
//			while (!ss.empty()) {
////				cout<<ss.top()<<endl;
//				if (s[i].find(ss.top()) == 0) {
//					break;
//				}
//				ss.pop();
//			}
//			ss.push(s[i]);
////			cout<<ss.top()<<endl;
//		}
//	}
//	res = max(res, int(ss.size()));
//	cout << res;
//
//	return 0;
//}
//
