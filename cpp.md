# cpp

## 一些语法错误

### 临时变量不能作为非const的引用参数传递

​	例如：

```c++
void f(int &a)
{
    cout<<a<<endl;
}
void g(const int &b)
{
	cout<<b<<endl;
}
int main()
{
	int a = 1;
    int b = 2;
    f(a+b)//编译出错。
    g(a+b)//编译正确！
}
```

### 字符

​	字符只有一个存储位置。`-1` 不是字符，不能用` char`存储。

## vector

### find()

在vector中查找元素，vector内没有自带find函数。在algorithm中有find函数，具体用法为`find(begin,end,val)`  其中begin和end均为迭代器，返回也是迭代器。

### vector.resize(i)

该成员函数可以用于改变容器的大小。使用在杨辉三角中。

```c++
//输入rownums，输出rownums行的杨辉三角
vector<vector<int> > ans(rownums);
for(int i = 0; i < rownums;i++)
{
	ans[i].resize(i+1);
    ans[i][i] = 1;
    ans[i][0] = 1;
    for(int j = 1;j<i;j++)
    {
		ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
    }
}
return ans;
```

## set/unordered_set

1. set和unordered_set都可以使用` set(val)` 若存在则返回1，否则返回0。
2. 嵌套使用
          1. set可以嵌套，而unordered_set不可以嵌套使用。例如`set<pair<int,int > >` 是正确的用法，但unordered_set不行。

## algorithm

### sort

1. `sort`的使用，除了常规的cmp方式外。还可以用以下表达：`sort(begin,end,[=](参数){(a,b)(return a<b )}) `,该方法主要主要是方便在正在运行的函数内使用其数据。详见力扣1030题。
2. 此外使用如下表达`sort(begin(),end(),[&](参数)(参数){比较方法return});` 这种表达能够在函数内使用哈希表进行自定义比较而[=]不行。

### string

1. `string` 本身还可以作为堆栈使用。因其成员函数有`s.pop_back()、s.push()` 。
1. `to_string(int)`，该函数将整数转化为字符串，在`string`文件中
1. `stoi(s)`，该函数将字符串变为整数，在`string`文件中
1. 使用`getline(cin,str)` 时有**可能不是一行**慎用！

#### string.find()

`string.find(str)`是`string`自带的成员函数。返回值是查找字符串在母串中首字符的位置，若没有找到则返回`string::npos`

例：

```c++
string s1 = "abcd";
string s2 = "a";
s1.find(s2);//输出0；
```

`string.rfind(str)`  从右边开始查找（可用于查找最后一个子串）

例

```c++
string s1 = "abca";
string s2 = "a";
s1.rfind(s2);//输出3
```

`string.find(str,pos)` 从母串的pos位置开始进行查找子串str

例

```c++
string s1 = "abaca";
string s2 = "a";
s1.find(s2,1);//输出2
```

 

## priority_queue<> 优先队列（堆排序）

1. 优先队列用于对pair的排序非常有效果。

   ``` c++
   #include<priority_queue>;
   #include<pair>;
   {
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
   //priority_queue<排序类型，vector<排序类型>，greater<排序类型>/less<排序类型>>；
   //great是小的优先级高，less是大的优先级高！！！！
   pq.push({1,2});
   if(pq.size())//查空
   {
   pq.top();
   pq.pop();
   }
   }
   ```
   
   2. 优先队列的头文件是`#include<queue>`
   3. 在pop时一定要注意检测是否为空！！！！

## 更新日期 2022.3.23

















##    

