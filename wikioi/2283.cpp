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
//int main() {
//	string s;
//	cin >> s;
//	string res[11] = { "You are a Foolish Man", "You are a Foolish Man",
//			"You are a Foolish Man", "You are on a Killing Spree",
//			"You are Dominating", "You have a Mega-Kill", "You are Unstoppable",
//			"You are Wicked Sick", "You have a M-m-m-m....Monster Kill",
//			"You are Godlike", "You are Beyond Godlike (Somebody kill him!)" };
//	int cnt = 0;
//	int sum = 0;
//	for (int i = 0; i < s.size();) {
//		while (s[i] == 'K') {
//			i++;
//			cnt++;
//			sum = max(sum, cnt);
//		}
//		cnt = 0;
//		i++;
//	}
//	if (sum > 10) {
//		sum = 10;
//	}
//	cout << res[sum];
//	return 0;
//}
//
