# 数字图像处理概述

## 一、什么是图像

Ⅰ、图像的定义： 二维函数f(x,y)
       注：①x,y是空间坐标；②f(x,y)中f是点（x,y）的幅值。

<img src="https://i.loli.net/2021/11/10/5MxQGs28nyfYTSo.png" alt="img" style="zoom: 50%;" />

Ⅱ、灰度图像是一个二维灰度（或亮度）函数f(x,y)
       注：把白色与黑色之间按对数关系分为若干等级，称为灰度。
              灰度分为256阶（灰度值为0—255），用灰度表示的图像称作灰度图；
              灰度图像与黑白图像不同，在计算机图像领域中黑白图像只有黑白两种颜色，灰度图像在黑色与白色之间还有许多级的颜色深度。

Ⅲ、彩色图像由三个（如RGB,HSV）二维灰度（或亮度）函数f(x,y)组成
       注：①RGB：RGB即是代表红（R）、绿（G）、蓝（B）三个通道的颜色
                             其余各式各样的颜色均是通过对红绿蓝三个颜色通道的变化以及它们相互之间的叠加来得到的；
              ②HSV：这个模型中颜色的参数分别是：色调（H），饱和度（S），明度（V）。
                             具体而言，色调（H）用角度度量，取值范围为0°～360°。
                                               饱和度（S）表示颜色接近光谱色的程度。饱和度值愈高，颜色越深而艳。
                                               明度（V）表示颜色明亮的程度，此值和物体的透射比或反射比有关。
                                                                通常取值范围为0%（黑）到100%（白）。

## 二、什么是数字图像

Ⅰ、数字图像的定义：像素组成的二维排列，可以用矩阵表示。

Ⅱ 、对于单色（灰度）图像而言，每个像素的亮度用一个数值来表示
        通常数值范围在0到255之间，0表示黑、255表示白
        其它值表示处于黑白之间的灰度。

Ⅲ、彩色图像可以用红、绿、蓝三元组的二维矩阵来表示。
       通常，三元组的每个数值也是在0到255之间
                  0表示相应的基色在该像素中没有
                  255代表相应的基色在该像素中取得最大值

事实上，视频的处理也属于数字图像处理的一部分，只是视频处理总像素点的数量级是非常大的。
这里给一个概念：1s的视频可分成25张图像，通常来讲每张图像大小256*256，那么25张是多少、1分钟的视频呢？1小时的视频呢？这就可想而知它的大小了，于是做数字图像处理，对设备的要求还是比较高的。

## 三、数字图像处理的起源

最早应用的行业——媒体（报纸业）

最早应用的时间——20世纪20年代（1921年）

最早“数字图像处理”系统的用途——通过海底电缆，将图像从伦敦传输至纽约。客观的讲，当时的应用并不涉及“数字图像处理”，而是“数字图像传输”。

最早“数字图像处理”系统的特性——系统名称：“巴特兰”（Bartlane），早期的“巴特兰”系统使用5个不同的灰度级来编码图像， 到了1929年这一能力已经扩展到15级。
                            

计算机图像处理技术的历史可以追溯到1946年第一台电子计算机的诞生。

在上世纪70年代，数字图像处理技术有了长足发展

到上世纪80年代，出现了3D图像和分析处理3D图像的系统

进入上世纪90年代，图像处理技术已逐步涉及人类生活和社会发展的各个方面

进入21世纪，数字图像处理技术必将得到进一步发展

## 四、数字图像处理领域的实例

★传统领域
☆医学、空间应用、地理学、生物学、军事……
★最新领域
☆数码相机(DC)、数码摄像机(DV)
☆指纹识别、人脸识别
☆互联网、视频、多媒体等
☆基于内容的图像检索、视频检索、多媒体检索
☆水印、游戏、电影特技、虚拟现实、电子商务等

数字图像处理的应用无处不在

## 五、数字图像处理的基本步骤

