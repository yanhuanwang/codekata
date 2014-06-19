//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <algorithm>
//#include <numeric>
//#include <functional>
//#include <vector>
//#include <set>
//#include <list>
//#include <stack>
//#include <map>
//#include <queue>
//using namespace std;
//map<string, string> mm;
//string FindFather(string str) {
//	if (mm[str] == str)
//		return str;
//	else
//		return FindFather(mm[str]);
//}
//int main() {
//	int x[4], y[4];
//	cin >> x[0] >> y[0] >> x[1] >> y[1];
//	cin >> x[2] >> y[2] >> x[3] >> y[3];
//	int s = (x[1] - x[0]) * (y[1] - y[0]) + (x[3] - x[2]) * (y[3] - y[2]);
//	sort(x, x + 4);
//	sort(y, y + 4);
//	int i = (x[2] - x[1]) * (y[2] - y[1]);
//	s -= 2 * i;
//	cout << i << " " << s << " " << 10000 - s - i;
//}
///*
// 3 2 1
// AAA
// BBB
// CCC
// AAA CCC
// BBB CCC
// AAA BBB
// */
