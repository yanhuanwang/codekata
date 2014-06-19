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
//int process(int A) {
//	if (A >= 0) {
//		return 5;
//	}
//	return process(A + 1) + process(A + 2) + 1;
//}
////map<char, int> p;
//int board[13][13];
//void dfs(vector<vector<int> >&res, vector<int>&path, int n) {
//	if (path.size() >= n) {
//		res.push_back(path);
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (find(path.begin(), path.end(), i) != path.end()) {
//			continue;
//		}
//		path.push_back(i);
//		dfs(res, path, n);
//		path.pop_back();
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	vector<vector<int> > res;
//	vector<int> path;
//	dfs(res, path, n);
//	sort(res.begin(),res.end());
//	for (int i=0;i<res.size();i++) {
//		for (int j=0;j<res[0].size();j++) {
////			cout << res[i][j];
//			printf("%d ",res[i][j]);
//		}
////		cout << endl;
//		printf("\n");
//	}
//}
//
