///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
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
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
////int dp[1000][1000];
////#define MAX 1000
//
//int main() {
//	map<char, int> m;
//	m['A'] = 2;
//	m['B'] = 2;
//	m['C'] = 2;
//	m['D'] = 3;
//	m['E'] = 3;
//	m['F'] = 3;
//	m['G'] = 4;
//	m['H'] = 4;
//	m['I'] = 4;
//	m['J'] = 5;
//	m['K'] = 5;
//	m['L'] = 5;
//	m['M'] = 6;
//	m['N'] = 6;
//	m['O'] = 6;
//	m['P'] = 7;
//	m['R'] = 7;
//	m['S'] = 7;
//	m['T'] = 8;
//	m['U'] = 8;
//	m['V'] = 8;
//	m['W'] = 9;
//	m['X'] = 9;
//	m['Y'] = 9;
//	int n;
//	cin >> n;
//	string a[n], b[n];
//	map<string, int> m2;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		for (int j = 0; j < a[i].size(); j++) {
//			if (m.count(a[i][j])) {
////				b[i] = char(m[a[i][j]]+'0') + b[i];
//				string s; //=string(m[a[i][j]] + '0');
//				s.insert(s.begin(), char(m[a[i][j]] + '0'));
//				a[i].replace(j, 1, s);
//			}
//			if (a[i][j] == '-') {
//				a[i].erase(a[i].begin() + j);
//				j--;
//			}
//		}
//		a[i].insert(a[i].begin() + 3, '-');
//		m2[a[i]]++;
////		cout << a[i] << endl;
//	}
//	for (map<string, int>::iterator it = m2.begin(); it != m2.end(); it++) {
//		if (it->second > 1) {
//			cout << it->first << ' ' << it->second << endl;
//		}
//	}
//	return 0;
//}
//
