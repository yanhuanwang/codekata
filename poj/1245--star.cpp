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
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//struct node {
//	int val;
//	int i;
//	int j;
//};
//class mycomparison {
//	bool reverse;
//public:
//	mycomparison(const bool& revparam = true) {
//		reverse = revparam;
//	}
//	bool operator()(const node& lhs, const node&rhs) const {
//		if (reverse)
//			return (lhs.val > rhs.val);
//		else
//			return (lhs.val < rhs.val);
//	}
//};
////bool cmp(node a, node b) {
////	return a.val > b.val;
////}
//int main() {
//	int n;
//	cin >> n;
//	int a[n], b[n];
//	priority_queue<node, vector<node>, mycomparison> q;
//	priority_queue<int, vector<int>, greater<int>> p;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i]; //.val;
////		a[i].n = i;
//	}
//	sort(a, a + n);
////	for (int i = 0; i < n; i++) {
////		cout << a[i] << ' ';
////	}
////	cout << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> b[i];
//	}
//	sort(b, b + n);
////	for (int i = 0; i < n; i++) {
////		cout << b[i] << ' ';
////	}
////	cout << endl;
//	cout << a[0] + b[0] << ' ';
//	for (int i = 1; i < n; i++) {
//		q.push(node { a[i] + b[0], i, 0 });
//	}
//	int l = 0, k = 0;
//	for (int i = 0; i < n - 1; i++) {
////		q.push(node { a[l + 1] + b[k], l + 1, k });
//		q.push(node { a[l] + b[k + 1], l, k + 1 });
//		cout << q.top().val << ' ';
//		l = q.top().i;
//		k = q.top().j;
//		q.pop();
//	}
////	for(int i=0;i<n;i++){
////		p.push(a[i]+b[0]);
////	}
////	cout<<p.top()<<' ';
////	p.pop();
////	for(int i=1;i<n;i++){
////		p.push(b[i]+a[0]);
////		cout<<p.top()<<' ';
////		p.pop();
////	}
//	return 0;
//}
//
