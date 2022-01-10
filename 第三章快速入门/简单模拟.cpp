#include<stdio.h>
#include<math.h>
//第三章入门篇

//3n+1猜想
//int main()
//{
//    int n ;
//    int step = 0;
//    scanf("%d",&n);
//    while(n != 1 )
//    {
//    if(n%2==0)
//    {
//       n = n/2;
//       step++;
//    }
//    else
//    {
//        n = ((3 * n )+1)/2;
//        step++;
//    }
//    }
//    printf("%d",step);
//return 0;
//}

//挖掘机(输入输出数据，找出最大数据)
//const int Maxnum = 100010;
//int school[Maxnum]={0};
//int main()
//{
//    int n;
//    int schoolid,score;
//    int Max = -1;
//    int k = 1;
//    scanf("%d",&n);
//    for(int i = 0 ; i < n;i++)
//    {
//        scanf("%d%d",&schoolid,&score);
//        school[schoolid] += score;
//    }
//    for(int i = 1 ; i < Maxnum; i++)
//  {
//        if(school[i]>Max)
//        {
//            k = i;
//            Max = school[i];
//        }
//    }
//    printf("%d %d",k,Max);
//    return 0;
//}

