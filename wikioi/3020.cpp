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
//void getNextCordinate(int &i, int &j, int N) {
//	if (j == 0) {
//		j = i + 1;
//		i = 0;
//		return;
//	}
//	i++;
//	j--;
//}
//int cacl(int n) {
//	int res = 0;
//	if (n == 0) {
//		return 0;
//	}
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 0;
//	}
//	return cacl(n - 1) + cacl(n - 2) + cacl(n - 3) + 1;
//	return res;
//}
//int main() {
//	int n;
//	cin >> n;
//	int days;
//	cin >> days;
//	int a[days];
//	for (int i = 0; i < days; i++) {
//		cin >> a[i];
//	}
//	unsigned long long remain = n;
//	int i = 0;
//	while ((remain > 0) && (i < days)) {
//		remain -= a[i];
//		remain *= 2;
//		i++;
//	}
//	if (i != days) {
//		cout << "-" << i;
//		return 0;
//	}
//	cout<<remain;
//	return 0;
//}
//
