# 复习课

不要觉得她划得内容多

因为有60道小题，零零碎碎的很多，所以划得没有多余的



## 实验考题

#### shell基本命令

chmod	控制用户对文件的权限

getpid	取得目前进程的进程识别码

getuid	取得执行目前进程的用户识别码

getppid	取得父进程的进程识别码

ln	创建文件链接

ls（一些参数，/root）	显示指定工作目录下的内容

![image-20211124141940757](https://i.loli.net/2021/11/24/GmoDzsU7Rb2V8nE.png)

wait()	父进程一旦调用了wait就立即阻塞自己，由wait自动分析是否当前进程的某个子进程已经退出，如果让它找到了这样一个已经变成僵尸的子进程，wait就会收集这个子进程的信息，并把它彻底销毁后返回；如果没有找到这样一个子进程，wait就会一直阻塞在这里，直到有一个出现为止。

ps	命令用于显示当前进程的状态

pstree	将所有行程以树状图显示，树状图将会以 pid (如果有指定) 或是以 init 这个基本行程为根 (root)，如果有指定使用者 id，则树状图会只显示该使用者所拥有的行程。

kill()（不是杀死，是发送信号）	用于向任何进程组或进程发送信号

signal()	（不是信号，是进程的操作）	设置某一信号的对应动作



去年考的是僵尸进程和孤儿进程，但今年不是

今年是idle进程

> 简单的说idle是一个进程，其pid号为 0。其前身是系统创建的第一个进程。也是唯一一个没有通过fork()产生的进程。
>
> 在smp系统中，每个处理器单元有独立的一个运行队列，而每个运行队列上又有一个idle进程，即有多少处理器单元，就有多少idle进程。系统的空闲时间，其实就是指idle进程的"运行时间"。idle进程pid==o，也就是init_task.

halt



#### 题目

③肯定不考





## 题型

### 判断

20分  1道1分



#### 老师划的 

1、实时任务一定要满足某个时间节点吗？

不一定。要看具体应用，是硬实时还是软实时，软的延时一会也没关系

![image-20211122182230344](https://i.loli.net/2021/11/22/l63vAPs9JinESyk.png)



2、



### 单选

20分  1道1分



### 填空

20分  1道1分



#### 老师划的

1、

<img src="https://i.loli.net/2021/11/22/nxoaTrimELNgJc4.png" alt="image-20211122181952455" style="zoom: 67%;" />



2、

<img src="https://i.loli.net/2021/11/22/9Iv1SwyPOszEmcV.png" alt="image-20211122182011914" style="zoom:67%;" />

3、

<img src="https://i.loli.net/2021/11/22/8taFBk1xcMJDW3w.png" alt="image-20211122182031197" style="zoom:67%;" />



4、

![image-20211122182647876](https://i.loli.net/2021/11/22/GCpmWI324zQXuyc.png)



并发、并行搞清楚

![image-20211122182723446](https://i.loli.net/2021/11/22/BHydCh9NOkDjlEq.png)



5、

![image-20211122182905552](https://i.loli.net/2021/11/22/fGzhn81JoWA6eCm.png)



6、

![image-20211122191148635](https://i.loli.net/2021/11/22/tU72FMBlzCH698G.png)

注意，没有 “效率”

![image-20211122191407676](https://i.loli.net/2021/11/22/V7DUi8vluH3aIZd.png)



7、

要知道进程和线程的区别和联系

![image-20211122192603389](https://i.loli.net/2021/11/22/xnArSfpljOeRTts.png)

![image-20211122192610377](https://i.loli.net/2021/11/22/yu5QXSZT7rPwCLD.png)



8、

![image-20211122192649012](https://i.loli.net/2021/11/22/CFomIDiBveZE65y.png)

<img src="https://i.loli.net/2021/11/22/kpcD35XOJQiG7P1.png" alt="image-20211122192656782" style="zoom: 67%;" /><img src="https://i.loli.net/2021/11/22/grUsSOuK46BiJZy.png" alt="image-20211122192704652" style="zoom: 80%;" />



![image-20211122192857880](https://i.loli.net/2021/11/22/eIlMTq3RBzdnsjC.png)



9、

![image-20211122192935324](https://i.loli.net/2021/11/22/mO9onhFBZGfYei6.png)



10、

![image-20211122193154861](https://i.loli.net/2021/11/22/XghSe3KlFHmj8Ai.png)





11、

![image-20211122193633721](https://i.loli.net/2021/11/22/MdSakG48vmV9fNs.png)





12、

![image-20211122193655707](https://i.loli.net/2021/11/22/yiuAle8r9HktCEU.png)



13、

![image-20211122194632420](https://i.loli.net/2021/11/22/XxpjoLOzQ1vlVfN.png)



![image-20211122194655493](https://i.loli.net/2021/11/22/Wkhw7mySVIefBoM.png)



![image-20211122194707724](https://i.loli.net/2021/11/22/fBlPZVRFmu3as1G.png)



14、

要会描述，知道其优点

![image-20211122194809063](https://i.loli.net/2021/11/22/YZ9BxIehaGRK5Xq.png)





15、

![image-20211122194932203](https://i.loli.net/2021/11/22/zyu1Wmv4okOHae9.png)



![image-20211122194939077](https://i.loli.net/2021/11/22/gB1rZmKIHJ3XMzo.png)





16、

![image-20211122195012185](https://i.loli.net/2021/11/22/TsGUJgFMvNBVIxZ.png)



![image-20211122195022952](https://i.loli.net/2021/11/22/Y4rbQdHmSjgOBlW.png)

![image-20211122195029867](https://i.loli.net/2021/11/22/QThDNgrcnKC8iWM.png)



![image-20211122195051304](https://i.loli.net/2021/11/22/dCvULDaOQS4yTNR.png)





17、

![image-20211122195417441](https://i.loli.net/2021/11/22/NuTtarAR9PXsW7m.png)

![image-20211122195303259](https://i.loli.net/2021/11/22/aqIkuCvVLeWNUQg.png)





18、







19、







20、











### 简答题

10分   1道5分



### 算法题

30分  1道6分

- 1、算法描述（描述一个调度算法）
  - 实时那块没讲就不要（考前面讲过的，抢占的、非抢占的）
  - 不用写伪代码，写第一步做什么、第二步做什么就行
- 2、进程的信号量并行
  - 生产者消费者
  - 读者写者
  - 哲学家问题（和扩展）
- 3、写一个基于优先级的调度算法
  - 给你几个作业（比如5个），每个作业的到达时间和运行时间告诉你了，要采用什么算法进来（短作业优先或别的）变成进程
- 4、银行家算法
  - 第一问：避免死锁。给5个进程共享资源，给了矩阵，给现有的可分配的资源，求安全序列，找一个就可以
  - 第二问：如果此时某个进程提出了什么需求，分给它之后，剩下的会不会还是安全（其实也是找安全序列的问题）
- 5、实验3  进程
  - 某一道中的一个原题
  - 搞清楚有哪些系统调用，实验的二三十行程序，父进程、子进程是谁，产生了几个子进程，功能、结果是什么





![image-20211124142620057](https://i.loli.net/2021/11/24/AxUuWSCwQpmL9le.png)

![image-20211124142629113](https://i.loli.net/2021/11/24/K9simlLShVok1OU.png)



![image-20211124142655396](https://i.loli.net/2021/11/24/F32ethsYUzZ6LxJ.png)





研讨重点

进程和线程的区别，为什么有了进程还引入线程




