//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <algorithm>
//#include <numeric>
//#include <functional>
//#include <vector>
//#include <set>
//#include <list>
//#include <stack>
//#include <map>
//#include <queue>
//using namespace std;
//map<string, string> mm;
//string FindFather(string str) {
//	if (mm[str] == str)
//		return str;
//	else
//		return FindFather(mm[str]);
//}
//int main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	int a[m][n];
//	int b[k], c[k];
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < k; i++) {
//		cin >> b[i] >> c[i];
//		for (int j = 0; j < m; j++) {
//			int bb = -1, cc = -1;
//			for (int k = 0; k < n; k++) {
//				if (a[j][k] == b[i]) {
//					bb = k;
////					cout << "bb=" << bb << " ";
//				}
//				if (a[j][k] == c[i]) {
//					cc = k;
////					cout << "cc=" << cc << " ";
//				}
//			}
//			if (bb > cc) {
//				cout << "No" << endl;
//				goto bad;
//				//					break;
//			}
////			cout<<"Yes"<<endl;
//		}
//		cout << "Yes" << endl;
//		bad: ;
//	}
//	return 0;
//}
///*
// 3 2 1
// AAA
// BBB
// CCC
// AAA CCC
// BBB CCC
// AAA BBB
// */
