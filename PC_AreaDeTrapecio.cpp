#include <stdio.h>

int main() {
   float baseMayor, baseMenor, altura, area;

   // Ingreso de valores
   printf("Ingrese la base mayor del trapecio: ");
   scanf("%f", &baseMayor);
   printf("Ingrese la base menor del trapecio: ");
   scanf("%f", &baseMenor);
   printf("Ingrese la altura del trapecio: ");
   scanf("%f", &altura);

   // Cálculo del área
   area = ((baseMayor + baseMenor) * altura) / 2;

   // Impresión del resultado
   printf("El área del trapecio es: %.2f\n", area);

   // Pausa antes de finalizar el programa
   printf("Presione Enter para salir...");
   getchar(); // Consumir el carácter de nueva línea en el búfer de entrada
   getchar(); // Esperar a que el usuario presione Enter

   return 0;
}
