#include <iostream>
#include "./AddFromOneToN/AddFromOneToN.h"
#include <stdio.h>

void printFunctionList() {
  FILE *fp;
  char ch;
  fp=fopen("/Users/zhangyiming/code/oneAlgorithmPerDay/project/functionlist.txt","r");
  if(fp==NULL)
    printf("can not open!\n");
  else
    {
      fscanf(fp,"%c",&ch);
      while(!feof(fp))
        {
          putchar(ch);
          fscanf(fp,"%c",&ch);
        }
      fclose(fp);
    }
  printf("\n");
};

int main ()
{


  printFunctionList ();
//  std::cout << func2 (10);
  char * functionNumber;

  std::cout<<"please input the function number:";
  std::cin>>functionNumber;

  int funN = std::atoi (functionNumber);


  switch (funN)  {
      case 1:
        {
          PROJECT_USEFUNCTIONPOINTERTOADD_H::useFuncionpointerToAdd() ;
          break;
        }
      case 2:
        {
          PROJECT_USEGENERATERFUNCTIONTOADD_H::useGeneraterFunctionToAdd ();
          break;
        }
      case 3:
        {
          PROJECT_USEABSTRACTFUNCTIONTOADD_H::useAbstractFunctionToAdd ();
          break;
        }
    }



  return 0;
}

