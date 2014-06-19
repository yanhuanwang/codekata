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
//#include <queue>
//#include <cassert>
//#include <iostream>
//using namespace std;
//#define PI 3.14159265358979323846264338327950288
//struct dot {
//	int x;
//	int y;
//	dot(int i, int j) :
//			x(i), y(j) {
//	}
//};
//bool isCollinear(pair<int, int> dot1, pair<int, int> dot2,
//		pair<int, int> dot3) {
//	if ((dot1.first == dot2.first && dot1.first == dot3.first)
//			|| (dot1.second == dot2.second && dot1.second == dot3.second)) {
//		return true;
//	} else if ((float(dot1.second - dot2.second)
//			/ float(dot1.first - dot2.first))
//			== (float(dot3.second - dot2.second)
//					/ float(dot3.first - dot2.first))) {
//		return true;
//	} else {
//		return false;
//	}
//}
//bool isScalene(pair<int, int> dot1, pair<int, int> dot2, pair<int, int> dot3) {
//	bool res = true;
//	int distance12 = pow(dot1.first - dot2.first, 2)
//			+ pow(dot1.second - dot2.second, 2);
//	int distance13 = pow(dot1.first - dot3.first, 2)
//			+ pow(dot1.second - dot3.second, 2);
//	int distance32 = pow(dot3.first - dot2.first, 2)
//			+ pow(dot3.second - dot2.second, 2);
//	if (distance12 == distance13 || distance12 == distance32
//			|| distance13 == distance32) {
//		res = false;
//	}
//	return res;
//}
//bool isObtuse(pair<int, int> dot1, pair<int, int> dot2, pair<int, int> dot3) {
//	bool res = false;
//	int distance12 = pow(dot1.first - dot2.first, 2)
//			+ pow(dot1.second - dot2.second, 2);
//	int distance13 = pow(dot1.first - dot3.first, 2)
//			+ pow(dot1.second - dot3.second, 2);
//	int distance32 = pow(dot3.first - dot2.first, 2)
//			+ pow(dot3.second - dot2.second, 2);
//	if (distance12 + distance13 < distance32
//			|| distance12 + distance32 < distance13
//			|| distance13 + distance32 < distance12) {
//		res = true;
//	}
//	return res;
//}
//bool isAtuse(pair<int, int> dot1, pair<int, int> dot2, pair<int, int> dot3) {
//	bool res = false;
//	int distance12 = pow(dot1.first - dot2.first, 2)
//			+ pow(dot1.second - dot2.second, 2);
//	int distance13 = pow(dot1.first - dot3.first, 2)
//			+ pow(dot1.second - dot3.second, 2);
//	int distance32 = pow(dot3.first - dot2.first, 2)
//			+ pow(dot3.second - dot2.second, 2);
//	if (distance12 + distance13 > distance32
//			&& distance12 + distance32 > distance13
//			&& distance13 + distance32 > distance12) {
//		res = true;
//	}
//	return res;
//}
//string process(int x1, int y1, int x2, int y2, int x3, int y3) {
//	string res;
//	pair<int, int> dot1(x1, y1);
//	pair<int, int> dot2(x2, y2);
//	pair<int, int> dot3(x3, y3);
//	if (dot1 == dot2 || dot1 == dot3 || dot2 == dot3) {
//		res = "not a ";
//	} else if (isCollinear(dot1, dot2, dot3)) {
//		res = "not a ";
//	} else {
//		if (isScalene(dot1, dot2, dot3)) {
//			res += "scalene ";
//		} else {
//			res += "isosceles ";
//		}
//		if (isObtuse(dot1, dot2, dot3)) {
//			res += "obtuse ";
//		} else if (isAtuse(dot1, dot2, dot3)) {
//			res += "acute ";
//		} else {
//			res += "right ";
//		}
//	}
//	return res += "triangle";
//}
//int main() {
//	int Case = 1;
//	int N;
//	int x1, y1, x2, y2, x3, y3;
//	string res;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
//		res = process(x1, y1, x2, y2, x3, y3);
//		printf("Case #%d: %s\n", Case++, res.c_str());
//	}
//	return 0;
//}
//
