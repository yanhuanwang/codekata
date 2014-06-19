//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <set>
//#include <vector>
//#include <cmath>
//#include <queue>
//#include <cassert>
//#include <iostream>
//using namespace std;
//#define PI 3.14159265358979323846264338327950288
//void rotate(vector<vector<char>>&matrix) { //rotate the matrix by 90 degrees clockwise
//	int n = matrix.size();
//	if (n == 0 || n == 1)
//		return;
//	for (int i = 0; i < n / 2; ++i) {
//		for (int j = i; j < n - i - 1; ++j) {
//			int temp = matrix[i][j];
//			matrix[i][j] = matrix[n - 1 - j][i];
//			matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
//			matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
//			matrix[j][n - 1 - i] = temp;
//		}
//	}
//}
//void gravity(vector<vector<char>>&matrix) {
//	int n = matrix.size();
//	for (int i = 0; i < n; i++) {
//		for (int row = n - 1; row >= 0; row--) {
//			if (matrix[row][i] == '.') {
//				for (int j = row - 1; j >= 0; j--) {
//					if (matrix[j][i] == 'R' || matrix[j][i] == 'B') {
//						swap(matrix[row][i], matrix[j][i]);
//						break;
//					}
//				}
//			}
//		}
//	}
//}
//vector<int> dx = { 0, 0, 1, 1, -1 };
//vector<int> dy = { 0, 1, 0, 1, 1 };
//bool check2(int x, int y, int f, char chr, vector<vector<char>>&c, int K) {
//	int n = c.size();
//
//	for (int i = 0; i < K; i++) {
//
//		if ((x + dx[f] * i < 0) || (x + dx[f] * i >= n)) {
//			return false;
//		}
//		else {
//			int l = c[x + dx[f] * i].size();
//			if ((y + dy[f] * i < 0) || (y + dy[f] * i >= l)) {
//				return false;
//			}
//
//			else if (c[x + dx[f] * i][y + dy[f] * i] != chr) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//bool check(vector<vector<char>>&matrix, int k, string&res, char c) {
//	int n = matrix.size();
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < matrix[i].size(); j++) {
//			if (matrix[i][j] == c) {
//
//				for (int f = 1; f < 5; f++) {
//					if (check2(i, j, f, c, matrix, k)) {
//						return true;
//					}
//				}
//			}
//		}
//	}
//	return false;
//}
//string process(vector<vector<char>> &v, int K) {
//	string res;
//	bool isB = false;
//	bool isR = false;
//	if (check(v, K, res, 'B')) {
//		isB = true;
//	}
//	if (check(v, K, res, 'R')) {
//		isR = true;
//	}
//	if (!isB && !isR) {
//		res = "Neither";
//	} else if (isB && !isR) {
//		res = "Blue";
//	} else if (isR && !isB) {
//		res = "Red";
//	} else {
//		res = "Both";
//	}
//	return res;
//}
//int T;
//int N, K;
//char tmp[100];
//string ans;
//
//int main() {
//	int i;
//	int Case = 1;
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d%d", &N, &K);
//		vector<vector<char>> v;
//		for (i = 0; i < N; i++) {
//			scanf("%s", tmp);
//			string s;
//			for (int j = 0; j < N; j++) {
//				if (tmp[j] == 'R' || tmp[j] == 'B') {
//					s += tmp[j];
//				}
//			}
//			vector<char> row(s.rbegin(), s.rend());
//			v.push_back(row);
//		}
//		ans = process(v, K);
//		printf("Case #%d: %s\n", Case++, ans.c_str());
//	}
//	return 0;
//}
