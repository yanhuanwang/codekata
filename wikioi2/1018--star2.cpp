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
//bool isValid(int i, int start, vector<vector<int> >&chat, vector<int>&vi) {
//	bool res = true;
//	for (int j = 0; j < chat.size(); j++) {
//		if (chat[start][j] && vi[j] == i) {
//			return false;
//		}
//	}
//	return res;
//}
//void dfs(vector<string>&vs, string s, map<string, int>&m, int &res,
//		string &resStr) {
//	res = max(res, (int) resStr.size());
//	cout << resStr << endl;
//	for (int i = s.size() - 1; i > 0; i--) {
//		string tail = s.substr(i, s.size() - i);
//		string t1 = resStr;
//		m[s]++;
//		resStr += s.substr(0, i);
//		for (int j = 0; j < vs.size(); j++) {
//			if ((vs[j].substr(0, s.size() - i) == tail) && m[vs[j]] < 2) {
//				m[vs[j]]++;
////				string t2 = resStr;
////				resStr += vs[j];
//				dfs(vs, vs[j], m, res, resStr);
////				resStr = t2;
//				m[vs[j]]--;
////				return;
//			}
//
//		}
//		resStr = t1;
//		m[s]--;
//	}
//}
//int calc(vector<int>&path, vector<string>&vs, vector<vector<string> > &chart) {
//	int res = 0;
//
//	for (int i = 0; i < path.size(); i++) {
//		res += vs[path[i]].size();
//		if (i > 0) {
////			cout<<"chart="<<chart[path[i]][path[i - 1]]<<" ";
//			res -= chart[path[i-1]][path[i]].size();
//		}
//	}
////	cout<<endl;
//	return res;
//}
//void dfs2(vector<string>&vs, int a, map<int, int>&m, int &res, string &resStr,
//		vector<int>&path, vector<vector<string> > &chart) {
//	bool flag = 1;
//	for (int i = 0; i < vs.size(); i++) {
//		if (chart[a][i] != "*" && m[i] < 2) {
//			flag = 0;
//			path.push_back(i);
//			m[i]++;
//			dfs2(vs, i, m, res, resStr, path, chart);
//			path.pop_back();
//			m[i]--;
//		}
//		if (flag) {
//			int length = calc(path, vs, chart);
//			if (length > res) {
////				for (auto x : path) {
////					cout << x << " ";
////				}
////				cout << endl;
//				res = length;
//			}
////			res = max(res, length);
////			for (auto x : path) {
////				cout << x << " ";
////			}
////			cout << endl;
//		}
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	vector<string> vs(n);
//	for (int i = 0; i < n; i++) {
//		cin >> vs[i];
//	}
//	vector<vector<string> > chart(n, vector<string>(n, "*"));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = vs[i].size() - 1; k > 0; k--) {
//				if (vs[i].substr(k, vs[i].size() - k)
//						== vs[j].substr(0, vs[i].size() - k)
//						&& (vs[i].size() - k < vs[j].size())) {
//					chart[i][j] = vs[j].substr(0, vs[i].size() - k);
//					break;
//				}
//
//			}
//		}
//	}
////	for (auto x : chart) {
////		for (auto y : x) {
////			cout << y << "\t";
////		}
////		cout << endl;
////	}
//	char start;
//	map<int, int> m;
//	cin >> start;
//	int res = INT_MIN;
//	string resStr;
//	vector<int> path;
//	for (int i = 0; i < vs.size(); i++) {
//		if (vs[i][0] == start) {
//			path.push_back(i);
//			m[i]++;
//			dfs2(vs, i, m, res, resStr, path, chart);
//			path.pop_back();
//			m[i]--;
//		}
////		for(auto x:path){
////			cout<<x<<" ";
////		}
////		cout<<endl;
//	}
//	cout << res;
//}
//
