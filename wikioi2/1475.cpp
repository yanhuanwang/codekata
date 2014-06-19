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
//map<char, int> p;
//
//int main() {
//	p['0'] = 0;
//	p['1'] = 1;
//	p['2'] = 2;
//	p['3'] = 3;
//	p['4'] = 4;
//	p['5'] = 5;
//	p['6'] = 6;
//	p['7'] = 7;
//	p['8'] = 8;
//	p['9'] = 9;
//	p['A'] = 10;
//	p['B'] = 11;
//	p['C'] = 12;
//	p['D'] = 13;
//	p['E'] = 14;
//	p['F'] = 15;
//	string m;
//	int n;
//	cin >> m >> n;
//	int sum = 0;
//	for (int i = m.size()-1; i >= 0; i--) {
//		sum += p[m[i]]*pow(n,m.size()-i-1);
//	}
//	cout << sum;
//	return 0;
//}
//
