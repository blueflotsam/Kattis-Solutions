//Cory Haas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    float a, b, c, d, e, f;
    scanf("%f %f %f\n%f %f %f", &a, &b, &c, &d, &e, &f);
    float base=a/d;
    if(b/e<base)
        base=b/e;
    if(c/f<base)
        base=c/f;
    printf("%f %f %f",a-base*d,b-base*e,c-base*f);
}
