//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
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
//
//int main() {
//
//	int Case = 1;
//	int T;
//	scanf("%d", &T);
////	getchar();
//	while (T--) {
//		int N, X;
//		scanf("%d%d", &N, &X);
//		int a[N];
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &a[i]);
//		}
//		vector<int> s(a, a + N);
//		sort(s.begin(), s.end());
//		int res = 0;
//		set<int> used;
//		for (int i = s.size() - 1; i >= 0; i--) {
//			if (used.count(i)) {
//				continue;
//			}
//			used.insert(i);
//			res++;
//			auto it = upper_bound(s.begin(), s.end(), X - s[i]);
//			while (it != s.begin()) {
//				if (used.count(distance(s.begin(), prev(it)))) {
//					it = prev(it);
//				} else {
//					used.insert(distance(s.begin(), prev(it)));
//					break;
//				}
//			}
////			for (int j = i - 1; j >= 0; j--) {
////				if (used.count(j)) {
////					continue;
////				}
////				if (X - s[i] >= s[j]) {
////					used.insert(j);
////					break;
////				}
////			}
//		}
//		printf("Case #%d: %d\n", Case++, res);
//	}
//	return 0;
//}
