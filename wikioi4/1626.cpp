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
//
//const int MAXN = 100000000;
//int flag[MAXN / 32 + 1];
//int primes[MAXN / 3 + 1], pi;
//void GetPrime_1(int a, int b) {
//
//	int i, j;
//	pi = 0;
//	memset(flag, 0, sizeof(flag));
//	for (i = 2; i < b; i++)
//		if (!((flag[i / 32] >> (i % 32)) & 1)) {
//			primes[pi++] = i;
//			if (i >= a) {
////				cout<<i<<endl;
//				stringstream ss;
//				string s;
//				ss << primes[pi - 1];
//				ss >> s;
//				string t = s;
//				reverse(t.begin(), t.end());
//				if (t == s) {
//					cout << s << endl;
//				}
//			}
//			for (j = i; j < b; j += i)
//				flag[j / 32] |= (1 << (j % 32));
//		}
//}
//
//struct node {
//	int x, y;
//};
//int main() {
//	int a, b;
//	cin >> a >> b;
//	GetPrime_1(a, b);
//	return 0;
//}
//
