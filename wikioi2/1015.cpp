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
//	string s;
//	cin >> s;
//	vector<string> vs = Tokenize(s, "=");
//	vector<string> left;
//	string newword;
//	for (int i = 0; i < vs[0].size(); i++) {
////		bool inword = false;
//		if (vs[0][i] == '-' || vs[0][i] == '+') {
//			if (!newword.empty())
//				left.push_back(newword);
//			newword.clear();
//			newword += vs[0][i];
//		} else {
//			newword += vs[0][i];
//		}
//	}
//	if (!newword.empty())
//		left.push_back(newword);
////	for (auto x : left) {
////		cout << x << " ";
////	}
////	cout << endl;
//
//	vector<string> right;
//	string newword2;
//	for (int i = 0; i < vs[1].size(); i++) {
////		bool inword = false;
//		if (vs[1][i] == '-' || vs[1][i] == '+') {
//			if (!newword2.empty())
//				right.push_back(newword2);
//			newword2.clear();
//			newword2 += vs[1][i];
//		} else {
//			newword2 += vs[1][i];
//		}
//	}
//	if (!newword2.empty())
//		right.push_back(newword2);
////	for (auto x : right) {
////		cout << x << " ";
////	}
////	cout << endl;
//	int leftsum = 0;
//	for (int i = 0; i < left.size(); i++) {
//		if (left[i].find_first_of("abcdefghijklmnopqrstuvwxyz", 0) == -1) {
//			leftsum += atoi(left[i].c_str());
//			left.erase(left.begin() + i);
//			i--;
//		}
//	}
////	cout << leftsum << endl;
//
//	int rightsum = 0;
//	for (int i = 0; i < right.size(); i++) {
//		if (right[i].find_first_of("abcdefghijklmnopqrstuvwxyz", 0) == -1) {
//			rightsum += atoi(right[i].c_str());
//			right.erase(right.begin() + i);
//			i--;
//		}
//	}
////	cout << rightsum << endl;
//
//	//move leftsum to right;
//	rightsum -= leftsum;
////	cout << rightsum << endl;
//	leftsum = 0;
//	//move rightx to left
//	for (int i = 0; i < right.size(); i++) {
//		if (right[i][0] == '-') {
//			right[i][0] = '+';
//			left.push_back(right[i]);
//		} else if (right[i][0] == '+') {
//			right[i][0] = '-';
//			left.push_back(right[i]);
//		} else {
//			right[i] = '-' + right[i];
//			left.push_back(right[i]);
//		}
//	}
//	int p = left[0].find_first_of("abcdefghijklmnopqrstuvwxyz", 0);
//	char a = left[0][p];
//	for (int i = 0; i < left.size(); i++) {
//		leftsum += atoi(left[i].c_str());
//	}
//	printf("%c=%.3f\n", a, float(rightsum) / float(leftsum));
////	for (auto x : left) {
////		cout << x << " ";
//////	cout<<atoi(x.c_str())<<endl;
////	}
////	cout << endl;
////	vector<string> left = Tokenize(s, "-+");
////	if (vs[0][0] == '-') {
////		left[0] = "-" + left[0];
////		for (int i = 1, p = 0; i < left.size(); i++) {
////			p = vs[0].find_first_of("-+", p + 1);
////			left[i] = vs[p] + left[i];
////		}
////	} else {
////		for (int i = 1, p = 0; i < left.size(); i++) {
////			p = vs[0].find_first_of("-+", p + 1);
////			cout<<p<<endl;
////			left[i] = (string)vs[p] + left[i];
////			cout<<left[i]<<endl;
////		}
////	}
////for(auto x:left){
////	cout<<x<<" ";
////}
////cout<<endl;
////	vector<string> right = Tokenize(s, "-+");
//
////	cout << vs[0] << " " << vs[1];
//	return 0;
//}
//
