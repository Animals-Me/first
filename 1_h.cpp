#include&nbsp;&lt;iostream&gt;
using&nbsp;namespace&nbsp;std;
/*实现冒泡排序:重复地走访过要排序的元素列，依次比较两个相邻的元素，如果顺序（如从大到小、首字母从Z到A）错误就把他们交换过来。*/

int&nbsp;main()&nbsp;{
&nbsp;&nbsp;&nbsp;&nbsp;int&nbsp;arr[10];
&nbsp;&nbsp;&nbsp;&nbsp;for&nbsp;(int&nbsp;i&nbsp;=&nbsp;0;&nbsp;i&nbsp;&lt;&nbsp;10;&nbsp;i++)&nbsp;{
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cin&nbsp;&gt;&gt;&nbsp;arr[i];&nbsp;//&nbsp;输入数组元素
&nbsp;&nbsp;&nbsp;&nbsp;}

&nbsp;&nbsp;&nbsp;&nbsp;//&nbsp;冒泡排序
&nbsp;&nbsp;&nbsp;&nbsp;for&nbsp;(int&nbsp;i&nbsp;=&nbsp;0;&nbsp;i&nbsp;&lt;&nbsp;9;&nbsp;i++)&nbsp;{&nbsp;//&nbsp;外层循环控制排序轮数
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;for&nbsp;(int&nbsp;j&nbsp;=&nbsp;0;&nbsp;j&nbsp;&lt;&nbsp;9&nbsp;-&nbsp;i;&nbsp;j++)&nbsp;{&nbsp;//&nbsp;内层循环控制每轮比较次数
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if&nbsp;(arr[j]&nbsp;&gt;&nbsp;arr[j&nbsp;+&nbsp;1])&nbsp;{&nbsp;//&nbsp;如果前一个元素大于后一个元素，交换它们的位置
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int&nbsp;temp&nbsp;=&nbsp;arr[j];
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;arr[j]&nbsp;=&nbsp;arr[j&nbsp;+&nbsp;1];
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;arr[j&nbsp;+&nbsp;1]&nbsp;=&nbsp;temp;
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}
&nbsp;&nbsp;&nbsp;&nbsp;}

&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;"排序后的数组为：";
&nbsp;&nbsp;&nbsp;&nbsp;for&nbsp;(int&nbsp;i&nbsp;=&nbsp;0;&nbsp;i&nbsp;&lt;&nbsp;10;&nbsp;i++)&nbsp;{
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;arr[i]&nbsp;&lt;&lt;&nbsp;"&nbsp;";&nbsp;//&nbsp;输出排序后的数组
&nbsp;&nbsp;&nbsp;&nbsp;}
&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;endl;

&nbsp;&nbsp;&nbsp;&nbsp;return&nbsp;0;
}