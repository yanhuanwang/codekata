///*
// * EggDrop.cpp
// *
// *  Created on: Mar 31, 2014
// *      Author: ecaiyan
// */
///*
// * AlwaysTurnLeft.cpp
// *
// *  Created on: Mar 30, 2014
// *      Author: ecaiyan
// */
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
//#include <queue>
//#include <cassert>
//#include <iostream>
//using namespace std;
//#define PI 3.14159265358979323846264338327950288
//int getF(int D, int B) {
//	long long F = 0;
//	F = D * (D + 1) / 2+1;
//	if (F >= 4294967296) {
//		F = -1;
//	}
//	return F;
//}
//int getD(int B, int F) {
//	int D = 0;
//	int Dt = floor(sqrt(F));
//	while (Dt--) {
//		if (Dt * (Dt + 1) == F) {
//			return Dt;
//		}
//	}
//	return D;
//}
//int getB(int D, int F) {
//	int B = 0;
//	return B;
//}
//void process(int &F, int &D, int &B) {
//	int oriF = F, oriD = D, oriB = B;
//	F = getF(oriD, oriB);
//	D = getD(oriB, oriF);
//	B = getB(oriD, oriF);
//}
//int main() {
//	int Case = 1;
//	int N;
//	int F, D, B;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d%d%d", &F, &D, &B);
//		process(F, D, B);
//		printf("Case #%d: %d\n", Case++, F, D, B);
//	}
//	return 0;
//}
//
