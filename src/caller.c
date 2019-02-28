#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <string.h>


typedef void (*load__)(void);

int main()
{
  void * handle = dlopen("obj/libl.so", RTLD_LAZY);
  if (!handle)
    {
      printf("\n\nERROR!\n\n");
      return 1;
    }

  printf("\n\n\nload sucessfull\n\n\n");
  load__ load_call = (load__)(dlsym(handle, "call"));
  load__ load_init = (load__)(dlsym(handle, "init"));

  if (!load_call){
    printf("\n\nCall load bad\n\n");
    return 2;
  }

  if (!load_init){
    printf("\n\iinit load bad\n\n");
    return 2;
  }

  load_init();
  load_call();

  return 0;
}
