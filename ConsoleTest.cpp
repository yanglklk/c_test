// ConsoleTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Caculater.h"

using namespace std;

int main()
{
   cout << "Hello World!\n";
   Caculater C;
   double x=0, y=0;
   char oper;
   cin >> x >> oper >> y;
   double res = C.caculate(x, oper, y);
   cout << res;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误

