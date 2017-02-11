//
// Created by 张一鸣 on 2017/2/11.
//

#include <iostream>
#include "UseGeneraterFunctionToAdd.h"


class addfunction {
  static int N;
  static int sum;
 public:
  addfunction(){sum+=++N;}
  static void reset() { N = sum = 0;}
  static int getSum() { return sum;}
};

int addfunction::N = 0;
int addfunction::sum = 0;

void PROJECT_USEGENERATERFUNCTIONTOADD_H::useGeneraterFunctionToAdd() {
  addfunction::reset ();
  addfunction *p = new addfunction[10];
  std::cout << "use generate function to add from 1 to 10 : " << addfunction::getSum ();
  delete  []p;
}