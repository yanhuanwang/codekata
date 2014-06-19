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
//int main() {
//	int n;
//	cin >> n;
//	int cnt = 0;
////	int board[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			board[i][j]=0;
//		}
//	}
////	vector<vector<int> > board(n, vector<int>(n, 0));
////	for (auto x : board) {
////		for (auto y : x) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
////	memset (board,false,sizeof(board));
//	dfs(cnt, 0, board, n);
//	cout << cnt;
//}
//
