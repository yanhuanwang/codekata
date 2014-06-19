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
//bool valid(vector<vector<int> >&vvi, vector<int>&path) {
//	if (path.empty()) {
//		return false;
//	}
//	bool res = true;
//	int n = vvi[0].size();
//	int a[n];
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < path.size(); i++) {
//		for (int j = 0; j < vvi[0].size(); j++) {
//			if (vvi[path[i]][j]) {
//				a[j]++;
//				if (a[j] > 1) {
//					path.pop_back();
//					return false;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (!a[i]) {
//			return false;
//		}
//	}
//	return res;
//}
//bool valid(vector<vector<int> >&vvi, vector<int>&path, int i) {
////	if(path.empty()){
////		return false;
////	}
//	bool res = true;
//	path.push_back(i);
//	int n = vvi[0].size();
//	int a[n];
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < path.size(); i++) {
//		for (int j = 0; j < vvi[0].size(); j++) {
//			if (vvi[path[i]][j]) {
//				a[j]++;
////				cout<<a[j]<<endl;
//				if (a[j] > 1) {
//					path.pop_back();
//					return false;
//				}
//			}
//		}
//	}
//	path.pop_back();
////	cout<<res<<endl;
//	return res;
//}
//void dfs(vector<vector<int> >&vvi, int start, bool &res, vector<int>&path) {
//	if (res) {
//		return;
//	}
//	if (valid(vvi, path)) {
//		res = true;
////		cout << "Yes" << endl;
//		return;
//	}
//	if (start >= vvi.size()) {
//		res = false;
//		return;
//	}
//	for (int i = start; i < vvi.size(); i++) {
////		cout<<i<<endl;
//		if (!valid(vvi, path, i)) {
//			continue;
//		}
////		cout << i << endl;
//		path.push_back(i);
//		dfs(vvi, i + 1, res, path);
//		path.pop_back();
//	}
//}
//int main() {
//	int a, b;
//	while (cin >> a >> b) {
//		vector<vector<int> > vvi(a, vector<int>(b));
//		for (int i = 0; i < a; i++) {
//			for (int j = 0; j < b; j++) {
//				cin >> vvi[i][j];
//			}
//		}
////		for(auto x:vvi){
////			for(auto y:x){
////				cout<<y<<' ';
////			}
////			cout<<endl;
////		}
//		bool res = false;
//		vector<int> path;
//		dfs(vvi, 0, res, path);
//		if (res) {
//			cout << "Yes" << endl;
//		} else {
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}
//
