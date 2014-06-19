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
//void printe(int a[],int prev[],int j){
//	if(prev[j]!=-1){
//		printe(a,prev,prev[j]);
//	}
//	cout<<a[j]<<' ';
//}
//int lis_dp(int a[], int len) {
//	int res = 1;
//	int dp[len], prev[len];
//	dp[0] = 1;
////	prev[0] = -1;
//	memset(prev,-1,sizeof(prev));
//	for (int i = 1; i < len; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (a[i] > a[j]) {
////				dp[i] = max(dp[i], dp[j] + 1);
//				if (dp[j] + 1 > dp[i]) {
//					dp[i] = dp[j] + 1;
//					prev[i] = j;
//				}
//			}
//		}
//	}
//	int j=0;
//	for (int i = 0; i < len; i++) {
////		res = max(dp[i], res);
//		if(dp[i]>res){
//			res=dp[i];
//			j=i;
//		}
//	}
//	printe(a,prev,j);
////	while(prev[j]!=-1){
////		cout<<a[j]<<' ';
////		j=prev[j];
////	}
////	cout<<a[j]<<endl;
//	cout<<endl;
//	return res;
//}
//int main() {
//	int arr[] = { 6, 3, 7, 11, 12, 10, 1, 13, 8, 5, 4, 15, 14, 9, 2 };
////	int arr[] = { 1, 1, 1, 2, 2, 2, 3, 3, 3 };
//	int len = sizeof(arr) / sizeof(int);
////	cout << len << endl;
//	cout << lis_dp(arr, len) << endl;
////	cout << lis_greedy(arr, len) << endl;
//	return 0;
//}
//
