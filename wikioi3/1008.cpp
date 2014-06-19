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
//bool is_prime(int n) {
//	if (n < 2) {
//		return false;
//	}
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//void dfs(vector<int>&vi, int start, int k, int n, int &cnt, int &sum) {
//	if (k == 0) {
//		if (is_prime(sum)) {
//			cnt++;
//		}
//		return;
//	}
//	for (int i = start + 1; i < n; i++) {
//		sum += vi[i];
//		dfs(vi, i, k - 1, n, cnt, sum);
//		sum -= vi[i];
//	}
//}
//int main() {
//	int n, k;
//	cin >> n >> k;
//	vector<int> vi(n);
//	;
//	for (int i = 0; i < n; i++) {
//		cin >> vi[i];
//	}
//	int cnt = 0, sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum+=vi[i];
//		dfs(vi, i, k - 1, n, cnt, sum);
//		sum-=vi[i];
//	}
//	cout << cnt;
//	return 0;
//}
