///*
// * A.cpp
// *
// *  Created on: Apr 26, 2014
// *      Author: ecaiyan
// */
//
//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//#include <string.h>
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
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
////int dp[1000][1000];
////#define MAX 1000
//const int MAXN = 1000000;
//int flag[MAXN / 32 + 1];
//vector<int> primes; //(MAXN / 3 + 1);
//int pi;
//void GetPrime_1() {
//	int i, j;
//	pi = 0;
//	memset(flag, 0, sizeof(flag));
//	for (i = 2; i < MAXN; i++)
//		if (!((flag[i / 32] >> (i % 32)) & 1)) {
////			primes[pi++] = i;
//			primes.push_back(i);
//			for (j = i; j < MAXN; j += i)
//				flag[j / 32] |= (1 << (j % 32));
//		}
//}
//bool is_prime(int n) {
//	if (n < 2) {
//		return false;
//	}
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int compareints (const void * a, const void * b)
//{
//  return ( *(int*)a - *(int*)b );
//}
//int main() {
//	GetPrime_1();
////	for (auto x : primes) {
////		cout << x << ' ';
////	}
//	int a;
//	while (cin >> a) {
//		if (!a)
//			break;
//		for (int i = 1; i < primes.size(); i++) {
//			int key=a-primes[i];
//			if (bsearch(&key, &primes[0], primes.size(), sizeof(int),compareints)!=NULL) {
//				printf("%d = %d + %d\n", a, primes[i], key);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
