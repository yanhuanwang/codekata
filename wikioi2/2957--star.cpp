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
//struct node {
//	int id;
//	float speed;
//	float rate;
//	float score;
//};
//bool cmp(node a, node b) {
//	if (a.score == b.score) {
//		return a.id < b.id;
//	}
//	return a.score > b.score;
//}
//void dfs(int n, long long int &res, int notValid[], int start) {
//	res++;
//	if (start > n) {
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//
//		if (notValid[i]) {
//			continue;
//		}
//		if (i - 1 >= 1) {
//			notValid[i - 1]++;
//		}
//		if (i + 1 <= n) {
//			notValid[i + 1]++;
//		}
//		dfs(n, res, notValid, i + 2);
//		if (i - 1 >= 1) {
//			notValid[i - 1]--;
//		}
//		if (i + 1 <= n) {
//			notValid[i + 1]--;
//		}
//	}
//}
//int main2() {
//	int n, i;
//	long long a[91], sum;
//	scanf("%d", &n);
//	a[0] = 1;
//	a[1] = 2;
//	if (n == 0)
//		sum = 1;
//	if (n == 1)
//		sum = 2;
//	else
//		for (i = 2; i <= n; i++) {
//			a[i] = a[i - 1] + a[i - 2];
//			sum = a[n];
//		}
//	printf("%lld", sum);
//	return 0;
//}
//int main() {
//	int n;
//	cin >> n;
//	long long res = 1;
//	int notValid[n + 1];
//	for (int i = 0; i <= n; i++) {
//		notValid[i] = 0;
//	}
//	for (int i = 1; i <= n; i++) {
//
//		if (i - 1 >= 1) {
//			notValid[i - 1]++;
//		}
//		if (i + 1 <= n) {
//			notValid[i + 1]++;
//		}
//		dfs(n, res, notValid, i + 1);
//		if (i - 1 >= 1) {
//			notValid[i - 1]--;
//		}
//		if (i + 1 <= n) {
//			notValid[i + 1]--;
//		}
//	}
//	cout << res;
//	return 0;
//}
