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
//struct node {
//	string name;
//	int money;
//	int pnum;
//	int ave;
//	vector<string> friends;
//	int recieve;
//};
//map<string, node> m;
//int main() {
//	int n;
//	cin >> n;
//	string names[n];
//	for (int i = 0; i < n; i++) {
//		cin >> names[i];
//	}
//	for (int i = 0; i < n; i++) {
//		node t;
//		cin >> t.name;
//		cin >> t.money;
//		cin >> t.pnum;
//		t.ave = 0;
//		t.recieve = 0;
//		if (t.pnum > 0) {
//			t.ave = t.money / t.pnum;
//			t.money=t.ave*t.pnum;
//			for (int j = 0; j < t.pnum; j++) {
//				string tn;
//				cin >> tn;
//				t.friends.push_back(tn);
//			}
//		}
//		m[t.name] = t;
//	}
////	for (auto x : m) {
////		cout << x.first << " " << x.second.money << " " << x.second.pnum
////				<< endl;
////		for (int i = 0; i < x.second.friends.size(); i++) {
////			m[x.second.friends[i]].recieve += x.second.ave;
////		}
////	}
//	for (map<string, node>::iterator it = m.begin(); it != m.end(); it++) {
////		cout<<it->second.name<<endl;
//		for (int i = 0; i < it->second.friends.size(); i++) {
//			m[it->second.friends[i]].recieve += it->second.ave;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << names[i] << " " << int(m[names[i]].recieve - m[names[i]].money)
//				<< endl;
//	}
////	for (map<string, node>::iterator it = m.begin(); it != m.end(); it++) {
////		cout << it->first << " " << it->second.recieve - it->second.money
////				<< endl;
////	}
//	return 0;
//}
//
