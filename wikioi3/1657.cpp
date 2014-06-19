//#include <cstdio>
//#include <cstdlib>
////#include <memory.h>
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
//
//using namespace std;
//char s[5];
//int main() {
//	int tc;
//	scanf("%d", &tc);
//	gets(s);
//	while (tc--) {
//		gets(s);
//		int sx, sy, ex, ey;
//		sx = s[0] - 'a' + 1, sy = s[1] - '0';
//		ex = s[3] - 'a' + 1, ey = s[4] - '0';
//		int r1, r2, r3, r4;
//		int t;
//		t = min(abs(sx - ex), abs(sy - ey));
//		r1 = t + abs(sx - ex) - t + abs(sy - ey) - t;
//		r2 = ((sx + sy) % 2 == (ex + ey) % 2 || sx == ex || sy == ey) ? 1 : 2;
//		r3 = (sx == ex || sy == ey) ? 1 : 2;
//		r4 = ((sx + sy) % 2 == (ex + ey) % 2) ?
//				(abs(sx - ex) == abs(sy - ey) ? 1 : 2) : -1;
//		(sx == ex && sy == ey) ?
//				printf("0 0 0 0\n") :
//				(r4 != -1 ?
//						printf("%d %d %d %d\n", r1, r2, r3, r4) :
//						printf("%d %d %d Inf\n", r1, r2, r3));
//	}
//	return 0;
//}
