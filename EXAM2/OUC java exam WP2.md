### Q 1 - Composition represents
A  
![HAS-A](https://github.com/Sslnon/images/blob/main/JavaExam-Questions/1.jpg)
聚合关系（Aggregation）==体现的是A对象可以包含B对象，但B对象不是A对象的组成部分。具体表现为，如果A由B聚合成，表现为A包含有B的全局对象，但是B对象可以不在A创建的时刻创建。  
组合关系(Composition)：A类的构造方法里创建B类的对象，也就是说，当A类的一个对象产生时，B类的对象随之产生，当A类的这个对象消亡时，它所包含的B类的对象也随之消亡。

### Q 2 - What kind of variables a class can consist of?
B  
```java
class human{
  static String name;
  char favoriteAlphabet;
  for(int i =0;i<=10;i++;){
    System.out.print("1");
  }
}
```
name 为类变量
favoriteAlphabet 为实例变量
i 为局部变量

### Q 6 - What is JRE?
C 
JDK 是对java基础环境和相应开发平台标准和工具包的封装（zip）
JRE（Java Runtime Environment，Java运行环境），包含JVM标准实现及Java核心类库。JRE是Java运行环境，并不是一个开发环境，所以没有包含任何开发工具（如编译器和调试器）
### Q 8 - Can be constructor be made final?
B  
不同于方法，构造器不能是abstract, static, final的.  
1. 构造器不是通过继承得到的，所以没有必要把它声明为final的。
2. 同理，一个抽象的构造器将永远不会被实现，所以它也不能声明为abstract的。
3. 构造器总是关联一个对象而被调用，所以把它声明为static是没有意义的。

### Q 9 - Can be constructor be made private?
A  
只有单例模式才把他设成为private.确保外部不能实例化，这样才能保证他是一个实例

### Q 10 - What is static block?
C  
>静态域大家可以理解成事先准备好的公用的东西，但到底哪些人可以用还得类说了算。
### Q 12 - What is function overloading?
D  
具有不同的返回值
### Q 13 - What is function overriding?
B  
当子类需要父类的功能，而功能主体子类有自己特有内容时，可以重写父类中的方法。这样，即沿袭了父类的功能，又定义了子类特有的内容。
### Q 14 - When static binding occurs?
发生在编译期
### Q 15 - Method Overloading is an example of
静态绑定(static binding)
### Q 16 - Static binding uses which information for binding?
数据类型(type)
### Q 19 - What is true about a final class?
D  
fianl class中的方法不能再被重写
### Q 20 - What is NullPointerException?
A  
实际调用的对象不存在时出现空指针异常
### Q 25 - What are Wrapper classes?
A  
是基本数据类型的包装类
