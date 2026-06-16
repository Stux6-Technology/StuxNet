#include <UUN29.h>
#include <malbolge.h>
#include <migrate.h>
#include <linux>

#define _Super_User
#define _i2p_migarate
#define _MALBOLGE

#ifdef __HURD__
static inline 
#endif
void exec( unsigned short *mem);

#ifdef __HURD__
static inline
#endif

unsigned char Malbolge_dgr[64];
unsigned char Malbolge_room[0];
unsigned _uint16_t Room_mal[7]; 

/* 
 *   0 0 0 0 0 0 1
 *   0 0 0 0 0 1 0 
 *   0 0 0 0 1 0 0
 *   0 0 0 1 0 0 0 
 *   0 0 1 0 0 0 0  
 *   0 1 0 0 0 0 0 
 *   1 0 0 0 0 0 0 
 * 
 * unsigned _uint16_t Room_mal[7]; 
 * mal = Malbolge Code (.mal, .mb)
 * p^n^2 * n^2 / 7 = 7 (Room out)
 */

const char xlat1[] =
  "+b(29e*j1VMEKLyC})8&m#~W>qxdRp0wkrUo[D7,XTcA\"lI"
  ".v%{gJh4G\\-=O@5`_3i<?Z';FNQuY]szf$!BS/|t:Pn6^Ha";

const char xlat2[] =
  "5z]&gqtyfr$(we4{WP)H-Zn,[%\\3dL+Q;>U!pJS72FhOA1C"
  "B6v^=I_0/8|jsb9m<.TVac`uY*MK'X~xDl}REokN:#?G\"i@";
   
void 

 