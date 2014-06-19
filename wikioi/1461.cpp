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
//int main() {
//	string dict[13] = { " ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs",
//			"tuv", "wxyz" };
////	map<char, int> dicts = { { ' ', 1 }, { 'a', 1 }, { 'b', 2 }, { 'c', 3 }, {
////			'd', 1 }, { 'e', 2 }, { 'f', 3 }, { 'g', 1 }, { 'h', 2 },
////			{ 'i', 3 }, { 'j', 1 }, { 'k', 2 }, { 'l', 3 }, { 'm', 1 },
////			{ 'n', 2 }, { 'o', 3 }, { 'p', 1 }, { 'q', 2 }, { 'r', 3 },
////			{ 's', 4 }, { 't', 1 }, { 'u', 2 }, { 'v', 3 }, { 'w', 1 },
////			{ 'x', 2 }, { 'y', 3 }, { 'z', 4 } };
////	map<char, int> dicts ( { { ' ', 1 }, { 'a', 1 }, { 'b', 2 }, { 'c', 3 }, {
////			'd', 1 }, { 'e', 2 }, { 'f', 3 }, { 'g', 1 }, { 'h', 2 },
////			{ 'i', 3 }, { 'j', 1 }, { 'k', 2 }, { 'l', 3 }, { 'm', 1 },
////			{ 'n', 2 }, { 'o', 3 }, { 'p', 1 }, { 'q', 2 }, { 'r', 3 },
////			{ 's', 4 }, { 't', 1 }, { 'u', 2 }, { 'v', 3 }, { 'w', 1 },
////			{ 'x', 2 }, { 'y', 3 }, { 'z', 4 } });
//	map<char, int> dicts;
//	dicts[' ']=1;
//	dicts['a']=1;
//	dicts['b']=2;
//	dicts['c']=3;
//	dicts['d']=1;
//	dicts['e']=2;
//	dicts['f']=3;
//	dicts['g']=1;
//	dicts['h']=2;
//	dicts['i']=3;
//	dicts['j']=1;
//	dicts['k']=2;
//	dicts['l']=3;
//	dicts['m']=1;
//	dicts['n']=2;
//	dicts['o']=3;
//	dicts['p']=1;
//	dicts['q']=2;
//	dicts['r']=3;
//	dicts['s']=4;
//	dicts['t']=1;
//	dicts['u']=2;
//	dicts['v']=3;
//	dicts['w']=1;
//	dicts['x']=2;
//	dicts['y']=3;
//	dicts['z']=4;
//	string s;
//	getline(cin, s);
//	int sum = 0;
//	for (int i = 0; i < s.size(); i++) {
//		sum += dicts[s[i]];
//	}
//	cout << sum;
//	return 0;
//}
//
