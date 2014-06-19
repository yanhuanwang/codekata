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
//int process(int A, int B, int K) {
//	int res = 0;
//	return res;
//}
//map<char, int> m;
//struct node {
//	int head;
//	int tail;
//};
//map<int, int> mp;
//bool cmp1(node a, node b) {
//	return a.head < b.head;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//void bfs(int startx, int starty, vector<vector<char>>&board, int &cnt,
//		vector<vector<char>>&visited) {
//
//}
//int main() {
//	int n;
//	cin >> n;
//	node nd[n];
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].head >> nd[i].tail;
//	}
//	sort(nd, nd + n, cmp1);
////	for(int i=0;i<n;i++){
////		cout<<nd[i].head<<" "<<nd[i].tail<<endl;
////	}
//	int sum = 0;
//	for (int i = 1; i < n; i++) {
//		if (nd[i].head < nd[i - 1].tail) {
//			nd[i].head = nd[i - 1].head;
//			if (nd[i].tail < nd[i - 1].tail) {
//				nd[i].tail = nd[i - 1].tail;
//			}
//		} else {
//			sum += (nd[i - 1].tail - nd[i - 1].head);
//		}
////		cout<<sum<<endl;
//	}
//	cout<<sum+nd[n-1].tail-nd[n-1].head;
//    return 0;
//}
