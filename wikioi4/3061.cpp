//#include <cstdio>
//#include <cstdlib>
////#include <memory.h>
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
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int N, S;
//		cin >> N >> S;
//		int a[N], s[N];
//		for (int i = 0; i < N; i++) {
//			cin >> a[i];
//			if (i == 0) {
//				s[i] = a[i];
//			} else {
//				s[i] = s[i - 1] + a[i];
//			}
//		}
//		int len = INT_MAX;
//		for (int i = 0; i < N; i++) {
//			for (int j = i; j < N; j++) {
//				if (s[j] - s[i] + a[i] >= S) {
//					len = min(len, j - i + 1);
//					break;
//				}
//			}
//		}
//		cout<<len<<'\n';
//	}
//	return 0;
//}
