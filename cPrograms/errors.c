/**This Code was obtained from http://www.cs.otago.ac.nz/cosc326/Support/absrel.htm**/
//errors.c
/**
AUTHOR : http://www.cs.otago.ac.nz/cosc326/Support/absrel.htm
DESCRIPTION : This program shows how to calculate absolute and relative error.
**/

#include <float.h>
#include <math.h>
#include <stdio.h>

static float abserr(float derived, float correct) {
    return fabsf(derived - correct);
}

static float relerr(float derived, float correct) {
    return fabsf((derived - correct)/correct);
}

static void show(char const *label, float derived, float correct) {
    printf("%s  %.1e  %.1e\n", label,
        abserr(derived, correct), relerr(derived, correct));
}

int main(void) {
    union { float f; unsigned u; } pun;
    float const m = powf(2.0f, -24);

    printf("          absolute relative\naround    error    error\n");

    pun.f = FLT_MIN;
    pun.u++;
    show("FLT_MIN+", pun.f, FLT_MIN);

    pun.f = m;
    pun.u++;
    show("6.0e-8+ ", pun.f, m);

    pun.f = 1.0f;
    pun.u--;
    show("1.0-    ", pun.f, 1.0f);

    pun.f = 1.0f;
    pun.u++;
    show("1.0+    ", pun.f, 1.0f);

    pun.f = 1.0f/m;
    pun.u--;
    show("1.7e+7- ", pun.f, 1.0f/m);

    pun.f = FLT_MAX;
    pun.u--;
    show("FLT_MAX-", pun.f, FLT_MAX);

    return 0;
}
