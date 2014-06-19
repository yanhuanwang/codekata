///*
// * c.cpp
// *
// *  Created on: Apr 1, 2014
// *      Author: ecaiyan
// */
//
///*
// * AlwaysTurnLeft.cpp
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
//set<pair<string, string>> sp;
//set<string> spFirst;
//set<string> spSecond;
//string process(vector<string> names, vector<float> prices) {
//	string res;
//	for (int i = 1; i < prices.size(); i++) {
//		if (prices[i] < prices[i - 1]) {
//			sp.insert(make_pair(names[i - 1], names[i]));
//		}
//	}
//	return res;
//}
//int main() {
//	int h = 5;
//	for (int i = 0; i < (1 << h); ++i) {
//		for (int j = 0; j < h; ++j) {
//			if (!(i & (1 << j))) {
//				bitset<5> myset(i);
//				cout << myset << " " << j << endl;
//			}
//		}
//		cout<<endl;
//	}
////	int Case = 1;
////	int N;
//////	cout << INT_MAX << "" << INT_MIN;
////	char tmp[10000];
////	int p[100];
////	string res;
////	vector<string> names;
////	scanf("%d", &N);
////	getchar();
////	while (N--) {
////		fgets(tmp, 10000, stdin);
////		stringstream sin(tmp);
////		N = 0;
////		string name;
////		while (sin >> name)
////			names.push_back(name);
////		for (int i = 0; i < names.size(); i++) {
////			scanf("%d", &p[i]);
////		}
////		vector<float> prices(p, p + names.size());
////		cout << endl;
////		res = process(names, prices);
////		printf("Case #%d: %s\n", Case++, res.c_str());
////	}
//	return 0;
//}
