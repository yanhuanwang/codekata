//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//char tmp[1000];
//char str[9];
//int used[9];
//
//int main()
//{
//    int i, j, k;
//    int n;
//    char c;
//    scanf("%d\n+", &n);
//    n--;
//    for(i = 0; i < n; i++)
//	{
//        scanf(" %c", &c);
//        str[i] = c;
//    }
//    for(i = 0; i < n; i++)
//	{
//        scanf("\n%c", &c);
//        for(j = 0; j < n; j++)
//		{
//            scanf(" %s", tmp);
//            if(strlen(tmp) == 1)
//			{
//                for(k = 0; k < n; k++)
//				{
//                    if(str[k] == tmp[0])
//					{
//                        used[k]++;
//                        break;
//                    }
//                }
//            }
//        }
//    }
//    for(i = 0; i < n; i++)
//	{
//        printf("%c=%d ", str[i], used[i] - 1);
//    }
//    printf("\n%d", n);
//    return 0;
//}
