#include "def.h"

int i=0;

void get_i()
{
  printf("\n\n%d\n\n", i);

}

void inc_i()
{
  i++;
}
void func_()
{
  printf("\n\n\nCalled succesfull!\n\n");
}

Class*  init()
{
  Class* ptr = (Class*)malloc(sizeof(Class));
  ptr -> func = func_;
  return ptr;
}

void call(Class* ptr)
{
  ptr->func();
}

int main(void)
{
  call(init());
  call(NULL);
}



