// 1720683636000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://www.utbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "blowfish_stub.h"

#pragma GCC visibility push (default)
#define NULL ((void*)0)

unsigned int F_symbolic[10];
unsigned int F(BLOWFISH_CTX * ctx, uInt32 x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&F_symbolic, sizeof(F_symbolic), "F_symbolic");
            for (int it_8_0 = 0; it_8_0 < 10; it_8_0 ++) {
                klee_prefer_cex(F_symbolic, F_symbolic[it_8_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return F_symbolic[cntCall++];
}


void Blowfish_Encrypt(BLOWFISH_CTX * ctx, uInt32 * xl, uInt32 * xr) {
    return;
}


void Blowfish_Decrypt(BLOWFISH_CTX * ctx, uInt32 * xl, uInt32 * xr) {
    return;
}


void Blowfish_Init(BLOWFISH_CTX * ctx, unsigned char * key, int keyLen) {
    return;
}


#pragma GCC visibility pop
