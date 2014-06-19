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
//class mycomparison {
//	bool reverse;
//public:
//	mycomparison(const bool& revparam = false) {
//		reverse = revparam;
//	}
//	bool operator()(const int& lhs, const int&rhs) const {
//		if (reverse)
//			return (lhs > rhs);
//		else
//			return (lhs < rhs);
//	}
//};
//int main() {
//	int a[7];
////	int cnt[7];
//	map<int, int> statistic[7];
////	priority_queue<>
////	memset(cnt, 0, sizeof(cnt));
//	while (1) {
//		for (int i = 0; i < 7; i++) {
//			cin >> a[i];
//			if (a[i]) {
//				statistic[i][a[i]]++;
//			}
//		}
//		if (!a[0]) {
//			break;
//		}
//	}
//	cout << "least" << ' ' << "most" << endl;
//	for (int i = 0; i < 7; i++) {
//		int res1 = INT_MAX, minN, res2 = INT_MIN, maxN;
//		for (auto x : statistic[i]) {
//			if (res1 > x.second) {
//				res1 = x.second;
//				minN = x.first;
//			}
//			if (res2 < x.second) {
//				res2 = x.second;
//				maxN = x.first;
//			}
////			res = min(res, x.second);
////			res2 = max(res2, x.second);
//		}
//		cout << minN << ' ' << maxN << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 7; i++) {
//		cout<<endl<<"pos: "<<i+1<<endl;
//		for (auto x : statistic[i]) {
//			cout << x.first << ' ' << x.second << endl;
//		}
//	}
//	return 0;
//}
//
