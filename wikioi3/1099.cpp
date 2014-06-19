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
//int main() {
//	string a, b;
//	cin >> a >> b;
//	string c, d;
//	multimap<string, string> m;
//	while (cin >> c >> d) {
////		m[c] = d;
//		m.insert(make_pair(c,d));
//	}
////	for (auto x : m) {
////		cout << x.first << ' ' << x.second << endl;
////	}
//	queue<string> q, p;
//	q.push(a);
//	set<string> visited;
//	visited.insert(a);
//	int cnt = 0;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			string t = q.front();
//			q.pop();
//			for (multimap<string, string>::iterator it = m.begin(); it != m.end();
//					it++) {
//				int pos = t.find(it->first);
//				if (pos != -1) {
//					string tt = t;
//					tt.replace(pos, it->first.size(), it->second);
//					if (tt == b) {
//						cout << cnt + 1;
//						return 0;
//					}
//					if (!visited.count(tt)) {
//						p.push(tt);
//						visited.insert(tt);
//					}
//				}
//			}
//		}
//		cnt++;
//		if(cnt>10){
//			cout<<"NO ANSWER!";
//			return 0;
//		}
//		swap(q, p);
//	}
//	return 0;
//}
//
