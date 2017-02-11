//
// Created by 张一鸣 on 2017/2/11.
//

#include "UseFunctionPointerToAdd.h"
#include <iostream>
typedef int (*function)(int);
int func1(int n) {
  return 0;
}

int func3(int n1,int n2) {
  return n1 + n2;
}

int func2(int n) {
  function f[2] = {func1 ,func2 };
  // !!n 是将N 从数字转化为0或1
  return n+f[!!n](n-1);
}


void PROJECT_USEFUNCTIONPOINTERTOADD_H::useFuncionpointerToAdd ()
{
  std::cout<<"add for 1 to 10 is :"<<func2 (10)<<std::endl;
};