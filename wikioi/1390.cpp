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
//char num[30] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B',
//		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O' };
//string convert(int i, int base) {
//	string res;
//	while (i > 0) {
//		res += num[i % base];
//		i /= base;
//	}
//	reverse(res.begin(),res.end());
//	return res;
//}
//bool isValid(string s) {
////	stringstream s;
//	string t = s;
//	reverse(s.begin(), s.end());
//	return s == t;
//}
//int main() {
////	cout<<convert(10,15);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= 300; i++) {
//		string s1 = convert(i, n);
//		string s2 = convert(i * i, n);
//		if (isValid(s2)) {
//			cout << s1 << " " << s2 << endl;
//		}
//	}
//	return 0;
//}
//
