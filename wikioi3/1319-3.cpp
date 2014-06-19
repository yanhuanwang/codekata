//#include <cstdio>
//#include <cstring>
//#include <string>
//#include <cstdlib>
//#include <algorithm>
//
//const char fi[] = "toy.in";
//const char fo[] = "toy.out";
//const int maxN = 50010;
//const int MAX = 0x3f3f3f3f;
//const int MIN = ~MAX;
//
//typedef long long int64;
//int64 F[maxN], g[maxN], s[maxN], len;
//int q[maxN], n, f, r;
//
//void init_file() {
//	return;
//}
//
//inline int getint() {
//	int res = 0;
//	char tmp;
//	while (!(isdigit(tmp = getchar())))
//		;
//	do
//		res = (res << 3) + (res << 1) + tmp - '0';
//	while ((isdigit(tmp = getchar())));
//	return res;
//}
//
//void readdata() {
//	n = getint();
//	len = getint();
//	for (int i = 1; i < n + 1; ++i) {
//		(s[i] = getint()) += s[i - 1];
//		g[i] = i + s[i];
//	}
//	return;
//}
//
//#define sqr(x) ((x) * (x))
//
//#define check(j, k, i) \
//(F[j] - F[k] + (g[j] + g[k] + \
//				(len << 1) + 2) * (g[j] - g[k]) \
//		<= (g[i] * (g[j] - g[k]) << 1))
//
//#define cmp(j, k, i) \
//((F[j] - F[k] + (g[j] + g[k] + \
//						(len << 1) + 2) * (g[j] - g[k])) \
//		* (g[k] - g[i]) \
//		<= (F[k] - F[i] + (g[k] + g[i] + \
//						(len << 1) + 2) * (g[k] - g[i])) \
//		* (g[j] - g[k]))
//
//void work() {
//	f = 0, r = 1; //
//	for (int i = 1; i < n + 1; ++i) {
//		while (f < r - 1 && !check(q[f], q[f + 1], i))
//			++f;
//		F[i] = F[q[f]] + sqr(g[i] - g[q[f]] - 1 - len);
//		while (f < r - 1 && !cmp(q[r - 2], q[r - 1], i))
//			--r;
//		q[r++] = i;
//	}
//	printf("%lld\n", F[n]);
//	return;
//}
//
//int main() {
//	init_file();
//	readdata();
//	work();
//	return 0;
//}
