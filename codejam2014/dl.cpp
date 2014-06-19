///*
// * dl.cpp
// *
// *  Created on: Apr 13, 2014
// *      Author: ecaiyan
// */
////以下是排雷算法
////#include <stdafx.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
//#include <tchar.h>
//
//int main() {
//	int array1[10][10], array2[10][10];
//	int i, j, m, n;
//	srand((unsigned) time(NULL));
//	//对array1赋值，1代表地雷，0代表无雷
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			array1[i][j] = (int) ((double) rand() / (double) RAND_MAX + 0.5);
//			if (j % 10 == 0)
//				printf("\n\n");
//			printf("%4d", array1[i][j]);
//		}
//	}
//
//	//将地雷标记为9
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (array1[i][j] == 1)
//				array1[i][j] = 9;
//		}
//	}
//	//初始化array2,全部赋值0
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			array2[i][j] = 0;
//		}
//	}
//	//计算每一格周围8个格的地雷数目
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (array1[i][j] == 0) {
//				if ((i == 0) && (j == 0)) {
//					for (m = 0; m < 2; m++) {
//						for (n = 0; n < 2; n++) {
//
//							if (array1[i + 1][j + 1] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i == 9) && (j == 9)) {
//					for (m = 0; m < 2; m++) {
//						for (n = 0; n < 2; n++) {
//							if (array1[i - 1 + m][j - 1 + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i == 0) && (j == 9)) {
//					for (m = 0; m < 2; m++) {
//						for (n = 0; n < 2; n++) {
//							if (array1[i + m][j - 1 + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i == 9) && (j == 0)) {
//					for (m = 0; m < 2; m++) {
//						for (n = 0; n < 2; n++) {
//							if (array1[i - 1 + m][j + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i > 0) && (i < 9) && (j == 0)) {
//					for (m = 0; m < 3; m++) {
//						for (n = 0; n < 2; n++) {
//							if (array1[i - 1 + m][j + n])
//								array2[i][j]++;
//						}
//					}
//				} else if ((i == 0) && (j > 0) && (j < 9)) {
//					for (m = 0; m < 2; m++) {
//						for (n = 0; n < 3; n++) {
//							if (array1[i + m][j - 1 + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i == 9) && (j > 0) && (j < 9)) {
//					for (m = 0; m < 2; m++) {
//						for (n = 0; n < 3; n++) {
//							if (array1[i - 1 + m][j - 1 + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i > 0) && (i < 9) && (j == 9)) {
//					for (m = 0; m < 3; m++) {
//						for (n = 0; n < 2; n++) {
//							if (array1[i - 1 + m][j - 1 + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				} else if ((i > 0) && (i < 9) && (j < 0) && (j < 9)) {
//					for (m = 0; m < 3; m++) {
//						for (n = 0; n < 3; n++) {
//							if (array1[i - 1 + m][j - 1 + n] == 9)
//								array2[i][j]++;
//						}
//					}
//				}
//			} else {
//				array2[i][j] = 9;
//			}
//
//		}
//	}
//	//打印地雷图
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (j % 10 == 0)
//				printf("\n\n");
//			printf("%4d", array2[i][j]);
//		}
//	}
//	return 1;
//}
//
