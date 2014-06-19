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
//#include <list>
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
//void dfs(int n, int &res, int &sum, int start) {
//	if (sum > n) {
//		return;
//	}
//	if (sum == n) {
//		res++;
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//		sum += i;
//		dfs(n, res, sum, i);
//		sum -= i;
//	}
//
//}
//int main() {
//	string s;
//	cin >> s;
//	int p = s.find('?', 0);
//	int sum = 0;
//	for (int i = 0; i < s.size() - 1; i++) {
//		if (i == p) {
//			continue;
//		}
//		sum += (10 - i) * (s[i] - '0');
////		cout<<sum<<" ";
//	}
//	if (s[s.size() - 1] == 'X') {
//		sum += 10;
//	} else {
//		sum += s[s.size() - 1] - '0';
//	}
//	if (!sum) {
//		cout << -1;
//		return 0;
//	}
//	for (int i = 0; i < 10; i++) {
//		sum += (10 - p) * i;
//		if (sum % 11 == 0) {
//			cout << i;
//			return 0;
//		}
//		sum -= (10 - p) * i;
//	}
//	cout<<-1;
//	return 0;
//}
//
