///*
// * 2524.cpp
// *
// *  Created on: Jun 15, 2014
// *      Author: ecaiyan
// */
//#include <cstdio>
//#include <cstdlib>
//#include <string.h>
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
//#define MAX 50000
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
//int main() {
//	memset(father, 0, sizeof(father));
//	int n, m, T = 0;
//	while (cin >> n >> m) {
//		if (!n && !m) {
//			break;
//		}
//		T++;
//		for (int i = 1; i <= n; i++) {
//			Make_Set(i);
//		}
//		int a, b;
//		for (int i = 0; i < m; i++) {
//			cin >> a >> b;
//			Union(a, b);
//		}
//		int res = 0;
//		set<int> groups;
//		for (int i = 1; i <= n; i++) {
//			int t = Find_Set(i);
//			if (groups.count(t)) {
//				continue;
//			} else {
//				res++;
//				groups.insert(t);
//			}
//		}
//		cout << "Case " << T << ": " << res << endl;
//	}
//	return 0;
//}
//
