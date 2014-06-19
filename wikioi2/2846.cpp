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
//map<char, int> m;
//struct node {
//	int id;
//	int strength;
//};
//map<int, int> mp;
//bool cmp(int a, int b) {
//	if (mp[a] == mp[b]) {
//		return b < a;
//	}
//	return mp[a] <= mp[b];
//}
//
//int main2() {
//	int n, m;
//	cin >> n >> m;
////	node nd[n];
//
//	for (int i = 0; i < n; i++) {
////		cin>>nd[i].strength;
////		nd[i].id=i;
//		int t;
//		cin >> t;
//		mp[i+1] = t;
//	}
//	for(auto x:mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
//	int x, y;
//	for (int i = 0; i < m; i++) {
//		cin >> x >> y;
//		if(cmp(x,y)){
//			cout<<y<<" win!"<<endl;
//		}else{
//			cout<<x<<" win!"<<endl;
//		}
//	}
//	return 0;
//}
//int k[100001];
//int main(){
//    int n,m,a,b,i;
//    scanf("%d%d",&n,&m);
//    for(i=1;i<=n;++i)
//        scanf("%d",&k[i]);
//    while(m--){
//        scanf("%d%d",&a,&b);
//        if(k[a]>=k[b])
//            printf("%d win!\n",a);
//        else
//            printf("%d win!\n",b);
//    }
//    return 0;
//}
