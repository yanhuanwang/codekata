////#include<iostream>
////#include<cstdio>
////using namespace std;
////int h[1000010];
////int main(){
////    int n,a,c,i,maxn=-1,ans=0;
////    cin>>n>>c;
////    for(i=0;i<n;++i){
////        scanf("%d",&a);
////        if(a>maxn)
////            maxn=a;
////        h[a]++;
////    }
////    for(i=0;i<=maxn;++i){
////        if(h[i]&&i-c>=0){
////            ans+=h[i]*h[i-c];
////        }
////    }
////    cout<<ans<<endl;
////    return 0;
////}
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
//int process(int A) {
//	if (A >= 0) {
//		return 5;
//	}
//	return process(A + 1) + process(A + 2) + 1;
//}
//int main() {
//	int n, c;
//	cin >> n >> c;
////	string a[n];
//	map<int, int> m;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		m[a]++;
//	}
//	int cnt = 0;
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//		int a = it->first - c;
//		if (a > 0 && m.count(a)) {
//			cnt += it->second * m[a];
//		}
////		for(map<int,int>::iterator ij=advance(it,1);ij!=m.end();ij++){
////
////		}
//	}
//	cout<<cnt;
//	return 0;
//}
//
