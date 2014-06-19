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
//string process(vector<string>&vszip, vector<pair<int, int>>&vpflights) {
//	string res;
//
//	return res;
//}
//int main() {
//
//	int Case = 1;
//	int T;
//
//	string res;
//	scanf("%d", &T);
//	while (T--) {
//		int N, M;
//		scanf("%d%d", &N, &M);
//		vector<string> vszip;
//		for (int i = 0; i < N; i++) {
//			char tmp[6];
//			scanf("%s", tmp);
//			vszip.push_back(tmp);
//		}
////		for(auto x:vszip){
////			cout<<x<<endl;
////		}
////		cout<<endl;
//
//		vector<pair<int, int>> vpflights;
//		for (int k = 0; k < M; k++) {
//			int i, j;
//			scanf("%d%d", &i, &j);
//			vpflights.push_back(make_pair(i, j));
//		}
////		for(auto x:vpflights){
////			cout<<x.first<<" "<<x.second<<endl;
////		}
//		res = process(vszip, vpflights);
//		printf("Case #%d: %s\n", Case++, res.c_str());
//	}
//	return 0;
//}
//
