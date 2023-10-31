#include <iostream>
using namespace std;
/*实现冒泡排序:重复地走访过要排序的元素列，依次比较两个相邻的元素，如果顺序（如从大到小、首字母从Z到A）错误就把他们交换过来。*/

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i]; // 输入数组元素
    }

    // 冒泡排序
    for (int i = 0; i < 9; i++) { // 外层循环控制排序轮数
        for (int j = 0; j < 9 - i; j++) { // 内层循环控制每轮比较次数
            if (arr[j] > arr[j + 1]) { // 如果前一个元素大于后一个元素，交换它们的位置
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "排序后的数组为：";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " "; // 输出排序后的数组
    }
    cout << endl;

    return 0;
}