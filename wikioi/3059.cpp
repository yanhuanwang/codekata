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
//void getNextCordinate(int &i, int &j, int N) {
//	if (j == 0) {
//		j = i + 1;
//		i = 0;
//		return;
//	}
//	i++;
//	j--;
//}
//int main() {
//	int n;
//	cin >> n;
//	int a[n];
//	int i = 0;
//	while (i < n) {
//		cin >> a[i];
//		if (a[i] > 3000) {
//			cout << "Can't transport!";
//			return 0;
//		}
//		i++;
//	}
//	i = 0;
//	int sum = 0;
//	while (i < n) {
//		if (a[i] <= 10) {
//			sum += 50;
//		} else if ((a[i] <= 100) && (a[i] > 10)) {
//			sum += 180;
//		} else if ((a[i] <= 300) && (a[i] > 100)) {
//			sum += 300;
//		} else if ((a[i] <= 1000) && (a[i] > 300)) {
//			sum += 1000;
//		} else if ((a[i] <= 3000) && (a[i] > 1000)) {
//			sum += 2000;
//		} else if (a[i] > 3000) {
//			cout << "Can¡¯t transport!";
//		}
//		i++;
//	}
//	cout<<sum;
//	return 0;
//}
//
