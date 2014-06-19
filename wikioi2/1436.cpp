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
//int process(int A) {
//	if (A >= 0) {
//		return 5;
//	}
//	return process(A + 1) + process(A + 2) + 1;
//}
//int prime(int n) { //找素数
//	if (n == 2)
//		return 1;
//	for (int i = 2; i * i <= n; i++) //省略了 sqrt的时间，因为数据范围小，所以不会爆
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//
//char dic[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B',
//		'C', 'D', 'E', 'F' };
//int main() {
//	int m, k;
//	cin >> m >> k;
////	cout<<k<<endl;
//	int cnt=0;
//	for (int i = 2; i+k <= m; i++) {
//		if (prime(i) && prime(i + k)) {
//			cout << i << ' ' << i + k << endl;
//			cnt++;
//		}
//	}
//	cout<<"Total Is:"<<cnt;
//	return 0;
//}
//
