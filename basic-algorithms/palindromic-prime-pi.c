#include <math.h>
#define _USE_MATH_DEFINES

unsigned int aux = M_PI * 10;
unsigned int reverse = 0;

while (aux > 0) {
    reverse = reverse * 10 + aux % 10;
    aux = aux / 10;
}

printf("%d, %d", reverse, aux);