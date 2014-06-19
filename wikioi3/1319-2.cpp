//#include<stdio.h>
//using namespace std;
//#define N 60000
//long long sum[N];
//long long L;
//long long zx[N], zy[N];
//int top = 0, tail = 0;
//int n;
//int main() {
//	int i, j, k;
//	long long now, next, xl;
//	scanf("%d%lld", &n, &L);
//	L++;
//	for (i = 1; i <= n; i++) {
//		scanf("%lld", &sum[i]);
//		sum[i] += sum[i - 1] + 1;
//	}
//	zx[0] = L;
//	zy[0] = L * L;
//	for (i = 1; i <= n; i++) {
//		xl = sum[i] << 1;
//		now = zy[top] - xl * zx[top];
//		while (top < tail) {
//			next = zy[top + 1] - xl * zx[top + 1];
//			if (next <= now) {
//				now = next;
//				top++;
//			} else
//				break;
//		}
//		now += sum[i] * sum[i];
//		now += (sum[i] + L) * (sum[i] + L);
//		xl = sum[i] + L;
//		double a, b;
//		while (top < tail) {
//			a = (double) (now - zy[tail - 1]) / (double) (xl - zx[tail - 1]);
//			b = (double) (zy[tail] - zy[tail - 1])
//					/ (double) (zx[tail] - zx[tail - 1]);
//			if (b >= a)
//				tail--;
//			else
//				break;
//		}
//		if (top == tail && zy[tail] >= now)
//			tail--;
//		tail++;
//		zx[tail] = xl;
//		zy[tail] = now;
//	}
//	now = zy[tail];
//	now -= (sum[n] + L) * (sum[n] + L);
//	printf("%lld\n", now);
//	return 0;
//}
