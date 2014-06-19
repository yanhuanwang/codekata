///*
// * AllYourBase.cpp
// *
// *  Created on: Mar 30, 2014
// *      Author: ecaiyan
// */
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
//#include <queue>
//#include <cassert>
//#include <iostream>
//using namespace std;
//#define PI 3.14159265358979323846264338327950288
//long long int process(char* str) {
//	long long int res = 0;
//	string s = (string) str;
//	unordered_set<char> charactors;
//	unordered_map<char, int> sequence;
//	for (auto x : s)
//		charactors.insert(x);
//	int base = charactors.size();
//	if (base == 1) {
//		base = 2;
//	}
//	sequence[s[0]] = 1;
//	for (int i = 1; i < s.size(); i++) {
//		if (!sequence.count(s[i])) {
//			sequence[s[i]] = 0;
//			for (int j = i + 1, k = 2; j < s.size(); j++) {
//				if (!sequence.count(s[j])) {
//					sequence[s[j]] = k++;
//				}
//			}
//			break;
//		}
//	}
////	for (auto x : sequence) {
////		cout << x.first << " " << x.second << endl;
////	}
//	int n = s.size();
//	for (int i = 0; i < n; i++) {
//		res += sequence[s[i]] * pow(base, n - i - 1);
//	}
//	return res;
//}
//int main() {
////	int i;
//	int Case = 1;
//	int T;
//	long long int res = 0;
//	char str[100];
//	scanf("%d", &T);
//	while (T--) {
//		string s;
//		scanf("%s", str);
//		res = process(str);
//		printf("Case #%d: %lld\n", Case++, res);
//	}
////	cout << process("abcdefghijklmno");
//	return 0;
//}
//
