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
//	int a[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	list<string> MyList;
//	MyList.push_back("B1");
//	MyList.push_back("B2");
//	MyList.push_back("B3");
//	MyList.push_back("B4");
//	MyList.push_back("B5");
//	MyList.push_back("B6");
//	MyList.push_back("B7");
//	MyList.push_back("B8");
//	MyList.push_back("B9");
//	MyList.push_back("B10");
//	MyList.push_back("BJ");
//	MyList.push_back("BQ");
//	MyList.push_back("BK");
//	MyList.push_back("H1");
//	MyList.push_back("H2");
//	MyList.push_back("H3");
//	MyList.push_back("H4");
//	MyList.push_back("H5");
//	MyList.push_back("H6");
//	MyList.push_back("H7");
//	MyList.push_back("H8");
//	MyList.push_back("H9");
//	MyList.push_back("H10");
//	MyList.push_back("HJ");
//	MyList.push_back("HQ");
//	MyList.push_back("HK");
//	MyList.push_back("M1");
//	MyList.push_back("M2");
//	MyList.push_back("M3");
//	MyList.push_back("M4");
//	MyList.push_back("M5");
//	MyList.push_back("M6");
//	MyList.push_back("M7");
//	MyList.push_back("M8");
//	MyList.push_back("M9");
//	MyList.push_back("M10");
//	MyList.push_back("MJ");
//	MyList.push_back("MQ");
//	MyList.push_back("MK");
//	MyList.push_back("F1");
//	MyList.push_back("F2");
//	MyList.push_back("F3");
//	MyList.push_back("F4");
//	MyList.push_back("F5");
//	MyList.push_back("F6");
//	MyList.push_back("F7");
//	MyList.push_back("F8");
//	MyList.push_back("F9");
//	MyList.push_back("F10");
//	MyList.push_back("FJ");
//	MyList.push_back("FQ");
//	MyList.push_back("FK");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < a[i]; j++) {
//			MyList.push_back(MyList.front());
//			MyList.pop_front();
//		}
//	}
//	for (std::list<string>::iterator it = MyList.begin(); it != MyList.end(); it++)
//		std::cout << *it << ' ';
//	return 0;
//}
//
