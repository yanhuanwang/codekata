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
//int main2()
//{
//	int a[100000],i,n,j,t;
//	double c=0,b;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		scanf("%d",&a[i]);
//		c=c+a[i];
//	}
//	for(i=1;i<n;i++)
//        for(j=1;j<=(n-i);j++)
//    	{
//    		if(a[j]<a[j+1])
//            {
//            	t=a[j];
//                a[j]=a[j+1];
//            	a[j+1]=t;
//            }
//    	}
//	c=c/n;
//	if(n%2!=0) {b=a[(n+1)/2];}
//	else if(n%2==0) {b=(a[n/2]+a[((n/2)+1)]);b=b/2;}
//	printf("%.6lf\n%.6lf",c,b);
//	return 0;
//}
//int main() {
////	main2();
//	int n;
//	cin >> n;
//	int a[n];
//	double sum = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	double ave = sum / n;
//	printf("%.6lf\n", ave);
//	vector<int> vi(a, a + n);
//	sort(vi.begin(), vi.end());
//	if (n % 2 == 1) {
//		printf("%.6lf", (double)vi[n / 2]);
//	} else {
//		printf("%.6lf", (vi[n / 2 - 1] + vi[n / 2]) / (double)2.0);
//	}
//	return 0;
//}
//
