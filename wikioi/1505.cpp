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
//#define maxn 300
//int main2(void) {
//	char s[maxn], *p;
//	int n = 0;
//	double t, sum = 0.0;
//	while (scanf("%s", s) != EOF) {
//		t = strtod(s, &p);
//		if (!*p && t >= -70000 && t <= 70000) {
//			cout << t << endl;
//			n++;
//			sum += t;
//		}
//	}
//	printf("%.2lf\n", n ? sum / n : 0.00);
//	return 0;
//}
//int main() {
//	string a;
//	char b[255];
//	double sum = 0;
//	int cnt = 0;
//	while (scanf("%s", b) != EOF) {
//		a = b;
//		if (a.find_first_not_of("0123456789.-") != -1) {
//			continue;
//		}
//		if (a.find_first_of("0123456789") == -1) {
//			continue;
//		}
////		cout<<"a.find_first_of(\"-\")="<<(int)a.find_first_of("-")<<endl;
//		if ((int)a.find_first_of("-") > 0) {
//			continue;
//		}
//		if (count(a.begin(), a.end(), '.') > 1) {
//			continue;
//		}
//		if (count(a.begin(), a.end(), '-') > 1) {
//			continue;
//		}
////		if (a[0] == '.') {
////			continue;
////		}
//
////		cout << cnt << endl;
//		double t = atof(a.c_str());
//		if ((t > 70000) || (t < -70000)) {
//			continue;
//		}
//		cnt++;
//		cout << a << endl;
//		sum += t;
////		cout << sum << endl;
//	}
//	if (cnt)
//		printf("%.2lf", sum / cnt);
//	else
//		cout << "0.00";
//	return 0;
//}
//
