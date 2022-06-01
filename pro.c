#include <stdio.h>
#include <stdlib.h>

  int main(void){

      float  Vin = 0.0,
            Vled = 0.0,
            Iled = 0.0,
            R    = 0.0;
      float N;
      while (N < 10){
        printf(" LED CALC  v1.0 \n\n");
    printf(" Autor: Dev Thiago S Nascimento \n\n ");
    printf("Calculando resistor limitador de corrente \n\n");

    printf(" Digite o valor do Vin (em volts): ");
    scanf("%f", &Vin);
    printf("\n\n");
    printf(" Digite o valor do Vled (em volts): ");
    scanf("%f", &Vled);
    printf("\n\n");
    printf(" Digite o valor do Iled (em Amperes): ");
    scanf("%f", &Iled);
    printf("\n\n");

    R = (Vin-Vled)/Iled;

    printf("Vin = %.2f\n\n", Vin);
    printf("Vled = %.2f\n\n", Vled);
    printf("Iled = %.2f\n\n", Iled);

    printf(" O resistor para o LED tem o valor de %.2f Ohms\n\n", R);


    printf(" LED CALC  v1.0 \n\n");
    printf(" Autor: Dev Thiago S Nascimento \n\n ");
    printf("Calculando resistor limitador de corrente \n\n");

    printf(" Digite o valor do Vin (em volts): ");
    scanf("%f", &Vin);
    printf("\n\n");
    printf(" Digite o valor do Vled (em volts): ");
    scanf("%f", &Vled);
    printf("\n\n");
    printf(" Digite o valor do Iled (em Amperes): ");
    scanf("%f", &Iled);
    printf("\n\n");

    R = (Vin-Vled)/Iled;

    printf("Vin = %.2f\n\n", Vin);
    printf("Vled = %.2f\n\n", Vled);
    printf("Iled = %.2f\n\n", Iled);

    printf(" O resistor para o LED tem o valor de %.2f Ohms\n\n", R);

    printf("\n\n\a");

      }

    system("pause");
    return 0;

    }
