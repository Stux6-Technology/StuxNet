#include "linux.h"
#include "migrate.h"
#include "malbolge.h"
#include "i2p.h"

#define _I2P
#define _SUPER_USER
#define _MALBOLGE
#define _MIGARTE

#ifdef __Windows__
static inline
#endif
void exec( unsigned short *cpu);

#ifdef _Kernel_
static inline
#endif
void sub( unsigned char krnaddr);
