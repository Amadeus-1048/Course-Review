软工我考的不是很好，下面大概可以不用看

正常是线下闭卷考试。





# 各种图

软件工程各种图的画法(考试必备)	https://wenku.baidu.com/view/d58de81b011ca300a7c39036.html

软工里的那些图	https://www.kancloud.cn/digest/software-engineer/146359

【精讲】软件工程用图的各个阶段及其应用（详细）系统流程图、数据流图、数据字典、ER图、状态转换图、层次方框图、Warnier图、IPO图、层次图、HIPO图、结构图、程序流程图、盒图等	https://blog.csdn.net/qq_36167052/article/details/105321258



## 数据流图

https://blog.csdn.net/Shaft_/article/details/79727065	（讲的很好）

https://blog.csdn.net/ya0017230/article/details/88576487	（补充一下）

[软件工程中的交换流和事务流](https://blog.csdn.net/weixin_55267022/article/details/118075201)



### 总结

只要顶、0、1层

也不会要全画，会给一些东西

不要想太复杂，把关键的东西写出来



### 画法

顶层：找名词（系统）

1层：找动作，对中间进行分解，再思考动作的来源





## NS图 / 盒图

### 基本

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200405120723727.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MTY3MDUy,size_16,color_FFFFFF,t_70#pic_center)



![image-20220225165532911](https://s2.loli.net/2022/02/25/sR9QtOVAJbEkdfH.png)





## PAD图

### 基本

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200405120903449.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MTY3MDUy,size_16,color_FFFFFF,t_70#pic_center)

### 例子

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200405121249998.gif#pic_center)



## 判定表

判定表、判定树也叫决策表、决策树



### 例子

![在这里插入图片描述](https://img-blog.csdnimg.cn/2020040512573361.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MTY3MDUy,size_16,color_FFFFFF,t_70#pic_center)





### 画法

条件：相对的一对条件只取1种



### 考点

语句覆盖



## 判定树

例子

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200405144658343.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MTY3MDUy,size_16,color_FFFFFF,t_70#pic_center)



## 用例图

https://blog.csdn.net/mj_ww/article/details/53020080

https://blog.csdn.net/weixin_42369687/article/details/90106419

[图书管理系统-需求分析及用例图、状态图、数据流图](https://blog.csdn.net/icebns/article/details/103601969)

https://www.it610.com/article/1279638449405575168.htm



## 白盒测试

https://blog.csdn.net/write6/article/details/78702977

https://blog.csdn.net/qq_41431406/article/details/99320982



## 黑盒测试

https://blog.csdn.net/weixin_44997802/article/details/109352327



### 考点

等价划分（等价分类法）	P172





## 类图

https://blog.csdn.net/ibukikonoha/article/details/80643959



## 状态图

https://blog.csdn.net/cold___play/article/details/102770382

https://blog.csdn.net/litianxiang_kaola/article/details/53945997



从一个状态到另一个状态之间的连线称为转移（Transition）。状态之间的过渡事件（Event）对应对象的动作或活动（Action）。事件有可能在特定的条件下发生，在UML中这样的条件称为守护条件（Guard Condition），发生的事件可通过对象的动作（Action）进行处理。状态之间的转移可带有标注，由三部分组成（每一部分都可省略），其语法为：**事件名 [条件] / 动作名**



