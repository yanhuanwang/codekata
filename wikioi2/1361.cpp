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
//void dfs(int &cnt, int start, int board[][13], int n) {
//	if (start >= n) {
//		cnt++;
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (!board[start][i]) {
//			for (int j = start + 1; j < n; j++) {
//				board[j][i]++;
//				if ((i + j - start < n) && (i + j - start >= 0))
//					board[j][i + j - start]++;
//				if ((i - j + start < n) && (i - j + start >= 0))
//					board[j][i - j + start]++;
//			}
//			dfs(cnt, start + 1, board, n);
//			for (int j = start + 1; j < n; j++) {
//				board[j][i]--;
//				if ((i + j - start < n) && (i + j - start >= 0))
//					board[j][i + j - start]--;
//				if ((i - j + start < n) && (i - j + start >= 0))
//					board[j][i - j + start]--;
//			}
//		}
//	}
//}
//struct node {
//	int id;
//	int s;
//	node():s(0){
//
//	}
//};
//bool cmp(node a, node b) {
//	if (a.s == b.s) {
//		return a.id < b.id;
//	}
//	return a.s > b.s;
//}
//int main() {
//	int id, n, m;
//	cin >> id >> n >> m;
//	int a[n][m];
//	int score[m];
//	memset(score, 0, sizeof(score));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//			if (a[i][j] == 0) {
//				score[j]++;
//			}
//		}
//	}
//	node s[n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			s[i].s += score[j] * a[i][j];
//			s[i].id = i + 1;
//		}
//	}
//	sort(s, s + n,cmp);
////	for(int i = 0; i < n; i++){
////		cout<<s[i].id<<" "<<s[i].s<<endl;
////	}
//	for (int i = 0; i < n; i++) {
//		if (s[i].id == id) {
//			cout << i + 1;
//			return 0;
//		}
//	}
//	return 0;
//}
//
