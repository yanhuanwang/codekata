////=============================================================
////* code: Big Integer
////=============================================================
//#include<iostream>
//#include<string>
//#include<deque>
//#include<map>
//using namespace std;
//
//int main() {
//	int n, a;
//	cin >> n;
//	while (n--) {
//		cin >> a;
////		int d[a/5+1];
//		map<int, int> m;
//		for (int i = 5; i <= a; i += 5) {
//			int cnt = 0;
//			int j = i / 5;
//			if (m.count(j)) {
//				m[i] = m[j] + 1;
//			} else {
//				cnt++;
//				while (j % 5 == 0) {
//					if (m.count(j / 5)) {
//						cnt = m[j / 5] + 1;
//						break;
//					} else {
//						cnt++;
//						j /= 5;
//					}
//				}
//				m[i] = cnt;
//			}
//		}
////		cout << cnt << endl;
//		int res = 0;
//		for (auto x : m) {
//			res += x.second;
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
