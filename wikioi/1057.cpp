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
//	int res = -1;
//	int sum = 0;
//	int remain = 0;
//	for (int i = 0; i < 12; i++) {
//		int a;
//		cin >> a;
//		if ((300 + remain - a) >= 100) {
//			int t = (300 + remain - a) / 100;
//			sum += 100 * t;
//			remain = 300 + remain - a - 100 * t;
//		} else if ((300 + remain - a) < 0) {
//			cout << "-" << i + 1 << endl;
//			return 0;
//		}
//		else{
//			remain=300+remain-a;
//		}
//	}
//	cout<<sum*1.2+remain<<endl;
//	return 0;
//}
//
