///*
// * reverse_words_in_a_string.cpp
// *
// *  Created on: May 26, 2014
// *      Author: ecaiyan
// */
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
//void reverseWords2(string &s) {
//	if (s.empty() || s == " ") {
//		return;
//	}
//	vector<string> vs = Tokenize(s, " ");
//	reverse(vs.begin(), vs.end());
//	s.clear();
//	if (vs.empty()) {
//		s = "";
//		return;
//	}
//	for (auto x : vs) {
//		s += x;
//		s += " ";
//	}
//	s.pop_back();
//}
//void reverseWords(string &s) {
//	stringstream ss(s);
//	vector<string> vs;
//	string t;
//	while (ss >> t) {
//		cout << t << endl;
//		vs.push_back(t);
//	}
////	if (!vs.empty()) {
////		vs.pop_back();
////	}
////	vs.pop_back();
//	reverse(vs.begin(), vs.end());
//	if (vs.empty()) {
//		s = "";
//		return;
//	}
//	s.clear();
//	for (auto x : vs) {
//		s += x;
//		s += " ";
//	}
//	s.pop_back();
//}
//int main() {
////	string s = "1 ";
////	reverseWords(s);
////	cout << s;
//	string s = " 1   ";
//	reverseWords(s);
//	cout << s;
//	return 0;
//}
