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
//#include <list>
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
//int process(int A) {
//	if (A >= 0) {
//		return 5;
//	}
//	return process(A + 1) + process(A + 2) + 1;
//}
//void dfs(int n, int &res, int &sum, int start) {
//	if (sum > n) {
//		return;
//	}
//	if (sum == n) {
//		res++;
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//		sum += i;
//		dfs(n, res, sum, i);
//		sum -= i;
//	}
//
//}
//int main() {
//	int n;
//	cin >> n;
//	int p[n], h[n];
//	for (int i = 0; i < n; i++) {
//		cin >> p[i] >> h[i];
//	}
//	int x, y;
//	cin >> x >> y;
//	int i = 0;
//	while (y > 0) {
//		p[i] -= x;
////		cout<<p[i]<<" ";
//		if (p[i] <= 0) {
//			i++;
//			if(i==n){
//				cout<<"yes!!very good";
//				return 0;
//			}
//		} else {
//			y -= h[i];
//		}
//	}
//	cout << "oh shit!";
//	return 0;
//}
//
