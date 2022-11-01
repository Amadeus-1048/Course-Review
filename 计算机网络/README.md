

https://www.yuque.com/docs/share/a0aff20d-44da-46c6-a65a-67e69dd0c6f3?# 《基于cch的计网复习》划了上次考点

题型：判断 选择 填空 计算题



# 复习课

## 拍照

![image-20211112165113528](https://i.loli.net/2021/11/12/G9qRWSMPDAYlamp.png)





![image-20211112165138913](https://i.loli.net/2021/11/12/reiU5aTWqNChZkd.png)

![image-20211112165155055](https://i.loli.net/2021/11/12/uelNoHOhgarJTCb.png)

![image-20211112165209031](https://i.loli.net/2021/11/12/Eoag4HPZklFU1Wd.png)

![image-20211112165218449](https://i.loli.net/2021/11/12/8xV94DPicJUwlpB.png)





![image-20211112165305331](https://i.loli.net/2021/11/12/UMg3fzlw7xvFQbc.png)





## 中英文

| 英文缩写                         | 英文全称                                               | 中文                         |
| -------------------------------- | ------------------------------------------------------ | ---------------------------- |
| TDM                              | Time Division Multiplexing                             | 时分复用                     |
| CDMA                             | Code Division Multiple Access                          | 码分多址                     |
| <font color='red'>CSMA/CD</font> | Carrier Sense Multiple Access with Collision Detection | 载波监听 多点接入 / 碰撞检测 |
| <font color='red'>MAC </font>    | Medium Access Control                                  | 媒体接入控制                 |
| RTT                              | Round Trip Time                                        | 往返时间                     |
| <font color='red'>ARP</font>     | Address Resolution Protocol                            | 地址解析协议                 |
| IP                               | Internet Protocol                                      | 网际协议                     |
| ICMP                             | Internet Control Message Protocol                      | 网际控制报文协议             |
| <font color='red'>TCP</font>     | Transmission Control Protocol                          | 传输控制协议                 |
| UDP                              | User Datagram Protocol                                 | 用户数据报协议               |
| RIP                              | Routing Information Protocol                           | 路由信息协议                 |
| BGP                              | Border Gateway Protocol                                | 边界网关协议                 |
| OSPF                             | Open Shortest Path First                               | 开放最短路径优先             |
| <font color='red'>VLAN</font>    | Virtual Local Area Network                             | 虚拟局域网                   |
| DNS                              | Domain Name System                                     | 域名系统                     |





# 知识点

语雀知识点链接：https://www.yuque.com/docs/share/a0aff20d-44da-46c6-a65a-67e69dd0c6f3?#

## 物理层

### 奈氏

![image-20211117121720179](https://i.loli.net/2021/11/17/4a3TWmZ1r6CvYuk.png)

### 香农

![image-20211117121739482](https://i.loli.net/2021/11/17/brEPjRqx96ocLT7.png)



### 编码

![image-20211117124934247](https://i.loli.net/2021/11/17/hC84jeXASUcg3zq.png)



## 数据链路层

### 字符填充法

7D->7D 5D
7E->7D 5E

https://blog.csdn.net/skyxmstar/article/details/69564494

https://zhidao.baidu.com/question/406715875.html



### 奇偶校验

结论：奇偶校验只能检测出奇数个比特错

原因：在数据中有偶数位改变时，接收方所计算的校验码仍然与发送方一致，这种校验方式不能检测偶数位的误码。



### 循环冗余CRC

![image-20211117122537561](https://i.loli.net/2021/11/17/IXNYCrnEwqbjSR5.png)



![image-20211117122549377](https://i.loli.net/2021/11/17/3SN9U1RKFBZjXsD.png)



### 海明码

如果要检测出d个比特的错，则编码集的海明距离至少为d+1。

如果要纠正 d个比特的错，则编码集的海明距离至少应为2d+1



### 海明码计算

偶校验：有偶数个1时，校验位为0

![image-20211112233719257](https://i.loli.net/2021/11/12/AJs56Zc2dKxz3hl.png)



## 网络层

### IP地址分类

IP地址分类（A类 B类 C类 D类 E类）

https://blog.csdn.net/kzadmxz/article/details/73658168





## 传输层

### 拥塞控制

![image-20211117130025761](https://i.loli.net/2021/11/17/tA4QhKyoMV5Lejw.png)





# 试卷

不要问哪来的，怎么没有题目，只有答案

看一遍，记住题型，<font color='red'>**你不会后悔**</font>

## 判断

1、



2、



3、

SMTP（发送邮件）
SMTP( Simple Mail Transfer Protocol,简单邮件传输协议)是一种提供可靠且有效的电子邮件传输的协议。
SMTP是建立在FTP文件传输服务上的一种邮件服务,主要用于系统之间的邮件信息传递,并提供有关来信的通知。SMTP独立于特定的传输子系统,并且只需要可靠有序的数据流信道支持,其重要特性之一是能跨越网络传输邮件,即“SMTP邮件中继”。使用SMTP可实现相同网络处理进程之间的邮件传输,也可通过中继器或网关实现某处理进程与其他网络之间的邮件传输。
SMTP在传输层使用的是TCP,其默认访问的端口号是25。
POP3（接收邮件）
POP( Post Office Protocol Version3,邮局协议)也是一种应用层协议。它由RFC1939定义,主要用于支持使用客户端远程管理在服务器上的电子邮件,提供了SSL加密的POP3被称为POP3S。
POP支持“离线”邮件处理,其具体过程是,将邮件发送到服务器上,电子邮件客户端调用邮件客户机程序以连接服务器,并下载所有未阅读的电子邮件。这种离线访问模式是一种存储转发服务,将邮件从邮件服务器端发送到个人终端机器上(PC或MAC)。一旦邮件发送到PC或MAC上,邮件服务器中的邮件将会被删除。但POP3邮件服务器大都可以“只下载邮件,服务器端并不删除”
POP3在传输层使用的协议是TCP,默认访问的邮件服务器端口是110。



4、

![image-20211115214225235](https://i.loli.net/2021/11/15/SotT6Kbmwc3M5Gd.png)



5、

交换机和路由器下的都是不平分带宽的，都是独享带宽的，所以答案就是每个端口都是100Mb/s的带宽，即每个站都是100Mb/s



6、

不论是TCP/IP还是在OSI参考模型中，任意相邻两层的下层为服务提供者，上层为服务调用者



7、

填充(Padding)：填充字段，全0，**因IP报文头长度单位为32bit(4Byte,)，所以报文长度必须为32bit的整数倍**

https://www.cnblogs.com/dream397/p/13745373.html



8、





## 选择







10、

中继器的功能太简单，不可能避免广播信息过多引起的广播风暴

网桥、交换机都只工作在数据链路层，且均工作在同一个局域网内，广播针对数据链路层，因为局域网内的所有信息都是广播信息，当广播信息过多，这两种设备无法及时转发时，便会产生广播风暴

路由器在收到分组后进行匹配发送的指定的网络，不会产生广播风暴，产生了问题也不叫广播风暴，是拥塞





## 计算题

### 1、经典公式

![image-20211117142620823](https://i.loli.net/2021/11/17/w7RjIXLKSrdbzAf.png)

（1）

<img src="https://i.loli.net/2021/11/15/rbgCTESRVfmKNOa.png" alt="image-20211115234907741" style="zoom:50%;" />

（2）

![image-20211115224516058](https://i.loli.net/2021/11/15/pZHBhTfd5jcIFvO.png)

![image-20211117121827199](https://i.loli.net/2021/11/17/WGAZ9svtRXhrP4V.png)



### 2、CDMA 通信

![image-20211117142633556](https://i.loli.net/2021/11/17/MYhlVOgikfIS9Wd.png)

<img src="https://i.loli.net/2021/11/15/VKx4dHWZBe6upR7.png" alt="image-20211115234743241" style="zoom:50%;" />





![image-20211117121918451](https://i.loli.net/2021/11/17/yQGVcpFfMlHT8ju.png)



### 3、CRC 编码

![image-20211117142641242](https://i.loli.net/2021/11/17/sKN93VpG8SJYjW7.png)

<img src="https://i.loli.net/2021/11/15/jQMdxzNI3f9smF6.png" alt="image-20211115234816506" style="zoom:67%;" />





3-5 要发送的数据为1101011011。采用CRC的生成多项式是P(x)=x4+x+1 。试求应添加在数据后面的余数。　　

（1）数据在传输过程中最后一个1变成了0，问接收端能否发现？　　

（2）若数据在传输过程中最后两个1都变成了0，问接收端能否发现？　

（3）采用CRC检验后，数据链路层的传输是否就变成了可靠传输

> （1）检验序列的求法：1101011011为被除数，P(x)转化为二进制10011为除数，得到余数1110为检验序列
>
> ​		当在传输过程中最后一个1变成了0，则被除数变为11010110101110，P(x)转化为二进制10011为除数，余数R为0011没有被除尽，所以可以被接收端发现
>
> （2）数据在传输过程中最后两个1都变成了0，11010110001110除以10011，余数为101，不为0，接收端可以发现差错。
>
> （3）不可以，所谓“可靠传输”就是：数据链路层的发送端发送什么，在接收端就收到什么（按序，无差错、无丢失、无重复）。这就是收到的帧并没有出现比特差错，但却出现了帧丢失、帧重复或帧失序。CRC检验能够实现无比特差错的传输，但这不是可靠的传输。

 

![image-20211117122132075](https://i.loli.net/2021/11/17/I4a9pZxMeqlWbBw.png)



### 4、路由表

![image-20211117142654024](https://i.loli.net/2021/11/17/HTW19t7CVQRfLjK.png)

![image-20211115234833162](https://i.loli.net/2021/11/15/kdxyu8jmQP4ChqF.png)



![image-20211117124613882](https://i.loli.net/2021/11/17/6ZLDR1pHwMdJVaK.png)







## 图表题

### 1、编码：曼彻斯特

![image-20211117142705839](https://i.loli.net/2021/11/17/eXn8BbHKh6yplvW.png)

![image-20211117124849965](https://i.loli.net/2021/11/17/7LbgJlaGQicKsT2.png)



### 2、路由表

![image-20211117142716762](https://i.loli.net/2021/11/17/Aode8ViWganjSG9.png)

<img src="https://i.loli.net/2021/11/15/vrOukIcQ4DWFHoY.png" alt="image-20211115235045561" style="zoom:67%;" />

![image-20211117125223499](https://i.loli.net/2021/11/17/BfQdl6ZpszSOgUJ.png)

![image-20211117125235038](https://i.loli.net/2021/11/17/qIgSbNZEM1UQmvo.png)



### 3、TCP 的拥塞窗口

![image-20211117142728126](https://i.loli.net/2021/11/17/4GHgCKEWQNaePdw.png)



<img src="https://i.loli.net/2021/11/15/oamrRI4MTZuJCpL.png" alt="image-20211115235053663" style="zoom:50%;" />

![image-20211117130113233](https://i.loli.net/2021/11/17/ak9i7UdyhCcFslH.png)

![image-20211117130124644](https://i.loli.net/2021/11/17/Z9e8DtgohLEuRN7.png)



### 4、网桥的转发表

![image-20211117142741787](https://i.loli.net/2021/11/17/Ke8inOXomgYvtVc.png)

![image-20211117131242378](https://i.loli.net/2021/11/17/x291NHpFCtjfiLI.png)



## 综合题

### 1、IP地址

![image-20211117142748982](https://i.loli.net/2021/11/17/5MHxLWqtyYdwRBk.png)



某单位分配到一个B类IP地址，其net-id为129.250.0.0.该单位有4000台机器，分布在16个不同的地点。如选用子网掩码为255.255.255.0，试给每一个地点分配一个子网掩码号，并算出每个地点主机号码的最小值和最大值。

> 4000/16=250  ，平均每个地点250台机器。如选255.255.255.0为掩码，则每个网络所连主机数=28-2=254>250，共有子网数=28-2=254>16，能满足实际需求。
>
>   可给每个地点分配如下子网号码
>
>   地点：  子网号（  subnet-id  ）  子网网络号  主机  IP  的最小值和最大值
>
>   1  ：    00000001      129.250.1.0      129.250.1.1---129.250.1.254 
>
>   2  ：   00000010      129.250.2.0  129.250.2.1---129.250.2.254
>
>   3  ：   00000011      129.250.3.0  129.250.3.1---129.250.3.254
>
>   4  ：   00000100      129.250.4.0  129.250.4.1---129.250.4.254
>
>   5  ：   00000101      129.250.5.0  129.250.5.1---129.250.5.254
>
>   6  ：   00000110      129.250.6.0  129.250.6.1---129.250.6.254
>
>   7  ：   00000111      129.250.7.0  129.250.7.1---129.250.7.254
>
>   8  ：   00001000      129.250.8.0  129.250.8.1---129.250.8.254
>
>   9  ：   00001001      129.250.9.0  129.250.9.1---129.250.9.254
>
>   10  ：   00001010      129.250.10.0  129.250.10.1---129.250.10.254
>
>   11  ：   00001011      129.250.11.0  129.250.11.1---129.250.11.254
>
>   12  ：   00001100      129.250.12.0  129.250.12.1---129.250.12.254
>
>   13  ：   00001101      129.250.13.0  129.250.13.1---129.250.13.254
>
>   14  ：   00001110      129.250.14.0  129.250.14.1---129.250.14.254
>
>   15  ：   00001111      129.250.15.0  129.250.15.1---129.250.15.254
>
>   16  ：   00010000      129.250.16.0  129.250.16.1---129.250.16.254





![img](https://iknow-pic.cdn.bcebos.com/00e93901213fb80ea8e3ca943bd12f2eb9389447)





### 2、局域网

![image-20211117142759190](https://i.loli.net/2021/11/17/Nq5rYKTxp8PEGDX.png)

<img src="https://img-blog.csdnimg.cn/20211012095244966.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzUxMzQ0MzM0,size_16,color_FFFFFF,t_70" alt="在这里插入图片描述" style="zoom: 33%;" />

![image-20211117140233502](https://i.loli.net/2021/11/17/47uV5izmtFNlnXr.png)

![image-20211117140228167](https://i.loli.net/2021/11/17/eu6cnhsYaPAHOdQ.png)
