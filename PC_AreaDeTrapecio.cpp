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

   // C�lculo del �rea
   area = ((baseMayor + baseMenor) * altura) / 2;

   // Impresi�n del resultado
   printf("El �rea del trapecio es: %.2f\n", area);

   // Pausa antes de finalizar el programa
   printf("Presione Enter para salir...");
   getchar(); // Consumir el car�cter de nueva l�nea en el b�fer de entrada
   getchar(); // Esperar a que el usuario presione Enter

   return 0;
}
