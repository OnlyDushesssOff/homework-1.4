#include <stdio.h>
#include <locale.h>


 int main(){
   setlocale(LC_ALL, "Russian");

   int V1 = 10, V2 = 15, T = 7, S = 20;
   printf("Скорость первого автомобиля = %d\n", V1);
   printf("Скорость второго автомобиля = %d\n", V2);
   printf("Время движения = %d\n", T);
   printf("Начальное расстояние = %d\n", S);
   printf("Конечное расстояние = %d\n", S + (V1+V2)*T);

    return 0;
 }