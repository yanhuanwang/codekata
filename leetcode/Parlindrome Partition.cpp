//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//#include <string.h>
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
////	static  int n;
//	vector<vector<string>> partition(string s) {
//		vector<vector<string>> res;
//		vector<string> path;
//		int n = s.size();
////		int dp[n][n];
////		memset(dp, 0, sizeof(dp));
//		vector<vector<int>> dp(n, vector<int>(n, 0));
//		//dp[i][j]=1 if(i==j)
//		//dp[i][j]==1 if(i+1=j&&s[i]==s[j])
//		//dp[i][j]==1 if(dp[i+1][j-1]&&s[i]==s[j])
//		for (int i = n - 1; i >= 0; i--) {
//			dp[i][i] = 1;
//			for (int j = i + 1; j < n; j++) {
//				if (i + 1 == j && s[i] == s[j]) {
//					dp[i][j] = 1;
//				} else if (dp[i + 1][j - 1] && s[i] == s[j]) {
//					dp[i][j] = 1;
//				}
//			}
//		}
////		for (auto x : dp) {
////			for (auto y : x) {
////				cout << y << ' ';
////			}
////			cout << endl;
////		}
//		dfs(res, path, 0, dp, s);
//		return res;
//	}
//	void dfs(vector<vector<string>>&res, vector<string>&path, int start,
//			vector<vector<int>> dp, string &s) {
//		if (start == s.size()) {
//			res.push_back(path);
//			return;
//		}
//		if (start > s.size()) {
//			return;
//		}
//		for (int i = start; i < s.size(); i++) {
//			if (dp[start][i]) {
//				path.push_back(s.substr(start, i - start + 1));
//				dfs(res, path, i + 1, dp, s);
//				path.pop_back();
//			}
//		}
//	}
//};
//int main() {
//	Solution so1;
//	string s = "efe";
//	auto res = so1.partition(s);
//	for (auto x : res) {
//		for (auto y : x) {
//			cout << y << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}
