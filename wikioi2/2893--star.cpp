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
//
//bool cmp(char a, char b) {
//	return m[a] < m[b];
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//void dfs(map<pair<int, int>, vector<pair<int, int> > > m, int &res, int &sum,
//		pair<int, int> p, vector<vector<int> >&board) {
////	sum+=board[p.first][p.second];
////	cout<<board[p.first][p.second]<<endl;
//	if (p.first == 0 && p.second == 0) {
//		res = max(res, sum);
////		for (auto x : path) {
////			cout << x << " ";
////		}
////		cout << endl;
////		sum=0;
//		return;
//	}
//
//	for (int i = 0; i < m[p].size(); i++) {
//		pair<int, int> x = m[p][i];
//		sum += board[x.first][x.second];
////		path.push_back(board[x.first][x.second]);
//		dfs(m, res, sum, x, board);
//		sum -= board[x.first][x.second];
////		path.pop_back();
//	}
//}
//void bfs(int &res, vector<vector<int> >&board, int n, int k, int x, int y) {
//	map<pair<int, int>, vector<pair<int, int> > > m;
//	queue<pair<int, int> > q;
//	q.push(make_pair(x, y));
////	res+=board[x][y];
//	queue<pair<int, int> > p;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			int xx = q.front().first;
//			int yy = q.front().second;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				for (int j = 1; j <= k; j++) {
//					int newx = xx + dx[i] * j;
//					int newy = yy + dy[i] * j;
//					if (newx < 0 || newx >= n || newy < 0 || newy >= n
//							|| board[newx][newy] <= board[xx][yy]) {
//						continue;
//					}
//					p.push(make_pair(newx, newy));
////				if(board[newx][newy]==12){
////					cout<<"debugging: "<<xx<<" "<<yy<<endl;
////				}
//					m[make_pair(newx, newy)].push_back(make_pair(xx, yy));
//				}
//			}
//		}
//		swap(q, p);
//	}
//	int sum = 0;
//	for (map<pair<int, int>, vector<pair<int, int> > >::iterator it = m.begin();
//			it != m.end(); it++) {
////		pair<pair<int,int>,vector<pair<int,int> > > &x=*it;
//		sort(it->second.begin(), it->second.end());
//		it->second.erase(unique(it->second.begin(), it->second.end()),
//				it->second.end());
////		vector<int> path;
//		sum += board[it->first.first][it->first.second];
////		path.push_back(board[it->first.first][it->first.second]);
//		dfs(m, res, sum, it->first, board);
//		sum -= board[it->first.first][it->first.second];
////		path.pop_back();
//	}
//}
//int board[101][101];
//void dfs2(int &res, int n, int k, int x, int y, int &sum) {
////	sum+=
//	res = max(res, sum);
//	for (int i = 0; i < 4; i++) {
//		for (int j = 1; j <= k; j++) {
//			int newx = x + dx[i] * j;
//			int newy = y + dy[i] * j;
//			if (newx < 0 || newx >= n || newy < 0 || newy >= n
//					|| board[newx][newy] <= board[x][y]) {
//				continue;
//			}
//			sum += board[newx][newy];
//			dfs2(res, n, k, newx, newy, sum);
//			sum -= board[newx][newy];
//		}
//	}
//}
//int main2() {
//	int n, k;
//	cin >> n >> k;
//
//	//	vector<vector<int> > board2(n, vector<int>(n));
////	int board2[n][n]; //(n, vector<int>(n));
////	vector<vector<int> > board;
//	if (!k) {
//		cin >> board[0][0];
//		cout << board[0][0];
//		return 0;
//	}
//	for (int i = 0; i < n; i++) {
////		vector<int>vi;
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//		}
//	}
////	int l = (n+1) / k;
////	if (n & 1) {
////
////	} else {
////		l--;
////	}
////	vector<vector<int> > board(l, vector<int>(l));
////	for (int i = 0; i <l; i++) {
////		for (int j = 0; j < l; j++) {
////			board[i][j] = board2[i * k][j * k];
////		}
////	}
////	for (auto x : board2) {
////		for (auto y : x) {
////			cout << y << " ";
////		}
////		cout << endl;
////	}
//	int res = 0, sum = 0;
////	bfs(res, board2, n, k, 0, 0);
//	sum += board[0][0];
//	dfs2(res, n, k, 0, 0, sum);
//	cout << res;
//	return 0;
//}
//int n, k, a[110][110], f[110][110];
//int dfs(int x, int y) {
//	if (f[x][y] >= 0)
//		return f[x][y];
//	int i, j, t = 0;
//	for (i = max(1, x - k); i <= min(n, x + k); ++i) {
//		if (a[i][y] > a[x][y] && (f[i][y] = dfs(i, y)) > t)
//			t = f[i][y];
//	}
//	for (j = max(1, y - k); j <= min(n, y + k); ++j) {
//		if (a[x][j] > a[x][y] && (f[x][j] = dfs(x, j)) > t) {
//			t = f[x][j];
//		}
//	}
//	return f[x][y] = a[x][y] + t;
//}
//int main() {
//	int i, j;
//	cin >> n >> k;
//	for (i = 1; i <= n; ++i) {
//		for (j = 1; j <= n; ++j) {
//			cin >> a[i][j];
//		}
//	}
//	memset(f, -1, sizeof(f));
//	cout << dfs(1, 1) << endl;
//	return 0;
//}
