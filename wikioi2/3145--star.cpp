//#include<stdio.h>
//int f[11];
//int getint()
//{
//	int n;
//	scanf("%d",&n);
//	return n;
//}
//void move(int n,char s,char d,char m)
//{
//	if(n==1)
//		printf("%d from %c to %c\n",n,s,d);
//	else
//	{
//		move(n-1,s,m,d);
//		printf("%d from %c to %c\n",n,s,d);
//		move(n-1,m,d,s);
//	}
//}
//int main()
//{
//    int n=getint();
//    f[1]=1;
//    for(int i=1;i<=n;i++)
//    {
//      f[i]=2*f[i-1]+1;
//    }
//    printf("%d\n",f[n]);
//	move(n,'A','C','B');
//	return 0;
//}
