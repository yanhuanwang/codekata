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
//void dfs(int n, int m, vector<vector<int>>&res, vector<int>&path, int start) {
//	if (path.size() > m) {
//		return;
//	}
//	if (accumulate(path.begin(), path.end(), 0) == n) {
//		res.push_back(path);
//		return;
//	}
//	for (int i = start; i <= m; i++) {
//		path.push_back(i);
//		dfs(n, m, res, path, i);
//		path.pop_back();
//	}
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>> res;
//	vector<int>path;
//	dfs(n, m, res, path, 1);
//	for (auto x : res) {
//		for (auto y : x) {
//			cout << y << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}
