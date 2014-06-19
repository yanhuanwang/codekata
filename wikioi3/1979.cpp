///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <string.h>
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
//int main() {
//	int w, h, x, y;
//	while (cin >> w >> h) {
//		swap(w,h);
//		if(!w&&!h){
//			break;
//		}
//		char board[w][h];
//		for (int i = 0; i < w; i++) {
//			for (int j = 0; j < h; j++) {
//				cin >> board[i][j];
//				if (board[i][j] == '@') {
//					x = i;
//					y = j;
//				}
//			}
//		}
//		queue<pair<int, int> > q, p;
//		q.push(make_pair(x, y));
//		set<pair<int, int> > visited;
//		visited.insert(make_pair(x, y));
//		int cnt = 1;
//		while (!q.empty()) {
//			while (!q.empty()) {
//				int i = q.front().first;
//				int j = q.front().second;
//				q.pop();
//				for (int k = 0; k < 4; k++) {
//					int newx = i + dx[k];
//					int newy = j + dy[k];
//					if (newx < 0 || newy < 0 || newx >= w || newy >= h
//							|| visited.count(make_pair(newx, newy))
//							|| board[newx][newy] != '.') {
//						continue;
//					}
//					cnt++;
//					visited.insert(make_pair(newx, newy));
//					p.push(make_pair(newx, newy));
//				}
//			}
//			swap(q, p);
//		}
//		cout<<cnt<<endl;
//	}
//	return 0;
//}
//
