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
//#include <iomanip>
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
//map<char, int> m;
//
//struct node {
//	int id;
//	float speed;
//	float rate;
//	float score;
//};
//bool cmp(node a, node b) {
//	if(a.score==b.score){
//		return a.id<b.id;
//	}
//	return a.score > b.score;
//}
//int main() {
//	int n;
//	cin >> n;
//	node nd[n];
//	for (int i = 0; i < n; i++) {
//		cin >> nd[i].speed >> nd[i].rate;
//		nd[i].id = i + 1;
//		nd[i].score = nd[i].speed * nd[i].rate / 100.00;
//	}
//	sort(nd, nd + n,cmp);
//	for (int i = 0; i < n; i++) {
//		cout<<nd[i].id<<" "<<fixed<<setprecision(2)<<nd[i].score<<endl;
//	}
//}
