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
//bool checkBoard(vector<vector<char> > &vvc) {
//	bool res = false;
//	for (int i = 0; i < 4; i++) {
//		if (vvc[i][0] == 'B' && vvc[i][1] == 'B' && vvc[i][2] == 'B'
//				&& vvc[i][3] == 'B') {
//			return true;
//		}
//		if (vvc[i][0] == 'W' && vvc[i][1] == 'W' && vvc[i][2] == 'W'
//				&& vvc[i][3] == 'W') {
//			return true;
//		}
//		if (vvc[0][i] == 'B' && vvc[1][i] == 'B' && vvc[2][i] == 'B'
//				&& vvc[3][i] == 'B') {
//			return true;
//		}
//		if (vvc[0][i] == 'W' && vvc[1][i] == 'W' && vvc[2][i] == 'W'
//				&& vvc[3][i] == 'W') {
//			return true;
//		}
//		if (vvc[0][0] == 'B' && vvc[1][1] == 'B' && vvc[2][2] == 'B'
//				&& vvc[3][3] == 'B') {
//			return true;
//		}
//		if (vvc[0][0] == 'W' && vvc[1][1] == 'W' && vvc[2][2] == 'W'
//				&& vvc[3][3] == 'W') {
//			return true;
//		}
//		if (vvc[0][3] == 'B' && vvc[1][2] == 'B' && vvc[2][1] == 'B'
//				&& vvc[3][0] == 'B') {
//			return true;
//		}
//		if (vvc[0][3] == 'W' && vvc[1][2] == 'W' && vvc[2][1] == 'W'
//				&& vvc[3][0] == 'W') {
//			return true;
//		}
//	}
//	return res;
//}
//int main3(vector<vector<char> > &board) {
//	queue<vector<vector<char> > > q, p;
//	set<vector<vector<char> > > used;
//	q.push(board);
//	used.insert(board);
//	int cnt = 0;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			vector<vector<char> > vvc = q.front();
//			q.pop();
//			bool f = checkBoard(vvc);
//			if (f) {
//				return cnt;
//			}
//			int x[2], y[2];
//			int k = 0;
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j < 4; j++) {
//					if (vvc[i][j] == 'O') {
//						x[k] = i;
//						y[k] = j;
//						k++;
//					}
//				}
//			}
//			//handle black
//			queue<vector<vector<char> > > qt;
//			//			cnt++;
//			for (int i = 0; i < 4; i++) {
//				vector<vector<char> > vvct = vvc;
//				if (x[0] + dx[i] < 0 || x[0] + dx[i] >= 4 || y[0] + dy[i] < 0
//						|| y[0] + dy[i] >= 4) {
//					continue;
//				}
//				if (vvct[x[0] + dx[i]][y[0] + dy[i]] == 'W') {
//					swap(vvct[x[0] + dx[i]][y[0] + dy[i]], vvct[x[0]][y[0]]);
//					qt.push(vvct);
//				}
//			}
//			for (int i = 0; i < 4; i++) {
//				vector<vector<char> > vvct = vvc;
//				if (x[1] + dx[i] < 0 || x[1] + dx[i] >= 4 || y[1] + dy[i] < 0
//						|| y[1] + dy[i] >= 4) {
//					continue;
//				}
//				if (vvct[x[1] + dx[i]][y[1] + dy[i]] == 'W') {
//					swap(vvct[x[1] + dx[i]][y[1] + dy[i]], vvct[x[1]][y[1]]);
//					qt.push(vvct);
//				}
//			}
//
//			while (!qt.empty()) {
//				vector<vector<char> > vvct = qt.front();
//				qt.pop();
//
//				bool ff = checkBoard(vvct);
//				if (ff) {
//					return cnt + 1;
////					cout << cnt + 1;
////					return 0;
//				}
//
//				int newx[2], newy[2];
//				int newk = 0;
//				for (int i = 0; i < 4; i++) {
//					for (int j = 0; j < 4; j++) {
//						if (vvct[i][j] == 'O') {
//							newx[newk] = i;
//							newy[newk] = j;
//							newk++;
//						}
//					}
//				}
//				//				cnt++;
//				for (int i = 0; i < 4; i++) {
//					vector<vector<char> > vvct2 = vvct;
//					if (newx[0] + dx[i] < 0 || newx[0] + dx[i] >= 4
//							|| newy[0] + dy[i] < 0 || newy[0] + dy[i] >= 4) {
//						continue;
//					}
//					if (vvct2[newx[0] + dx[i]][newy[0] + dy[i]] == 'B') {
//						swap(vvct2[newx[0] + dx[i]][newy[0] + dy[i]],
//								vvct2[newx[0]][newy[0]]);
//						if (!used.count(vvct2)) {
//							p.push(vvct2);
//							used.insert(vvct2);
//						}
//					}
//				}
//				for (int i = 0; i < 4; i++) {
//					vector<vector<char> > vvct2 = vvct;
//					if (newx[1] + dx[i] < 0 || newx[1] + dx[i] >= 4
//							|| newy[1] + dy[i] < 0 || newy[1] + dy[i] >= 4) {
//						continue;
//					}
//					if (vvct2[newx[1] + dx[i]][newy[1] + dy[i]] == 'B') {
//						swap(vvct2[newx[1] + dx[i]][newy[1] + dy[i]],
//								vvct2[newx[1]][newy[1]]);
//						if (!used.count(vvct2)) {
//							p.push(vvct2);
//							used.insert(vvct2);
//						}
//					}
//				}
//			}
//		}
//		cnt += 2;
//		//		cout << cnt << "=========" << endl;
//		swap(q, p);
//	}
//	return 0;
//}
//int main() {
//	vector<vector<char> > board(4, vector<char>(4));
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> board[i][j];
//			if(board[i][j]=='-1'){
//				board[i][j]='B';
//			}else if(board[i][j]=='1'){
//				board[i][j]='W';
//			}else if(board[i][j]=='0'){
//				board[i][j]='O';
//			}
//		}
//	}
//	queue<vector<vector<char> > > q, p;
//	set<vector<vector<char> > > used;
//	q.push(board);
//	used.insert(board);
//	int cnt = 0;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			vector<vector<char> > vvc = q.front();
//			q.pop();
//			bool f = checkBoard(vvc);
//			if (f) {
//				int ret = main3(board);
//				cout << min(ret, cnt);
////				if (!ret) {
////					cout << cnt;
////				} else if (!cnt) {
////					cout << ret;
////				} else {
////					cout << min(ret, cnt);
////				}
////				cout << cnt;
////				cout << cnt << " res:" << endl;
////				for (auto x : vvc) {
////					for (auto y : x) {
////						cout << y;
////					}
////					cout << endl;
////				}
//				return 0;
//			}
//			int x[2], y[2];
//			int k = 0;
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j < 4; j++) {
//					if (vvc[i][j] == 'O') {
//						x[k] = i;
//						y[k] = j;
//						k++;
//					}
//				}
//			}
////			for (auto x : vvc) {
////				for (auto y : x) {
////					cout << y;
////				}
////				cout << endl;
////			}
////			cout << x[0] << ' ' << y[0] << endl;
////			cout << x[1] << ' ' << y[1] << endl;
//			//handle black
//			queue<vector<vector<char> > > qt;
////			cnt++;
//			for (int i = 0; i < 4; i++) {
//				vector<vector<char> > vvct = vvc;
//				if (x[0] + dx[i] < 0 || x[0] + dx[i] >= 4 || y[0] + dy[i] < 0
//						|| y[0] + dy[i] >= 4) {
//					continue;
//				}
//				if (vvct[x[0] + dx[i]][y[0] + dy[i]] == 'B') {
//					swap(vvct[x[0] + dx[i]][y[0] + dy[i]], vvct[x[0]][y[0]]);
//					qt.push(vvct);
//				}
//			}
//			for (int i = 0; i < 4; i++) {
//				vector<vector<char> > vvct = vvc;
//				if (x[1] + dx[i] < 0 || x[1] + dx[i] >= 4 || y[1] + dy[i] < 0
//						|| y[1] + dy[i] >= 4) {
//					continue;
//				}
//				if (vvct[x[1] + dx[i]][y[1] + dy[i]] == 'B') {
//					swap(vvct[x[1] + dx[i]][y[1] + dy[i]], vvct[x[1]][y[1]]);
//					qt.push(vvct);
//				}
//			}
//			if (qt.empty() && vvc == board) {
//				return main3(board);
//			}
//			while (!qt.empty()) {
//				vector<vector<char> > vvct = qt.front();
//				qt.pop();
//
//				bool ff = checkBoard(vvct);
//				if (ff) {
//					int ret = main3(board);
////					if (!ret) {
////						cout << cnt+1;
////					} else if (!cnt) {
////						cout << ret;
////					} else {
////						cout << min(ret, cnt+1);
////					}
//					cout << min(ret, cnt + 1);
////					cout << cnt + 1;
////					cout << cnt+1 << " res:" << endl;
////					for (auto x : vvct) {
////						for (auto y : x) {
////							cout << y;
////						}
////						cout << endl;
////					}
//					return 0;
//				}
//
//				int newx[2], newy[2];
//				int newk = 0;
//				for (int i = 0; i < 4; i++) {
//					for (int j = 0; j < 4; j++) {
//						if (vvct[i][j] == 'O') {
//							newx[newk] = i;
//							newy[newk] = j;
//							newk++;
//						}
//					}
//				}
////				cnt++;
//				for (int i = 0; i < 4; i++) {
//					vector<vector<char> > vvct2 = vvct;
//					if (newx[0] + dx[i] < 0 || newx[0] + dx[i] >= 4
//							|| newy[0] + dy[i] < 0 || newy[0] + dy[i] >= 4) {
//						continue;
//					}
//					if (vvct2[newx[0] + dx[i]][newy[0] + dy[i]] == 'W') {
//						swap(vvct2[newx[0] + dx[i]][newy[0] + dy[i]],
//								vvct2[newx[0]][newy[0]]);
//						if (!used.count(vvct2)) {
//							p.push(vvct2);
//							used.insert(vvct2);
//						}
//					}
//				}
//				for (int i = 0; i < 4; i++) {
//					vector<vector<char> > vvct2 = vvct;
//					if (newx[1] + dx[i] < 0 || newx[1] + dx[i] >= 4
//							|| newy[1] + dy[i] < 0 || newy[1] + dy[i] >= 4) {
//						continue;
//					}
//					if (vvct2[newx[1] + dx[i]][newy[1] + dy[i]] == 'W') {
//						swap(vvct2[newx[1] + dx[i]][newy[1] + dy[i]],
//								vvct2[newx[1]][newy[1]]);
//						if (!used.count(vvct2)) {
//							p.push(vvct2);
//							used.insert(vvct2);
//						}
//					}
//				}
//			}
//		}
//		cnt += 2;
////		cout << cnt << "=========" << endl;
//		swap(q, p);
//	}
//	return 0;
//}
//int main2() {
//	vector<vector<char> > board(4, vector<char>(4));
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> board[i][j];
//		}
//	}
////	for (auto x : board) {
////		for (auto y : x) {
////			cout << y;
////		}
////		cout << endl;
////	}
//	queue<vector<vector<char> > > q, p;
//	set<vector<vector<char> > > used;
//	q.push(board);
//	used.insert(board);
//	int cnt = 0;
//	while (!q.empty()) {
//		while (!q.empty()) {
//			vector<vector<char> > vvc = q.front();
//			q.pop();
//			bool f = checkBoard(vvc);
//			if (f) {
//				cout << cnt;
//				return 0;
//			}
//			int x[2], y[2];
//			int k = 0;
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j < 4; j++) {
//					if (vvc[i][j] == 'O') {
//						x[k] = i;
//						y[k] = j;
//						k++;
//					}
//				}
//			}
////			for (auto x : vvc) {
////				for (auto y : x) {
////					cout << y;
////				}
////				cout << endl;
////			}
//			cout << x[0] << ' ' << y[0] << endl;
//			cout << x[1] << ' ' << y[1] << endl;
//			//handle black
//			for (int i = 0; i < 4; i++) {
//				if (x[0] + dx[i] < 0 || x[0] + dx[i] >= 4 || y[0] + dy[i] < 0
//						|| y[0] + dy[i] >= 4) {
//					continue;
//				}
//				vector<vector<char> > vvct = vvc;
//				if (vvct[x[0] + dx[i]][y[0] + dy[i]] == 'B') {
//					swap(vvct[x[0] + dx[i]][y[0] + dy[i]], vvct[x[0]][y[0]]);
//					//handle white
//					for (int i = 0; i < 4; i++) {
//						vector<vector<char> > vvct2 = vvct;
//						if (x[1] + dx[i] < 0 || x[1] + dx[i] >= 4
//								|| y[1] + dy[i] < 0 || y[1] + dy[i] >= 4) {
//							continue;
//						}
//						if (vvct2[x[1] + dx[i]][y[1] + dy[i]] == 'W') {
//							swap(vvct2[x[1] + dx[i]][y[1] + dy[i]],
//									vvct2[x[1]][y[1]]);
//						}
//						if (!used.count(vvct2)) {
//							p.push(vvct2);
//							used.insert(vvct2);
//						}
//					}
//				}
//
//			}
//		}
//		cnt++;
//		cout << cnt << "=========" << endl;
//		swap(q, p);
//	}
//	return 0;
//}
