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
//#include <unordered_map>
//#include <unordered_set>
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
//
//}
//int main() {
//	int Case = 1;
//	int T;
//	int res;
//	scanf("%d", &T);
//	vector<float> vi1, vi2;
//	while (T--) {
//		float i, j;
//		scanf("%f%f", &i, &j);
//		vi1.push_back(i);
//		vi2.push_back(j);
////		printf("Case #%d: %d\n", Case++, res);
//	}
////	for (auto x : vi1) {
////		cout << x << " " << endl;
////	}
////	for (auto x : vi2) {
////		cout << x << " " << endl;
////	}
//	float sum = 0.0, score = 0.0;
//	for (int i = 0; i < vi1.size(); i++) {
//		sum += vi1[i] * vi2[i];
//		score += vi1[i];
//	}
////	printf("%.2f\n",sum);
////	printf("%.2f\n",score);
//	printf("%.2f\n",sum/score);
////	cout<<(sum/score);
//	return 0;
//}
//
