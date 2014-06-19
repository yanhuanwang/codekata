///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <memory.h>
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
//#define PI 3.14159265358979323846264338327950288
//vector<string> Tokenize(string s, string ch) {
//	vector<string> ret;
//	for (int p = 0, p2; p < s.size(); p = p2 + 1) {
//		p2 = s.find_first_of(ch, p);
//		if (p2 == -1)
//			p2 = s.size();
//		if (p2 - p > 0)
//			ret.push_back(s.substr(p, p2 - p));
//	}
//	return ret;
//}
//int my_abs(int a) {
//	int i = a >> 31;
//	return ((a ^ i) - i);
//}
//
//vector<int> TokenizeInt(string s, string ch) {
//	vector<int> ret;
//	vector<string> p = Tokenize(s, ch);
//	for (int i = 0; i < p.size(); i++)
//		ret.push_back(atoi(p[i].c_str()));
//	return ret;
//}
//int process(int A, int B, int K) {
//	int res = 0;
//	return res;
//}
//int main2() {
//	char array[9] = { '*', 'x', '*', ' ', 'x', 'x', '*', ' ', '*' };
//	int n = 0;
////	scanf("%d", &n);
//	n=4;
//	for (int i = 0; i < 3; ++i) //行
//			{
//		for (int j = 0; j < n; ++j) //每个字符放大n倍，纵向
//				{
//			for (int k = 0; k < 3; ++k) //每行三个字符
//					{
//				for (int m = 0; m < n; ++m) //每个字符放大n倍，横向
//						{
//					printf("%c", array[i * 3 + k]);
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main() {
//	int k;
//	cin >> k;
//	int s = 3 * k;
//	char o[3][3] = { { '*', 'x', '*' }, { ' ', 'x', 'x' }, { '*', ' ', '*' } };
//	char m[s][s];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int l = 0; l < k; l++) {
//				for (int n = 0; n < k; n++) {
//					m[i * k + l][j * k + n] = o[i][j];
//				}
//			}
//		}
//	}
//	for (int i = 0; i < s; i++) {
//		for (int j = 0; j < s; j++) {
//			cout << m[i][j];
//		}
//		cout << endl;
//	}
//
////	cout<<endl;
////	main2();
//	return 0;
//}
//
