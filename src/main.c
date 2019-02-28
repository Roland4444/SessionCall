#include <stdio.h>
#include <stdlib.h>

typedef struct {
  void (*func)(void);
} Class;

Class* ptr;

void func_(){
  printf("\n\n\nCalled succesfull!\n\n");
}
void  init(){
  ptr = (Class*)malloc(sizeof(Class));
  ptr -> func = func_;
}

void call()
{
  ptr->func();
}
int main(void) {
  init();
  call();

}



