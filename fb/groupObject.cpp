///*
// * groupObject.cpp
// *
// *  Created on: Apr 8, 2014
// *      Author: ecaiyan
// */
///*
// * There are N objects kept in a row. The ith object is at position x_i. You want to partition them into K groups. You want to move all objects belonging to the same group to the same position. Objects in two different groups may be placed at the same position. What is the minimum total amount by which you need to move the objects to accomplish this?
//
// Input:
// The first line contains the number of test cases T. T test cases follow. The first line contains N and K. The next line contains N space seperated integers, denoting the original positions x_i of the objects.
//
// Output:
// Output T lines, containing the total minimum amount by which the objects should be moved.
//
// Constraints:
// 1 <= T <= 1000
// 1 <= K <= N <= 200
// 0 <= x_i <= 1000
//
// Sample Input:
// 3
// 3 3
// 1 1 3
// 3 2
// 1 2 4
// 4 2
// 1 2 5 7
//
// Sample Output:
// 0
// 1
// 3
//
// Explanation:
//
// For the first case, there is no need to move any object.
// For the second case, group objects 1 and 2 together by moving the first object to position 2.
// For the third case, group objects 1 and 2 together by moving the first object to position 2 and group objects 3 and 4 together by moving object 3 to position 7. Thus the answer is 1 + 2 = 3.
// * */
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cstring>
//#include<sstream>
//#include<assert.h>
//#include<cmath>
//#include<vector>
//#include<string>
//#include<map>
//#include<set>
//#include<queue>
//#include<stack>
//#include<climits>
//using namespace std;
////int mins[10000][10000];
//vector<vector<int>> mins(1000, vector<int>(1000, 0));
//int getDistance(vector<int>&items, int start, int end) {
//	int result = 0;
//
//	int total = 0;
//	for (int index = start; index <= end; index += 1) {
//		int item = items[index];
//
//		total += item;
//	}
//
//	int mean = total / (end - start + 1);
//
//	/* it is better to use binary search here */
//	int bestPosition = 0;
//	int bestOffset = 0;
//	for (int index = start; index <= end; index += 1) {
//		int item = items[index];
//
//		if (bestPosition == 0 || bestOffset > abs(item - mean)) {
//			bestOffset = abs(item - mean);
//			bestPosition = index;
//		}
//	}
//
//	for (int index = start; index <= end; index += 1) {
//		int item = items[index];
//
//		result += abs(items[bestPosition] - item);
//	}
//
//	return result;
//}
//;
//
//int getMinDistance(vector<int>&items, int pos, int k) {
//	int result = 0;
//
//	if (pos >= items.size() - k) {
//		return 0;
//	}
//
//	if (k == 1) {
//		result = getDistance(items, pos, items.size() - k);
//	} else {
//		for (int end = pos; end < items.size() - k; end += 1) {
//			/* var distance = getDistance(items, pos, end) + getMinDistance(items, end + 1, k - 1); */
//			int posDistance = 0;
//			if (find(begin(mins[end + 1]), mins[end + 1].end(), (k - 1))
//					!= mins[end + 1].end()) {
//				posDistance = getMinDistance(items, end + 1, k - 1);
//				mins[end + 1][k - 1] = posDistance;
//			} else {
//				posDistance = mins[end + 1][k - 1];
//			}
//			int distance = getDistance(items, pos, end) + posDistance;
//
//			result = (result == 0) ? distance : min(result, distance);
//		}
//	}
//	return result;
//}
//int minDist(vector<int> arr, int start, int end) {
//	int minDist = 0;
//	for (int i = start + 1; i <= end; i++) {
//		minDist += (arr[i] - arr[start]);
//	}
//	int prevDist = minDist;
//	for (int i = start + 1; i <= end; i++) {
//		int dist = prevDist;
//		int diff = arr[i] - arr[i - 1];
//		dist += (i - start) * diff;
//		dist -= (end - i + 1) * diff;
//		minDist = min(minDist, dist);
//		prevDist = dist;
//	}
//	return minDist;
//}
//int minMoves(vector<int> &arr, int k) {
//	int n = arr.size();
//	int min[n][k + 1];
//	for (int i = 0; i < n; i++)
//		min[i][0] = INT_MAX;
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j <= k; j++) {
//			min[i][j] = INT_MAX;
//			for (int a = i; a >= j - 1; a--) {
//				int dist;
//				if (a - 1 >= 0) {
//					if (min[a - 1][j - 1] == INT_MAX)
//						continue;
//					dist = min[a - 1][j - 1];
//				} else {
//					dist = 0;
//				}
//				dist += minDist(arr, a, i);
//				if (dist < min[i][j])
//					min[i][j] = dist;
//			}
//		}
//	}
//
//	return min[n - 1][k];
//}
//
//void process(vector<int>&v, int N, int K) {
//	if (N == K) {
//		cout << 0 << endl;
//	} else {
//		cout << minMoves(v, K) << endl;
//	}
//}
//void process2(vector<int>&arr, int n, int k) {
//	int numberOfRelocations = n - k;
//	int totalDiff = 0;
//	int toMerge = 0;
//	for (int i = 0; i < numberOfRelocations; i++) {
//		int minDiff = INT_MAX;
//		for (int j = 0; j < arr.size() - 1; j++) {
//			if (arr[i] == NULL)
//				continue;
//			for (int l = j + 1; l < arr.size(); l++) {
//				if (arr[j] == NULL)
//					continue;
//				if (minDiff > abs(arr[l] - arr[j])) {
//					toMerge = arr[l] > arr[j] ? j : l;
//					minDiff = abs(arr[l] - arr[j]);
//				}
//			}
//		}
//		totalDiff += minDiff;
//		arr[toMerge] = NULL;
//	}
//	cout << totalDiff << endl;
//}
//int main() {
//	char dp2[100];
//	memset(dp2, '1', 100*sizeof(dp2));
//	for (int i = 0; i < 100; i++) {
//		cout << dp2[i] << " ";
//	}
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	int T;
//	cin >> T;
//	vector<int> v;
//	char tmp[10000];
//	getchar();
//	for (int i = 0; i < T; i++) {
//		v.clear();
//		int N, K;
//		fgets(tmp, 10000, stdin);
//		stringstream sin(tmp);
//		sin >> N >> K;
//		fgets(tmp, 10000, stdin);
//		stringstream sin2(tmp);
//		int j = 0;
//		while (sin2 >> j) {
//			v.push_back(j);
//		}
////		cout << N << " " << K << endl;
////		for (auto x : v) {
////			cout << x << " ";
////		}
////		cout << endl;
////		process2(v, N, K);
//		cout << getMinDistance(v, 0, K) << endl;
//	}
//
//	return 0;
//}
//
