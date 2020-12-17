# OUC java eaxm 12.17
### Q1 D
正确如下
```java
public static void main(String[] args)
```
### Q2 B
java区分大小写
###### 关键词速查
```java
Java 关键字 速查表
访问控制:
private 私有的
protected 受保护的
public 公共的

类、方法和变量修饰符
abstract 声明抽象
class 类
extends 扩允,继承
final 终极,不可改变的
implements实现
interface 接口
native 本地
new 新,创建
static 静态 
strictfp 严格,精准
synchronized 线程,同步
transient 短暂
volatile 易失

程序控制语句
break 跳出循环
continue 继续
return 返回
do 运行
while 循环
if 如果
else 反之
for 循环
instanceof 实例
switch 开关
case 返回开关里的结果
default 默认

错误处理
catch 处理异常
finally 有没有异常都执行
throw 抛出一个异常对象
throws 声明一个异常可能被抛出
try 捕获异常

包相关
import 引入
package 包

基本类型
boolean 布尔型
byte 字节型
char 字符型
double 双精度,
float 浮点
int 整型
long 长整型
short 短整型
null 空
true 真
false 假

变量引用
super 父类,超类
this 本类
void 无返回值
```
### Q3 A
考察java class的定义
```
类是创建单个对象的蓝图。类可以包含变量域和方法来描述对象的行为。
```
###### 翻译
individual object 单一类
### Q4  A
考察对栈的理解
```
Java中对象的存储位置
1.String aa = new String();
new创建的对象存储在堆内存中；
aa这个局部变量存储在栈内存中；

2.Java中常量的存储位置
常量存放在常量池中，而常量池在堆内存中

3.Java中局部变量的存储位置
局部变量存放在栈内存中

4.Java中全局变量和Static常量的存储位置
存放在全局数据区内存中

5.java中static修饰的成员变量及参数存放位置
存放在代码段内存中
```
### Q5 B
同上
### Q6 B
考察对于静态static的理解
class.function()
### Q7 B
布尔型显然和整型不能比较
### Q8 D
成员变量：定义在类中，方法体之外。
局部变量：定义在方法体，构造方法，语句块中的变量。

局部变量没有初始值
成员变量有，取决于不同的数据类型
### Q9 C
同上
### Q10-17
考察基本数据类型的大小
```
byte：

byte数据类型是8位、有符号的，以二进制补码表示的整数；（256个数字），占1字节
最小值是-128（-2^7）；
最大值是127（2^7-1）；
默认值是0；
byte类型用在大型数组中节约空间，主要代替整数，因为byte变量占用的空间只有int类型的四分之一；
例子：byte a = 100，byte b = -50。
short：

short数据类型是16位、有符号的以二进制补码表示的整数，占2字节
最小值是-32768（-2^15）；
最大值是32767（2^15 - 1）；
Short数据类型也可以像byte那样节省空间。一个short变量是int型变量所占空间的二分之一；
默认值是0；
例子：short s = 1000，short r = -20000。
int：

int数据类型是32位、有符号的以二进制补码表示的整数；占4字节
最小值是-2,147,483,648（-2^31）；
最大值是2,147,485,647（2^31 - 1）；
一般地整型变量默认为int类型；
默认值是0；
例子：int a = 100000, int b = -200000。
long：

long数据类型是64位、有符号的以二进制补码表示的整数；占8字节
最小值是-9,223,372,036,854,775,808（-2^63）；
最大值是9,223,372,036,854,775,807（2^63 -1）；
这种类型主要使用在需要比较大整数的系统上；
默认值是0L；
例子： long a = 100000L，int b = -200000L。
long a=111111111111111111111111(错误，整数型变量默认是int型)

long a=111111111111111111111111L(正确，强制转换)

float：

float数据类型是单精度、32位、符合IEEE 754标准的浮点数；占4字节    -3.4*E38- 3.4*E38。。。浮点数是有舍入误差的
float在储存大型浮点数组的时候可节省内存空间；
默认值是0.0f；
浮点数不能用来表示精确的值，如货币；
例子：float f1 = 234.5f。
float f=6.26(错误  浮点数默认类型是double类型)
float f=6.26F（转换正确，强制）
double d=4.55(正确)
double：

double数据类型是双精度、64位、符合IEEE 754标准的浮点数；
浮点数的默认类型为double类型；
double类型同样不能表示精确的值，如货币；
默认值是0.0d；
例子：double d1 = 123.4。
boolean：

boolean数据类型表示一位的信息；
只有两个取值：true和false；
这种类型只作为一种标志来记录true/false情况；
默认值是false；
例子：boolean one = true。
char：

char类型是一个单一的16位Unicode字符；用 ‘’表示一个字符。。java 内部使用Unicode字符集。。他有一些转义字符  ，2字节
最小值是’\u0000’（即为0）；
最大值是’\uffff’（即为65,535）；可以当整数来用，它的每一个字符都对应一个数字
```
### Q18 A
空文件也是
### Q19 A
public class只有一个
其他随便
### Q20 B
###  Q21-BQ7
考察对默认值的理解
```
成员变量的默认值
byte:0
short:0
int :0
long: 0L
float: 0.0f
double: 0.0d
char:\u0000（空， "）
boolean: false
String：null
Object：null
```
### BQ8-BQ12
考察访问修饰符
```
作用域    当前类  同一package  子孙类  其他package

public        √         √         √        √

protected     √         √         √        ×

friendly      √         √         ×        ×

private       √         ×         ×        ×
```
### BQ13 C
String是不可变的
String并不是基本数据类型
它是一个类
### BQ14 B
同上
###  BQ15 B
多态性的定义
```
多态性是对象具有多种形式的能力。,可对这些不同的类型进行同样的处理。
```
###  BQ16 B
继承的定义
```
继承是一个对象获得另一个对象属性的过程。
```
### BQ17 C
抽象的定义
```
它指的是在OOP中使类抽象的能力。
```
###  BQ18 C
封装的定义
```
封装是一种将类中的字段设为私有并提供访问的技术通过公共方法的字段。
```
###  BQ19 C
接口的定义
它弥补了java中单继承的缺陷
```
接口是一个具体的类。
```
### BQ20 B
final class
```
不可变对象一旦创建就不能被更改。
```
###  BQ21 A
局部变量的定义 local variable
```
在方法、构造函数或块中定义的变量称为局部变量
```
###  BQ22 C
实例变量的定义 instance variable
```
变量是类内部但在任何方法外部的变量。
```
###  BQ23 A
类变量
```
static variable
```
### BQ24 B
构造函数不是默认的
###  BQ23 B
接口时HAS-A关系
```
is-a 是继承关系。在继承关系中，一个子类继承于父类，其本身可以称之为父类。例如：狗继承于动物，可以说狗是一种动物。
has-a 是组成关系，在组成关系中，一个对象将一个或者多个其它对象作为自己的成员。
```