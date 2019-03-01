#include <stdio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <string.h>

typedef struct {
  void (*func)(void);
} Class;


typedef void (*load__)(Class*);
typedef Class* (*init__)(void);
typedef void (*void__)(void);

