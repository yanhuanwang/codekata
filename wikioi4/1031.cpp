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
//void move(int&a, int&b) {
//	a -= b;
//	b <<= 1;
//}
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y;
//};
//
//const int MAXN = 1800;
//int flag[MAXN / 32 + 1];
//int primes[MAXN / 3 + 1], pi;
//void GetPrime_1() {
//	int i, j;
//	pi = 0;
//	memset(flag, 0, sizeof(flag));
//	for (i = 2; i < MAXN; i++)
//		if (!((flag[i / 32] >> (i % 32)) & 1)) {
//			primes[pi++] = i;
//			for (j = i; j < MAXN; j += i)
//				flag[j / 32] |= (1 << (j % 32));
//		}
//}
//bool is_prime(int n) {
//	if (n < 2) {
//		return false;
//	}
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void dfs(vector<vector<int> > &res, vector<int>&path, int n, int start,
//		set<int>&used) {
//	if (path.size() == n) {
//		res.push_back(path);
//		return;
//	}
//	for (int i = 2; i <= n; i++) {
//		if (used.count(i)) {
//			continue;
//		}
//		if(!(path.back() + i)&1){
//			continue;
//		}
//		if (start == n-1) {
//			if (is_prime(path.back() + i) && (is_prime(i + 1))) {
//				path.push_back(i);
//				used.insert(i);
//				dfs(res, path, n, start + 1, used);
//				path.pop_back();
//				used.erase(i);
//			}
//		} else if (is_prime(path.back() + i)) {
//			path.push_back(i);
//			used.insert(i);
//			dfs(res, path, n, start + 1, used);
//			path.pop_back();
//			used.erase(i);
//		}
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	if (n > 1 && (n & 1)) {
//		return 0;
//	}
////	GetPrime_1();
//	vector<vector<int> > res;
//	vector<int> path;
//	set<int> used;
//	path.push_back(1);
//	used.insert(1);
//	dfs(res, path, n, 1, used);
//	sort(res.begin(), res.end());
//	for (int i = 0; i < res.size(); i++) {
//		for (int j = 0; j < res[0].size(); j++) {
//			cout << res[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//