![img](https://img-blog.csdnimg.cn/20200413135732489.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

## 六、图像处理系统的基本组成结构

![img](https://img-blog.csdnimg.cn/20200413135701155.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

主要由三大部分组成：
①图像数字化设备：包括数码相机、数码摄像机、带照相和/或摄像功能的手机等。
②图像处理设备：包括计算机和存储系统。
③图像输出设备：包括打印机，也可以输出到Internet上的其它设备。

## 七、图像存储系统

![img](https://img-blog.csdnimg.cn/20200413140920395.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

★图像文件格式体系
☆互联网用：GIF、JPG
☆印 刷 用：TIF、JPG、TAG 、PCX（国际标准：TIF、JPG、BMP）
☆图像存储体系：分级存储 
☆内存存储：处理时使用 
☆硬盘存储：处理、备份时用（在线） 
☆备份存储：光盘、磁带（离线、近线）
☆网络存储：SAN、 NAS



# 图像的采样和量化

## 一、数字图像的像素表示

像素的概念：数字图像由二维元素组成，每一个元素具有一个特定的位置（x,y）和幅值f(x,y),这些元素就称为像素。

![img](https://i.loli.net/2021/11/10/7TN5ZJjr8XP9Y14.png)

##  二、图像的采样和量化

★大多数传感器的输出是连续电压波形

★为了产生一幅数字图像，需要把连续的 感知数据转化为数字形式

★这包括两种处理：采样和量化

![img](https://i.loli.net/2021/11/10/hVeRpSOEvZKFa4P.png)

★图像的采样和量化
   ★图像的采样        

      图像空间坐标的数字化    
      用数字表示位置（点的坐标）
      空间坐标(x,y)的数字化   
      采样对应空间分辨率          

![img](https://i.loli.net/2021/11/10/5WR7tvuzmLrVA93.png)

   ★图像的量化      

      图像函数值（灰度值）的数字化     
      用数字表示颜色  （点的像素值）        
      函数取值的数字（如：量化到256个灰度级）
      量化对应灰度分辨率

![img](https://i.loli.net/2021/11/10/6b7LnZfNEwmd3WS.png)

★非统一的图像的采样
在灰度级变化尖锐的区域，用细腻的采样，在灰度级比较平滑的区域，用粗糙的采样。

![img](https://i.loli.net/2021/11/10/XSIKopaRMACWvOT.png)

☆在边界附近使用较少的灰度级。剩余的灰度级可用于灰度级变化比较平滑的区域。

☆避免或减少由于量化的太粗糙，在灰度级变化比较平滑的区域出现假轮廓的现象。

非统一的图像的采样更符合实际情况

## 三、数字图像表示：三种方法

![img](https://img-blog.csdnimg.cn/20200413160340695.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

![img](https://img-blog.csdnimg.cn/20200413160253405.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

# 空间分辨率和灰度分辨率、等偏爱曲线

## 一、空间分辨率

直观上看，空间分辨率是图像中可辨别的最小细节的度量。

与数字图像处理学习笔记（二）——图像的采样和量化一文中的图像采样相结合，采样对应空间分辨率。

空间分辨率度量：①每单位距离线对数；②每单位距离点数（像素数）；
在美国，空间分辨率度量用每英寸点数（dpi）来表示（后续文章dpi值用字母N表示）。

空间分辨率越大，图片效果越好。

降低空间分辨率

注：为了便于比较，所有的小图像都放大到了原图像的大小。
       图像（b）300dpi是书籍印刷所用的最小分辨率。
       我们发现，随着dpi数值的减小，图像效果越来越差（因为每英寸容纳的信息点数越来越小）

但是这里要申明一点：降低空间分辨率并不一定导致图像知变小。但是从信息量的角度讲，M*N大小的图像道包含了MN个值来表示信息，降低图像的空间分辨率以后，图像的信息量也降低了，这个时候必然不需要MN个值来表示图像版的信息，所以当我们要求节约空间的时候，是可以把图像变小的。

由于图像内容的相关性，一般的M*N大小的图像都不需要MN个值来表示，所以我们有很多图像压缩算法在保真的情况下，可以极大的压缩图像数据量。

## 二、灰度分辨率

直观上看，灰度分辨率是指在灰度级中可分辨的最小变化。

与数字图像处理学习笔记（二）——图像的采样和量化一文中的图像量化相结合，量化对应灰度分辨率。

灰度分辨率表示：常用2的整数次幂（即2^k^）表示（最通常是8比特，即2^8^=256）

降低灰度分辨率

![img](https://img-blog.csdnimg.cn/20200413170043769.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)


注：保持样本数恒定，将灰度级以2的整数次幂从256减小到2（k值从8减小到1）；
        伪轮廓是指出现明显的类似于等高线的不连续过渡带，从而对于画面感观质量造成影响的现象（头盖骨处明显）；
        伪轮廓通常是在以16（k值为4）或更少级数的均匀设置的灰度级显示的图像中十分明显。

## 三、等偏爱曲线

引入原因：本文上述降低空间分辨率（N值减小）、降低灰度分辨率（k值减小）中只是分别讨论了改变N和k值时对图像质量产生的影响（仅部分地回答了改变N和k值是如何影响图像的问题），那么N和k值同时改变对图像影响又是如何的呢？这时引入等偏爱曲线就很好地回答了上述问题。

等偏爱曲线简单的讲就是随着k和N值的变化，人为主观感受到的图像的质量用一条曲线汇总的结果。

![img](https://img-blog.csdnimg.cn/20200413172158905.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

注： 左侧三幅图像从左至右细节程度依次增大
        Nk平面中每一点表示一幅图像（该图像的N值和k值等于该点的坐标）
        理解等偏爱曲线可类比地理中的等高线来理解（实质一样）
        等偏爱曲线趋向于向右上方移动（越靠右上方意味着越大的N值和k值，图像质量越好，人们越喜欢）
        当图像中细节增加时，等偏爱曲线变得更加垂直（对于有大量细节的图像，可能只需要较少的灰度级（人群））
        k值减小倾向于对比度[最大像素值/最小像素值]增加，人们通常感受到图像质量改善了视觉效果

# 数字图像的内插、度量、表示与质量

## 一、数字图像的内插

内插是在诸如放大、收缩、旋转和几何校正等任务中广泛应用的基本工具
从根本上看，内插是用已知数据来 估计未知位置的数值的处理
实现图像内插的方法有三种： 最近邻内插法、双线性内插法、双三次内插法 

<font color='cornflowerblue'>最近邻内插法</font>
理解：在原图像中寻找最接近的像素，并把该像素的灰度赋给加想要创建大小的网格中的新像素
           当我们完成对网格中覆盖的所有点的灰度赋值后，就把图像扩展到原来规定的大小，得到放大后的图像
           本方法不常用是因为会产生不希望的人为缺陷的倾向（如某些直边缘的严重失真）

<font color='cornflowerblue'>双线性内插法</font>
赋于点（x,y）灰度值公式：v(x,y)=ax+by+cxy+d

注：与该方法名称相反的是，双线性内插不是一种线性内插方法，因为其中包含有xy项
       4个系数可由4个用（x,y）点最近邻点写出的未知方程确定（四个未知数四个方程）
       双线性内插法给出了比最近邻内插好得多的结果，但随之而来的是计算量的增加

<font color='cornflowerblue'>双三次内插法</font>
<font color='red'>赋于点（x,y）灰度值公式：v(x,y)=</font>  ![\small {\color{Red} \sum_{i=0}^{3}\sum_{i=0}^{3}a_{ij}x^{i}y^{j}}](https://private.codecogs.com/gif.latex?%5Cdpi%7B100%7D%20%5Cfn_jvn%20%5Csmall%20%7B%5Ccolor%7BRed%7D%20%5Csum_%7Bi%3D0%7D%5E%7B3%7D%5Csum_%7Bi%3D0%7D%5E%7B3%7Da_%7Bij%7Dx%5E%7Bi%7Dy%5E%7Bj%7D%7D)
注：双三次内插包括16个最近邻点
       16个系数可由16个用（x,y）点最近邻点写出的未知方程式确定
        如果求和的上下限为1和0时，那么就变成了双线性内插v(x,y)=ax+by+cxy+d公式的形式
        通常，双三次内插在保持细节方面比双线性内插相对较好，但其计算量非常大
        双三次内插是商业图像编辑程序的标准内插方法

![img](https://img-blog.csdnimg.cn/20200413185345873.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

## 二、数字图像的度量

关于数字图像的度量，有**欧氏距离、曼哈顿距离、切比雪夫**距离之分

对于坐标分别为（x,y）,（s,t）,（v,w）的像素p，q，z

<font color='cornflowerblue'>欧几里得（欧式）距离</font>

公式：![{\color{Red} }D_{c}(p,q)=[(x-s)^{2}+(y-t)^{2}]^{\frac{1}{2{\color{Red} }}}{\color{Red} }](https://private.codecogs.com/gif.latex?%5Cfn_jvn%20%7B%5Ccolor%7BRed%7D%20%7DD_%7Bc%7D%28p%2Cq%29%3D%5B%28x-s%29%5E%7B2%7D&plus;%28y-t%29%5E%7B2%7D%5D%5E%7B%5Cfrac%7B1%7D%7B2%7B%5Ccolor%7BRed%7D%20%7D%7D%7D%7B%5Ccolor%7BRed%7D%20%7D)

注：距点（x,y）的距离小于等于某个值r的像素是中心在（x,y）且半径为r的圆平面

<font color='cornflowerblue'>D~4~距离 （又称城市街区、曼哈顿）</font>

公式：![D_{4}(p,q)=|x-s|+|y-t|](https://private.codecogs.com/gif.latex?%5Cdpi%7B120%7D%20%5Cfn_jvn%20D_%7B4%7D%28p%2Cq%29%3D%7Cx-s%7C&plus;%7Cy-t%7C)

**注**：距点（x,y）的距离小于等于某个值r的像素形成一个中心在（x,y）的菱形
    例如距中心点（x,y）的距离小于等于2的像素，形成固定距离的如右图轮廓：<img src="https://img-blog.csdnimg.cn/20200413191918571.png" alt="img" style="zoom:50%;" />

​    其中![\small {\color{Green} }D_{4}](https://private.codecogs.com/gif.latex?%5Cdpi%7B100%7D%20%5Cfn_jvn%20%5Csmall%20%7B%5Ccolor%7BGreen%7D%20%7DD_%7B4%7D)=1的像素是（x,y）的4领域。

<font color='cornflowerblue'>D~8~（又称切比雪夫、棋盘）距离</font>

公式：![\small D_{8}(p,q)=max(|x-s|,|y-t|)](https://private.codecogs.com/gif.latex?%5Cdpi%7B120%7D%20%5Cfn_jvn%20%5Csmall%20D_%7B8%7D%28p%2Cq%29%3Dmax%28%7Cx-s%7C%2C%7Cy-t%7C%29)

**注**：距点（x,y）的距离小于等于某个值r的像素形成一个中心在（x,y）的方形

​    例如距中心点（x,y）的距离小于等于2的像素，形成固定距离的如右图轮廓：<img src="https://img-blog.csdnimg.cn/20200413192405883.png" alt="img" style="zoom:50%;" />

​    其中![\small {\color{Green} }D_{4}](https://private.codecogs.com/gif.latex?%5Cdpi%7B100%7D%20%5Cfn_jvn%20%5Csmall%20%7B%5Ccolor%7BGreen%7D%20%7DD_%7B4%7D)=1的像素是（x,y）的8领域。

## 三、数字图像的表示

★二维离散亮度函数——f(x,y)

**☞注**：x，y说明图像像素的空间坐标
    函数值 f 代表了在点(x,y)处像素的灰度值

★二维矩阵——A[m,n]

**☞注**：m , n说明图像的宽和高。
    矩阵元素a(i，j)的值，表示图像在第 i 行，第 j 列的像素的灰度值（i,j表示几何位置）

★图像描述信息

**☞**如图像高度和宽度等信息

★图像数据
☞顺序存放的连续数据

★BMP格式

![img](https://img-blog.csdnimg.cn/20200413193219835.png)


☞1.位图文件头

☞ 2.位图信息头

☞ 3.调色板
       注：有些位图不需要调色板，如真彩色图，它们的后面直接是位图数据

☞4.图像数据
       注：1字节=8位
              对于2色位图，1位表示一个像素颜色（2=2^1^）， 所以一个字节表示8个像素
              对于16色位图，4位表示一个像素颜色（16=2^4^）， 所以一个字节表示2个像素
              对于256色位图，8位表示一个像素颜色（256=2^8^），所以1个字节表示1个像素
              对于真彩色图，3个字节表示一个像素（因为真彩图有R、G、B三个通道）



## 四、数字图像的质量

★灰度级
表示像素明暗程度的整数量
    例如：像素的取值范围为0-255，就称该图像为256个灰度级的图像

★层次
表示图像实际拥有的灰度级的数量
    例如：具有32种不同取值的图像，可称该图像具有32个层次
图像数据的实际层次越多，视觉效果就越好

![img](https://img-blog.csdnimg.cn/20200413194118252.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)

★对比度

**指一幅图像中灰度反差的大小** 

**对比度 = 最大亮度 / 最小亮度（即最大像素值/最小像素值）**

**★清晰度**

**与清晰度相关的主要因素：**亮度、对比度、尺寸大小、细微层次、颜色饱和度

![img](https://img-blog.csdnimg.cn/20200413195130243.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0lUX2NoYXJnZQ==,size_16,color_FFFFFF,t_70)