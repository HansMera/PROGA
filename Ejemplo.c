#include <stdio.h>

int main() {
  float x=0, y=0, z=0, r=0, u=0;
  printf(" Este código tiene como objetivo servir de Calculadora para el usuario, por favor digita 1 para empezar 0 digita cero si quieres terminar el programa\n");
  scanf("%f", &u);
  while (u==1)
  {
  printf ("que quieres hacer?: Multiplicar(1), sumar(2), restar(3), dividir(4)\n ");
  printf ("ingrese el número de la acción que quieres realizar\n");
  scanf ("%f", &z);
  printf ("ingrese el primer número\n");
  scanf("%f", &x);
  printf ("ingrese el segundo número\n");
  scanf("%f", &y);
  if (z==1){
    r=x*y;
    printf("tu resultado de multiplicar es: %.2f\n", r);
  }
  if (z==2){
    r=x+y;
    printf("tu resultado de sumar es: %.2f\n");
  }
  if (z==3){
      r=x-y;
      printf("tu resultado de restar es: %.2f\n", r);
  }
  if (z==4){
    r=x/y;
    printf("tu resultado de dividir es: %.2f\n", r);
  }
    printf("si quieres volver a empezar digita 1, si quieres terminar digita 0");
    scanf("%f", &u);
  }
  if (u==0){
    printf("gracias por usar el programa");
  }
  return 0;
}
