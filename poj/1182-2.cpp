///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//#include <string.h>
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
//int father[MAX]; /* father[x]��ʾx�ĸ��ڵ�*/
//int val[MAX]; /* rank[x]��ʾx����*/
///* ��ʼ������*/
//void Make_Set(int x) {
//	father[x] = x; //����ʵ�����ָ���ĸ��ڵ�ɱ仯
//	val[x] = 0;   //����ʵ�������ʼ����Ҳ�����仯
//}
///* ����xԪ�����ڵļ���,����ʱѹ��·��*/
//int Find_Set(int x) {
//	if (x != father[x]) {
//		father[x] = Find_Set(father[x]); //�������ʱ��ѹ��·���Ǿ���
//	}
//	return father[x];
//}
///*
// ���Ⱥϲ�x,y���ڵļ���
// ������Ǹ�if else�ṹ���Ǿ��Եģ������������仯
// ���ǣ���ּ�ǲ���ļ������Ⱥϲ���ʵʱ�����ȡ�
// */
//void Union(int x, int y) {
//	x = Find_Set(x);
//	y = Find_Set(y);
//	if (x == y)
//		return;
//	if (val[x] > val[y]) {
//		father[y] = x;
//	} else {
//		if (val[x] == val[y]) {
//			val[y]++;
//		}
//		father[x] = y;
//	}
//}
//
//int main() {
//	int n, k, d, x, y;
//	vector<int> a, b, c;
//	map<int, int> m;
//	cin >> n >> k;
//	int f[n + 1];
//	memset(f, 0, sizeof(f));
//	set<int> used;
//	for (int i = 1; i <= n; i++) {
//		Make_Set(i);
//	}
//	int cnt = 0;
//	while (k--) {
//		cin >> d >> x >> y;
//		if (used.empty()) {
//			if (d == 1) {
//				Union(x, y);
//			} else if (d == 2) {
//
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}
//
