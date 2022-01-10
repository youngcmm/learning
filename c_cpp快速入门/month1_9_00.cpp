#include<stdio.h>
#include<string.h>
#include<math.h>
    //2.5.3二维数组，如果二维数组较大建议将其定义在主函数外，否则会使程序异常退出。
int main()
{
    //2.5.4memset对数组中每一个元赋相同值。谨慎使用，最好只用赋值全0或全-1。该操作是按字节从处理。
//    int a[5]={1,2,3,4,5};
//    memset(a,-1,sizeof(a));//sizeof(a)的结果是20。而不是5.
//    for(int i = 0 ;i < 5;i++)
//    {
//        printf("%d\n",a[i]);
//    }
    //2.5.5字符数组。二维字符数组就是字符串数组。！！！p50
        //1、字符数组仅在初始化时可以用字符串初始化。
//    char a[15] = "Good story!";
//    for(int i=0 ;i<11 ; i++)
//    printf("%c",a[i])
        //2、字符串输入输出scanf、printf、getchar、putchar、gets识别换行符、puts
        //3、注意字符数组长度是实际字符长度加1因为，有1位是结束位\0！！！！！！
        //注意如果使用getchar输入字符数组一定要在字符数组结束加上\0，gets和、scanf的%s格式则不用！！！！！！！！！！
    //2.5.6string.h头文件
    //  1)strlen()
    //  2)strcmp()
    //  3)strcpy()
    //  4)strcat()
    //2.5.7sscanf与sprintf在stdio.h头文件下！！！！！！！！！！！！！这两个函数非常重要
//    int n;
//    double db;
//    char str[100]="2048:3.14,hello", str2[100],str3[100];
//    sscanf(str,"%d:%lf,%s",&n,&db,str2);
//    sprintf(str3,"%d:%.2lf,%s",n,db,str2);
//    puts(str3);
//2.6函数。
//2.7指针。
    //2.7.2指针变量
    //2.7.3指针与数组，两个指针变量相减的结果是两个存放变量的地址差了多少个类型大小的单位。
    //2.7.4使用指针变量作为函数参数。
    //2.7.5引用&,,,,,,常量不可以引用。
    //2.7.6指针的引用
//2.8结构体
    //2.8.2访问结构体的方式，
        //1、指针访问可以采用
            //1)(*p).xx
            //2)p->xx
        //2、直接访问stu.xx
//2.9补充
    //cin、cout在头文件#include<iostream>再加上using namespace std
    //getline函数！！！！！。 读入一整行。char a[100];cin.getline(str,100);
    //如果是容器则，string str; getline(str,100);.
    //一般还是使用scanf和printf除非是string。
    //2.9.2浮点数的比较
//    const double eqs = 1e-8;
//    #define EQU(a,b) (fabs((a)-(b)) < (eqs))等于
//    #define MORE(a,b) (((a)-(b)) > (eqs))大于
//    #define LESS(a,b) (((a)-(b)) < (-eqs))
//    #define MOREQU(a,b)(((a)-(b)) > (-eqs))
//    #define LESSEQU(a,b) (((a)-(b)) < (eqs))
//    const double pi = acos(-1.0);
    //2.9.3复杂度
//2.10黑盒测试
    return 0;

}
