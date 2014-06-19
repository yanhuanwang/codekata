//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstring>
//using namespace std;
//int n, m;
//int f[50][50][50][50]; //分别表示1,2,3,4卡片的剩余次数的积分
//int f1 = 0, f2 = 0, f3 = 0, f4 = 0; //四种卡片的次数
//int map[400];
//
//int main() {
//	cin >> n >> m;
//	memset(f, 0, sizeof(f));
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &map[i]);
//	for (int i = 1; i <= m; i++) {
//		int x;
//		scanf("%d", &x);
//		if (x == 1)
//			f1++;
//		if (x == 2)
//			f2++;
//		if (x == 3)
//			f3++;
//		if (x == 4)
//			f4++;
//	}
//	f[0][0][0][0] = map[1];
//	for (int i = 0; i <= f1; i++) {
//		for (int j = 0; j <= f2; j++) {
//			for (int k = 0; k <= f3; k++) {
//				for (int l = 0; l <= f4; l++) {
//					if(i>0)
//					f[i][j][k][l] = max(f[i][j][k][l],
//							f[i - 1][j][k][l]
//									+ map[1 + i * 1 + j * 2 + k * 3 + l * 4]);
//					if(j>0)
//					f[i][j][k][l] = max(f[i][j][k][l],
//							f[i][j - 1][k][l]
//									+ map[1 + i * 1 + j * 2 + k * 3 + l * 4]);
//					if(k>0)
//					f[i][j][k][l] = max(f[i][j][k][l],
//							f[i][j][k - 1][l]
//									+ map[1 + i * 1 + j * 2 + k * 3 + l * 4]);
//					if(l>0)
//					f[i][j][k][l] = max(f[i][j][k][l],
//							f[i][j][k][l - 1]
//									+ map[1 + i * 1 + j * 2 + k * 3 + l * 4]);
//				}
//			}
//		}
//	}
//	cout << f[f1][f2][f3][f4];
////	f[f1][f2][f3][f4] = map[1];
////	for (int i = f1; i >= 0; i--)
////		for (int j = f2; j >= 0; j--)
////			for (int k = f3; k >= 0; k--)
////				for (int l = f4; l >= 0; l--) {
////					f[i][j][k][l] = max(f[i][j][k][l],
////							f[i + 1][j][k][l]
////									+ map[1 + (f1 - i) * 1 + (f2 - j) * 2
////											+ (f3 - k) * 3 + (f4 - l) * 4]);
////					f[i][j][k][l] = max(f[i][j][k][l],
////							f[i][j + 1][k][l]
////									+ map[1 + (f1 - i) * 1 + (f2 - j) * 2
////											+ (f3 - k) * 3 + (f4 - l) * 4]);
////					f[i][j][k][l] = max(f[i][j][k][l],
////							f[i][j][k + 1][l]
////									+ map[1 + (f1 - i) * 1 + (f2 - j) * 2
////											+ (f3 - k) * 3 + (f4 - l) * 4]);
////					f[i][j][k][l] = max(f[i][j][k][l],
////							f[i][j][k][l + 1]
////									+ map[1 + (f1 - i) * 1 + (f2 - j) * 2
////											+ (f3 - k) * 3 + (f4 - l) * 4]);
////				}
////	cout << f[0][0][0][0];
//	return 0;
//}
