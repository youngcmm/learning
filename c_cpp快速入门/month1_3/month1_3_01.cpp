
#include<stdio.h>
typedef long long LL;
int main()
{
    //2.2顺序结构
    //2.2.2scanf\prtintf,在输入scanf中除了char数组不加&，其他都要加&。
//    int hh,mm,ss;
//    int a ;
//    double b;
//    char c;
//    scanf("%d:%d:%d",&hh,&mm,&ss);
//    scanf("%d,%f,%c",&a,&b,&c);

    //!!!scanf 除了%c以外，其他格式符的输入以空白符（即空格和换行）为结束标志。
    //%s读入时以空格和换行为读入的结束标志。
//    char str[10];
//    scanf("%s",str);//输入abcd efg输出abcd
//    printf("%s",str);
    //scanf可以读入空格和换行！！！
//    int a ;
//    char c,str[10];
//    scanf("%d%c%s",&a,&c,str);
//    printf("a=%d,c=%c,str=%s",a,c,str);//输入1 a bcd，输出a=1,c= ,str=a
    //2.2.2printf在使用时对应的格式，仅double与scanf有差异
    //！！！！！！！scanf中double是%lf而在printf中是%f。
//    printf("%%\n\\");//输出%和反斜杠
    //%md以m位向右对齐
    //%0md向右对齐前面补0
    //%.mf浮点数保留m位小数
    //2.2.3getchar,putchar
    //getchar识别换行！！
//    char c1,c2,c3;
//    c1 = getchar();
//    getchar();//只是调用了getchar但是没有存储在任何变量中
//    c2 = getchar();
//    c3 = getchar();
//    putchar(c1);
//    putchar(c2);
//    putchar(c3);
    //2.2.5typedef 起别名
//    LL a = 123456789LL, b = 234567890LL;
//    printf("%lld",a+b);
    //2.2.6常用数学函数
    //fabs(double x) 对double取绝对值
    //floor(double x),ceil(double x )，向上向下取整，返回类型是double。
    //pow(double r ,double p); r的p次方。
    //sqrt(),算术平方根。
    //log(double x )；自然对数为底数的对数。对任意数求对数，用换底公式，logab=logeb/logea;
    //sin,cos,tan,asin,acos,atan
    //round(doublex),将double型四舍五入。zzz

    return 0;
}
