///*
// * AlienNumbers.cpp
//
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
//string process(char* alien_number, char*source_language, char*target_language) {
//	string res;
//	char source_language_m[256];
//	int source_length = strlen(source_language);
//	for (int i = 0; i < source_length; i++) {
//		source_language_m[source_language[i]] = i;
//	}
//	char target_language_m[256];
//	int target_length = strlen(target_language);
//	for (int i = 0; i < target_length; i++) {
//		target_language_m[target_language[i]] = i;
//	}
//	int source_base = strlen(source_language);
//	int target_base = strlen(target_language);
//	int source_num = 0, target_num = 0;
//	int n = strlen(alien_number);
//	for (int i = 0; i < n; i++) {
//		source_num += source_language_m[alien_number[i]]
//				* pow(source_base, n - i - 1);
//	}
////	cout << "source_base:" << source_base << " source_num:" << source_num
////			<< " n:" << n << endl;
//	string target;
//	while (source_num) {
//		target += target_language[source_num % target_base];
//		source_num /= target_base;
//	}
//	reverse(begin(target), end(target));
//	res = target;
//	return res;
//}
//int main() {
////	int i;
//	int Case = 1;
//	int N;
//	char alien_number[100];
//	char source_language[100];
//	char target_language[100];
//	string res;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%s%s%s", alien_number, source_language, target_language);
//		res = process(alien_number, source_language, target_language);
//		printf("Case #%d: %s\n", Case++, res.c_str());
//	}
//	return 0;
//}

