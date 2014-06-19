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
//#include <iomanip>
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
//map<char, int> m;
//
//bool cmp(char a, char b) {
//	return m[a] < m[b];
//}
//int main() {
//	string s;
//	long long int n;
//	cin >> s >> n;
////	if(n>0){
////		stringstream ss(s);
////		float a;
////		ss>>a;
////		cout<<fixed<<setprecision(n)<<a;
//////		printf("%.%df",);
////		return 0;
////	}
//	if (n > 0) {
//		int p = s.find(".", 0);
//		if (p == -1) {
//			string t = s + ".";
//			for (int i = 0; i < n; i++) {
//				t += "0";
//			}
//			cout << t;
//			return 0;
//		}
//		string res = s.substr(0, p + 1);
//
//		if (p + n + 1 > s.size()) {
//			for (int i = 0; i < p + n + 1 - s.size(); i++) {
//				s += '0';
//			}
//		}
//		res += s.substr(p + 1, n);
//		if (s[p + n + 1] >= '5') {
//			res[res.size() - 1]++;
//		}
//		cout << res;
//	}
//	if (n == 0) {
//		int p = s.find(".", 0);
//		string res = s.substr(0, p);
//		cout << res;
//	}
//	if (n < 0) {
//		int p = s.find(".", 0);
//		if (p == -1) {
//			if (s[s.size() + n] >= '5') {
//				s[s.size() + n] = '0';
//				s[s.size() + n - 1]++;
//			} else {
//				s[s.size() + n] = '0';
//			}
//		} else {
//			if (s[p + n] >= '5') {
//				s[p + n] = '0';
//				if (p+n-1<0) {
//					s.erase(p,s.size()-p);
//					s="1"+s;
////					s[p + n - 1]++;
//				}
//			} else {
//				s[p + n] = '0';
//				s.erase(p,s.size()-p);
//			}
//		}
//		cout << s;
//	}
////	for (int i = p + 1; i <= n + p; i++) {
////
////	}
//	return 0;
//}
//
