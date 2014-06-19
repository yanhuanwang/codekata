///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <string.h>
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
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int main() {
//	int n;
//	cin >> n;
//	string a, b;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
////		cout<<a<<' '<<b<<endl;
//		reverse(a.begin(), a.end());
//		reverse(b.begin(), b.end());
////		cout<<a<<' '<<b<<endl;
//		stringstream ss;
//		ss << a << ' ' << b;
//		int x, y, z;
//		ss >> x >> y;
//		z = x + y;
////		cout<<z<<endl;
////		ss.str().clear();
//		ss.clear();
//		ss << z;
////		cout<<ss.str()<<endl;
//		string s;
//		ss >> s;
//		reverse(s.begin(), s.end());
//		ss.clear();
//		ss << s;
//		ss >> z;
//		cout << z << endl;
//	}
//	return 0;
//}
//
