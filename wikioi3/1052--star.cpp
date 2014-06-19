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
//	int time;
//	int val;
//	friend bool operator<(node a, node b) {
//		return a.val < b.val;
//	}
//	//	friend bool operator<(mouse a, mouse b) {
//	//		return a.score < b.score;
//	//	}
//};
//bool cmp(node a, node b) {
//	if (a.time == b.time) {
//		return a.val > b.val;
//	}
//	return a.time > b.time;
//}
//class mycomparison {
//	bool reverse;
//public:
//	mycomparison(const bool& revparam = false) {
//		reverse = revparam;
//	}
//	bool operator()(const node& lhs, const node&rhs) const {
//		if (reverse)
//			return (lhs.time < rhs.time);
//		else {
////			if (lhs.time == rhs.time) {
//			return lhs.val < rhs.val;
////			}
////			return (lhs.time < rhs.time);
//		}
//	}
//};
//int main() {
//	int n, maxt = INT_MIN;
//	cin >> n;
////	int a[n], b[n];
//	node nd[n];
////	priority_queue<node, std::vector<node>, mycomparison> q;
//	priority_queue<node>q;
////	cout<<q.top().val<<endl;
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].time;
//		maxt = max(maxt, nd[i].time);
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].val;
//	}
////	for (int i = 0; i < n; i++) {
////		q.push(nd[i]);
////	}
////	sort(nd, nd + n, cmp);
//	int sum = 0;
//	int t = maxt;
////	cout<<t<<endl;
//	while (t) {
//		for (int i = 0; i < n; i++) {
//			if (nd[i].time == t) {
//				q.push(nd[i]);
//			}
//		}
//		if (!q.empty())
//		sum += q.top().val;
//		t--;
//		if (!q.empty())
//		q.pop();
//	}
//	cout << sum;
//	return 0;
//}
//
