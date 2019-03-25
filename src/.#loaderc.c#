
#include "def.h"
int main (int argc, char **argv) {
  
  void * handle = dlopen("libnosess.so", RTLD_LAZY);
  if (!handle)
    {
      printf("\n\nERROR!\n\n");
      return 1;
    }
  lets_check ls = (lets_check)(dlsym(handle,"lets_check"));
  
  for (int i=1; i<argc; i++)
    ls(argv[i]);
  return 0;
}
