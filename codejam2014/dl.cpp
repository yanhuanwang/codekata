///*
// * dl.cpp
// *
// *  Created on: Apr 13, 2014
// *      Author: ecaiyan
// */
////�����������㷨
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
//	//��array1��ֵ��1������ף�0��������
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			array1[i][j] = (int) ((double) rand() / (double) RAND_MAX + 0.5);
//			if (j % 10 == 0)
//				printf("\n\n");
//			printf("%4d", array1[i][j]);
//		}
//	}
//
//	//�����ױ��Ϊ9
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (array1[i][j] == 1)
//				array1[i][j] = 9;
//		}
//	}
//	//��ʼ��array2,ȫ����ֵ0
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			array2[i][j] = 0;
//		}
//	}
//	//����ÿһ����Χ8����ĵ�����Ŀ
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
//	//��ӡ����ͼ
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
