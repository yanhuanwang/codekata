//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int nom[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
//int numofmatch(int a) {
//	int b, count = 0;
//	if (a == 0)
//		return 6;
//	while (a != 0) {
//		b = a % 10;
//		a = a / 10;
//		count += nom[b];
//	}
//	return count;
//}
//
//int main() {
//	int n, i, j, ans = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i <= 10000; i++) {
//		if (numofmatch(i) > n - 8)
//			continue;
//		for (j = 0; j <= 10000; j++) {
//			if (numofmatch(j) > n - 8)
//				continue;
//			if (numofmatch(j) + numofmatch(i) + numofmatch(i + j) == n - 4)
//				ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}
