//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <map>
//using namespace std;
//int f[1000][1000], s, l = 1, i, j, k = 1;
//struct node {
//	int id;
//	int a, b, c, sum;
//};
//bool cmp(node a, node b) {
//	if (a.sum == b.sum) {
//		if (a.a == b.a) {
//			return a.id < b.id;
//		}
//		return a.a > b.a;
//	}
////	if (a.a == b.a) {
////		return a.id < b.id;
////	}
//
//	return a.sum > b.sum;
//}
//int main() {
//	int n;
//	cin >> n;
//	node nd[n];
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].a >> nd[i].b >> nd[i].c;
//		nd[i].sum = nd[i].a + nd[i].b + nd[i].c;
//		nd[i].id = i + 1;
//	}
//	sort(nd, nd + n, cmp);
//	for (int i = 0; i < 5; i++) {
//		cout << nd[i].id << " " << nd[i].sum << endl;
//	}
//	return 0;
//}
