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
//string add(string s1, string s2) {
//	int len1 = s1.size();
//	int len2 = s2.size();
//	int c = 0;
//	int len = min(len1, len2);
////	cout<<len<<endl;
//	string res;
//	int sum = 0;
//	if (len1 > len2) {
//		for (int i = 0; i < len; i++) {
//			sum = c + s1[len1 - i - 1] - '0' + s2[len2 - i - 1] - '0';
////			cout<<sum<<endl;
//			c = sum / 10;
//			sum %= 10;
//			res = char(sum + '0') + res;
//		}
//		for (int i = len; i < len1; i++) {
//			sum = c + s1[len1 - i - 1] - '0';
//			c = sum / 10;
//			sum %= 10;
//			res = char(sum + '0') + res;
//		}
//		if (c) {
//			res = char(c + '0') + res;
//		}
//	} else {
//		for (int i = 0; i < len; i++) {
//			sum = c + s1[len1 - i - 1] - '0' + s2[len2 - i - 1] - '0';
////			cout<<sum<<endl;
//			c = sum / 10;
//			sum %= 10;
//			res = char(sum + '0') + res;
//		}
//		for (int i = len; i < len2; i++) {
//			sum = c + s2[len2 - i - 1] - '0';
////			cout<<sum<<endl;
//			c = sum / 10;
//			sum %= 10;
//			res = char(sum + '0') + res;
//		}
//		if (c) {
//			res = char(c + '0') + res;
//		}
//	}
//	return res;
//}
//int main() {
//	string s;
//	cin >> s;
//	vector<string> vs = Tokenize(s, "+");
//	string res;
//	for(int i=0;i<vs.size();i++){
//		res=add(res,vs[i]);
//	}
////	string res;//=add("11","222");
//	cout << res;
//	return 0;
//}
//
