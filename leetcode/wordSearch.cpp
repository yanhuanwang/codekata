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
//class Solution {
//public:
//	int dx[4] = { 1, -1, 0, 0 };
//	int dy[4] = { 0, 0, 1, -1 };
//	bool exist(vector<vector<char> > &board, string word) {
//		bool res = false;
//		set<pair<int, int>> used;
//		for (int i = 0; i < board.size(); i++) {
//			for (int j = 0; j < board[0].size(); j++) {
//				if (board[i][j] == word[0]) {
//					used.insert(make_pair(i, j));
//					dfs(res, board, word, 1, used, make_pair(i, j));
//					if (res) {
//						return true;
//					}
//					used.erase(make_pair(i, j));
//				}
//			}
//		}
//		return res;
//	}
//	void dfs(bool &res, vector<vector<char> >&board, string &word, int start,
//			set<pair<int, int>>&used, pair<int, int> p) {
//		if (res) {
//			return;
//		}
//		if (start == word.size()) {
//			res = true;
//			return;
//		}
//
//		for (int j = 0; j < 4 && !res; j++) {
//			int x = p.first + dx[j];
//			int y = p.second + dy[j];
//			if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size()
//					|| used.count(make_pair(x, y))
//					|| board[x][y] != word[start]) {
//				continue;
//			}
////			cout << x << ' ' << y << endl;
//			used.insert(make_pair(x, y));
//			dfs(res, board, word, start + 1, used, make_pair(x, y));
//			used.erase(make_pair(x, y));
//		}
//
//	}
//};
//int main() {
//	Solution so1;
//	vector<vector<char>> vvc(3, vector<char>(4, 'a')); //= { {aaaa}, {aaaa}, "aaaa" };
////	vector<vector<char>> vvc = { { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' },
////			{ 'A', 'D', 'E', 'E' } };
//	string word = "aaaaaaaaaaaaa";
////	string word = "ABCB";
//	cout << so1.exist(vvc, word);
//	return 0;
//}
