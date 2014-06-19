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
////bitset<100000000> b;
//struct node {
//	int a, b;
//	bool operator<(const node &nd) const {
//		return b < nd.b;
//	}
//};
//int main() {
//	int n;
//	cin >> n;
//	node a[n];
//	bool b[n];
//	memset(b, 0, sizeof(b));
//	for (int i = 0; i < n; i++) {
//		int h, t;
//		cin >> h >> t;
//		if (h < t) {
//			a[i].a = h;
//			a[i].b = t;
//		} else {
//			a[i].a = t;
//			a[i].b = h;
//		}
//	}
//	sort(a, a + n);
////	for (int i = 0; i < n; i++) {
////		cout << a[i].a << ' ' << a[i].b << endl;
////	}
//	b[0] = 1;
//	int j = 0,cnt=1;
//	for (int i = 1; i < n; i++) {
//		if (a[i].a >= a[j].b) {
//			b[i] = 1;
//			j = i;
//			cnt++;
//		}
//	}
//	cout<<cnt;
//	return 0;
//}
