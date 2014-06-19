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
//int main() {
//	int R, C, startx, starty;
//	cin >> R >> C;
//	vector<vector<char> > vvc(R, vector<char>(C));
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> vvc[i][j];
//			if (vvc[i][j] == '*') {
//				startx = i;
//				starty = j;
//				vvc[i][j]='.';
//			}
//		}
//	}
////	for (auto x : vvc) {
////		for (auto y : x) {
////			cout << y;
////		}
////		cout << endl;
////	}
//	int N;
//	cin >> N;
//	string s[N];
//	map<string, pair<int, int> > m;
//	m["NORTH"] = make_pair(-1, 0);
//	m["SOUTH"] = make_pair(1, 0);
//	m["EAST"] = make_pair(0, 1);
//	m["WEST"] = make_pair(0, -1);
//	for (int i = 0; i < N; i++) {
//		cin >> s[i];
//	}
//	queue<pair<int, int> > q, p;
//	q.push(make_pair(startx, starty));
//
//	int cnt = 0;
//	while (!q.empty()) {
//		set<pair<int, int> > visited;
////		visited.insert(make_pair(q.front().first, q.front().second));
//		while (!q.empty()) {
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();
//
//			int newx, newy;
//			for (int i = 1; i <= max(R, C); i++) {
//				newx = x + m[s[cnt]].first * i;
//				newy = y + m[s[cnt]].second * i;
//
//				if (newx < 0 || newx > R || newy < 0 || newy > C
//						|| visited.count(make_pair(newx, newy))) {
////				if (newx < 0 || newx > R || newy < 0 || newy > C) {
//					continue;
//				}
//				if (vvc[newx][newy] == 'X') {
//					break;
//				}
////				cout << newx << ' ' << newy << ' ' << i << endl;
//				p.push(make_pair(newx, newy));
//				visited.insert(make_pair(newx, newy));
//			}
//		}
////		visited.clear();
//		cnt++;
//		if (cnt == N) {
//			while (!p.empty()) {
//				int x = p.front().first;
//				int y = p.front().second;
//				p.pop();
//				vvc[x][y] = '*';
//			}
////			vvc[startx][starty] = '.';
//			break;
//		}
//		swap(q, p);
//	}
////	cout << endl;
//	for (int i = 0; i < vvc.size(); i++) {
//		for (int j = 0; j < vvc[0].size(); j++) {
//			cout << vvc[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
