#include <stdio.h>
#include <math.h>

int main(void) {
  /* exercicio 1 */
  
  float val;
  printf("****** Desconto de 10%s ******", "%");

  do {
    printf("\nInsira um valor para ser descontado em 10%s: ", "%");
    scanf("%f", &val);
    
    if(val < 0) printf("Insira um valor positivo!\n");
  } while (val < 0);
  
  printf("\nValor com 10%s de desconto: %.2f", "%", val - (val * .1));

  
  /* exercicio 2*/
  
  float b, h;
  printf("\n\n****** Calculo de area de um triangulo ******");
  
  do {
    printf("\nInsira o valor da base: ");
    scanf("%f", &b);
    
    if(b < 0) printf("Insira um valor positivo!\n");
  } while (b < 0);
    
  do {
    printf("Insira o valor da altura: ");
    scanf("%f", &h);
    
    if(h < 0) printf("Insira um valor positivo!\n");
  } while (h < 0);
    
  printf("Area resultante: %.2f", (b * h)/2);

  
  /* exercicio 3 */
  
  float c1, c2;
  printf("\n\n****** Calculo de hipotenusa ******");

  do {
    printf("\nInsira o valor do cateto 1: ");
    scanf("%f", &c1);

    if(c1 < 0) printf("Insira um valor positivo!\n");
  }  while (c1 < 0);

  do {
    printf("Insira o valor do cateto 2: ");
    scanf("%f", &c2);

    if(c2 < 0) printf("Insira um valor positivo!\n");
  } while (c2 < 0);

  printf("Hipotenusa resultante: %f", sqrt(pow(c1, 2) + pow(c2, 2)));

  
  /* exercicio 4 */
  
  float ft;
  printf("\n\n****** Conversao de pes para polegadas, jardas e milhas ******");

  do {
    printf("\nInsira um valor em pes: ");
    scanf("%f", &ft);

    if(ft < 0) printf("Insira um valor positivo");
  } while (ft < 0);

  printf("\npolegada: %f in \njardas: %f yd \nmilhas: %f mi\n", ft * 12, ft/3, ft/(3 * 1760));
}