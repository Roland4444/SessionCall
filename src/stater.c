#include "def.h"

int main (int argc, char **argv) {
  void * handle = dlopen("obj/libl.so", RTLD_LAZY);
  if (!handle)
    {
      printf("\n\nERROR!\n\n");
      return 1;
    }

  printf("\n\n\nload sucessfull\n\n\n");
  void__ inc__ = (void__)(dlsym(handle, "inc_i"));
  void__ get__ = (void__)(dlsym(handle, "get_i"));

  if (!inc__)
  {
    printf("\n\nCallinc_i load bad\n\n");
    return 2;
  }

  if (!get__)
  {
    printf("\n\nget__ load bad\n\n");
    return 2;
  }


  int j;
  for (j=0; j<10; j++){
    inc__();
    get__();
  }

  return 0;

 
}
