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
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//struct node {
//	int x, y;
//};
////int dp[1000][1000];
////#define MAX 1000
//int main() {
//	string START, CODE, END;
//	while (1) {
//		getline(cin, START);
//		if (START == "ENDOFINPUT") {
//			break;
//		}
//		getline(cin, CODE);
//		for (int i = 0; i < CODE.size(); i++) {
//			if (CODE[i] >= 'A' && CODE[i] <= 'Z') {
//				int segment = CODE[i] - 'A';
//				segment -= 5;
//				if (segment < 0) {
//					segment += 26;
//				}
//				segment %= 26;
//				CODE[i] = 'A' + segment;
//			}
//		}
//		cout << CODE << endl;
//		getline(cin, END);
//	}
//	return 0;
//}
//
