#include "def.h"

void func_(){
  printf("\n\n\nCalled succesfull!\n\n");
}
Class*  init(){
  Class* ptr = (Class*)malloc(sizeof(Class));
  ptr -> func = func_;
  return ptr;
}

void call(Class* ptr)
{
  ptr->func();
}

int main(void) {
  call(init());
  call(NULL);
}



