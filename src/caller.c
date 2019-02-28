

#include "def.h"

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
  init__ load_init = (load__)(dlsym(handle, "init"));

  if (!load_call){
    printf("\n\nCall load bad\n\n");
    return 2;
  }

  if (!load_init){
    printf("\ninit load bad\n\n");
    return 2;
  }


  load_call( load_init());

  return 0;
}
