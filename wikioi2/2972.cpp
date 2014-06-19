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
//map<char, int> m;
//
//bool cmp(char a, char b) {
//	return m[a] < m[b];
//}
//int main2() {
//	int n, m;
//	cin >> n >> m;
//	int a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int cnt = 0;
//	if (m > 0) {
//		do {
//			cnt++;
//			if (cnt > m) {
//				break;
//			}
//		} while (next_permutation(a, a + n));
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
//	} else {
//		do {
//			cnt++;
//			if (cnt > abs(m)) {
//				break;
//			}
//		} while (prev_permutation(a, a + n));
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
//	}
//	return 0;
//}
//int main() {
//	int n, m, i;
//	int py[1000];
//	scanf("%d\n%d", &n, &m);
//	for (i = 0; i < n; i++)
//		scanf("%d", &py[i]);
//	if (m > 0) {
//		m += 1;
//		while (m--) {
//			next_permutation(py, py + n);
//		}
//	}
//	if (m < 0) {
//		m *= -1;
//		while (m--) {
//			prev_permutation(py, py + n);
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%d ", py[i]);
//	return 0;
//}
