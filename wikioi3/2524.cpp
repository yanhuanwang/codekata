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
//int father[MAX]; /* father[x]表示x的父节点*/
//int val[MAX]; /* rank[x]表示x的秩*/
///* 初始化集合*/
//void Make_Set(int x) {
//	father[x] = x; //根据实际情况指定的父节点可变化
//	val[x] = 0;   //根据实际情况初始化秩也有所变化
//}
///* 查找x元素所在的集合,回溯时压缩路径*/
//int Find_Set(int x) {
//	if (x != father[x]) {
//		father[x] = Find_Set(father[x]); //这个回溯时的压缩路径是精华
//	}
//	return father[x];
//}
///*
// 按秩合并x,y所在的集合
// 下面的那个if else结构不是绝对的，具体根据情况变化
// 但是，宗旨是不变的即，按秩合并，实时更新秩。
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
