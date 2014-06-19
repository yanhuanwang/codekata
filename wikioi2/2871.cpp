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
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int main() {
//	int n, m, a, b;
//	cin >> n >> m >> a >> b;
//	int c[n + 2];
//	memset(c, 0, sizeof(c));
//	for (int i = 1; i <= n+1; i++) {
//		cout << c[i] << " ";
//	}
//	cout << endl;
//	for (int i = 1; i <= m; i++) {
////		cin >> a[i];
////		if ((i % a == 0) && (i % b == 0)) {
//
////		} else
//		if (i % a == 0) {
//			c[i] = !c[i];
//		}
////			else
//		if (i % b == 0) {
//			c[i] = !c[i];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << c[i] << " ";
//	}
//	cout << endl;
//	for (int i = 1; i <= n + 1; i++) {
//		if (i % 3 == 0)
//			c[i] = 1;
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << c[i] << " ";
//	}
//	cout << endl;
//	int cnt = 0;
//	for (int j = 1; j <= n; j++) {
//		if ((c[j] == 0)) {
//			cnt++;
//		}
//	}
//	cout << cnt;
//	return 0;
//}
//int main2() {
//	int a[10000], k, n, r, i, v = 0, m;
//	scanf("%d%d%d%d", &n, &m, &k, &r);
//	for (i = 1; i <= n + 1; i++)
//		a[i] = 1;
//	for (i = 1; i <= m; i++) {
//		if (i % k == 0)
//			a[i] = !a[i];
//		if (i % r == 0)
//			a[i] = !a[i];
//	}
//	for (i = 1; i <= n + 1; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	for (i = 1; i <= n + 1; i++) {
//		if (i % 3 == 0)
//			a[i] = 0;
//	}
//	for (i = 1; i <= n + 1; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	for (i = 1; i <= n + 1; i++) {
//		if (a[i] == 1)
//			v++;
//	}
//	printf("%d", v);
//	return 0;
//}
