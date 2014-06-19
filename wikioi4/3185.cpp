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
//#include <stack>
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
//
//struct node {
//	int x, y;
//};
//int a[1000000];
//int process(int n) {
//	int cnt = 0;
//	while (n != 1) {
//		if (n & 1) {
//			n = n * 3 + 1;
//		} else {
//			n >>= 1;
//		}
//		cnt++;
//		if (cnt > 1000000)
//			return -1;
//	}
//	a[n] = cnt;
//	return cnt;
//}
//int main() {
//	int n, a, b;
//	cin >> n;
//	queue<int> q;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		if (a == 1) {
//			cin >> b;
//			q.push(b);
//		}
//		if (a == 2) {
//			if (q.empty()) {
//				cout << "impossible!";
//				return 0;
//			} else
//				q.pop();
//		}
////		if(a==3){
////			cout<<s.top()<<endl;
////		}
//
//	}
//	if (q.empty()) {
//		cout << "impossible!";
//	} else
//		cout << q.front();
//	return 0;
//}
//
