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
//string o = "123456789";
//int parse(string s) {
//	int res = 0;
//	string t;
//	int i = 0;
//	char prev;
//	while (i < s.size() && s[i] != '+' && s[i] != '-') {
//		t += s[i];
//	}
//	res += atoi(t.c_str());
//	t.clear();
//	prev = s[i];
//	while (i < s.size()) {
//		if (s[i] != '+' && s[i] != '-') {
//			t += s[i];
//		} else {
//			if (prev == '+') {
//				res += atoi(t.c_str());
//				t.clear();
//			} else {
//				res -= atoi(t.c_str());
//				t.clear();
//			}
//			prev = s[i];
//		}
//		i++;
//	}
//	return res;
//}
//int parse2(string s) {
//	stringstream ss(s);
//	int res = 0;
//	int a;
//	ss >> res;
////	cout << res << endl;
//	char op;
//	while (!ss.eof()) {
//		ss >> op;
//		ss >> a;
//		if (op == '+') {
//			res += a;
////			cout << res << endl;
//		} else if (op == '-') {
//			res -= a;
////			cout << res << endl;
//		}
//	}
//	return res;
//}
//void dfs2(int n, int &sum, vector<string>&res, int start, string &s,
//		string sub) {
//	if (start > 10) {
//		return;
//	}
////	if (atoi(sub.c_str()) > n) {
////		return;
////	}
//	if (s[s.size() - 1] == '9') {
//		sum = parse2(s);
//		if (sum == n)
//			res.push_back(s);
//		return;
//	}
//	for (int i = 1; i <= 9 - start; i++) {
//		string t = s;
//		s += '+';
//		s += o.substr(start, i);
//		dfs2(n, sum, res, start + i, s, o.substr(start, i));
//		s = t;
//		s += '-';
//		s += o.substr(start, i);
//		dfs2(n, sum, res, start + i, s, o.substr(start, i));
//		s = t;
//
//	}
//}
//int main() {
////	cout << parse2("123+23+11");
//	int n;
//	cin >> n;
//	int sum = 0;
//	vector<string> res;
//	vector<char> vc;
////	dfs(n, sum, vc, res, 2);
//	string s;
//	string sub;
//	for (int i = 1; i <= 9; i++) {
//		s += o.substr(0, i);
//		dfs2(n, sum, res, i, s, o.substr(0, i));
//		s.clear();
//	}
////	dfs2(n, sum, vc, res, 0, s);
//	cout << res.size() << endl;
//	for (auto x : res) {
//		cout << x;
//		cout << endl;
//	}
//	return 0;
//}
//
