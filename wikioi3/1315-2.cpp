//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//
//const int mod = 1000007;
//int n, m;
//int a[110];
//int f[110][110];
//
//int min(int x, int y) {
//	return x < y ? x : y;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	memset(f, 0, sizeof(f));
//	f[0][0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = m; j >= 0; j--) {
//			for (int k = 0; k <= min(a[i], j); k++)
//				f[i][j] += f[i - 1][j - k];
//			f[i][j] %= mod;
//		}
//	}
//	printf("%d", f[n][m]);
//	return 0;
//}
