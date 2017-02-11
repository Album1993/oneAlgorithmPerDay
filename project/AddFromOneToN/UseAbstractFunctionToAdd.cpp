//
// Created by 张一鸣 on 2017/2/11.
//

#include <iostream>
#include "UseAbstractFunctionToAdd.h"

class AddFunction{
 public:
  virtual int sum(int n){
    return 0;
  }
};

class AddFunction_B:public AddFunction {
 public:
  int sum(int n) {
    AddFunction a;
    AddFunction_B b;
    AddFunction  *p[2] = { &a, &b};
    return n+p[!!(n-1)]->sum (n-1);
  }
};

void PROJECT_USEABSTRACTFUNCTIONTOADD_H::useAbstractFunctionToAdd() {
  AddFunction_B b;
  std::cout<< "use abstract function to add from 0 to 10 : " << b.sum (10) << std::endl;
}