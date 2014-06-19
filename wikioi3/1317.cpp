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
////bitset<100000000> b;
//const int MAXN = 5000000;
//int flag[MAXN / 32 + 1];
//int primes[MAXN / 3 + 1], pi;
//void GetPrime_1() {
//	int i, j;
//	pi = 0;
//	memset(flag, 0, sizeof(flag));
//	for (i = 2; i < MAXN; i++)
//		if (!((flag[i / 32] >> (i % 32)) & 1)) {
//			primes[pi++] = i;
//			for (j = i; j < MAXN; j += i)
//				flag[j / 32] |= (1 << (j % 32));
//		}
//}
//int main() {
//	int N, T;
//	cin >> N >> T;
//	vector<vector<int>> vvi(N);
//	for (int i = 0; i < N; i++) {
//		int M;
//		cin >> M;
//		for (int j = 0; j < M; j++) {
//			int a;
//			cin >> a;
//			vvi[i].push_back(a);
//		}
//	}
//	for(auto x:vvi){
//		for(auto y:x){
//			cout<<y<<' ';
//		}
//		cout<<endl;
//	}
//	return 0;
//}
