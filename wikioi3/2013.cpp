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
//int getNext(int j, int n) {
//	int res = 0;
//	if (j <= n / 2) {
//		j = n - 1 - j;
//	} else {
//		j = n - j;
//	}
//	return j;
//}
//int main() {
//	int n,Case=0;
//	while (cin >> n) {
//		Case++;
//		if (!n) {
//			break;
//		}
//		string a[n], b[n];
//		for (int i = 0, j = 0; i < n; i++) {
//			cin >> a[i];
//			b[j] = a[i];
//			j = getNext(j, n);
////			cout<<j<<' ';
//		}
//		cout<<"SET "<<Case<<endl;
//		for (int i = 0; i < n; i++) {
//			cout << b[i] << endl;
//		}
//	}
//	return 0;
//}
//
