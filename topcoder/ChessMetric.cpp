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
//int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1, 2, 2, 1, 1, -1, -1, -2, -2 };
//int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1, 1, -1, 2, -2, 2, -2, 1, -1 };
//const int Dx[] = { 0, 1, 1, 1, 0, -1, -1, -1, 2, 2, -2, -2, 1, -1, 1, -1 };
//const int Dy[] = { 1, 1, 0, -1, -1, -1, 0, 1, 1, -1, 1, -1, 2, 2, -2, -2 };
//long long dp[101][101][51];
//long long f(int x, int y, int size, int m) {
//	if (x < 0 || x > size || y < 0 || y > size)
//		return 0;
//	if (m < 0)
//		return 0;
//	if (dp[x][y][m] != -1)
//		return dp[x][y][m];
//
//	long long tmp = 0;
//	for (int i = 0; i < 16; i++) {
//		tmp += f(x + dx[i], y + dy[i], size, m - 1);
//	}
////	for (int dx = -1; dx <= 1; ++dx) {
////		for (int dy = -1; dy <= 1; ++dy) {
////			if (dx != 0 || dy != 0) {
////				tmp += f(x + dx, y + dy, size, m - 1);
////			}
////		}
////	}
////	for (int dx = -2; dx <= 2; ++dx) {
////		for (int dy = -2; dy <= 2; ++dy) {
////			if (abs(dx) + abs(dy) == 3) {
////				tmp += f(x + dx, y + dy, size, m - 1);
////			}
////		}
////	}
//	dp[x][y][m] = tmp;
//	return tmp;
//}
//long long howMany(int size, pair<int, int> start, pair<int, int> end,
//		int numMoves) {
//	memset(dp, -1, sizeof(dp));
//	dp[start.first][start.second][0] = 1;
////	int i, j, m;
////	for (int k = 0; k < 16; k++) {
////		dp[i][j][m] += dp[i + dx[k]][j + dy[k]][m - 1];
////	}
////	return res;
//	return f(end.first, end.second, size, numMoves);
//}
//int main() {
//
//	cout << howMany(100, make_pair(0, 0), make_pair(0, 99), 50);
//	return 0;
//}
//
