// CYP04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
int main() {
    double LimIni, Incremento, LimFin;
    double ResultExp, valoresdey;
    int Factorial;
    int Auxfactorial;

    scanf_s("%lf %lf %lf", &LimIni, &LimFin, &Incremento);

    valoresdey = LimIni;
    Factorial = (LimFin - LimIni) / Incremento;

    if (LimIni == 0 && LimFin == 0 && Incremento == 0) {
        printf("0.000000 1.000000 1.000000");
    }

    //for para imprimir los dtaos
    for (int i = 0; i <= Factorial; i++) {
        ResultExp = 0;
        //sumatoria
        for (int Agustin = Factorial; Agustin != -1; Agustin--) {
            Auxfactorial = 1;
            //factorial
            for (int j = Agustin; j != 0; j--) { //10
                Auxfactorial *= j; //1*10*9*8*7*6*1
            }
            Auxfactorial += (Auxfactorial == 0) ? 1 : 0; //if(Auxfactorial == 0){Auxfactorial = 0;}
            ResultExp += (pow(valoresdey, Agustin)) / Auxfactorial;
        }
        printf("%f %f %f\n", valoresdey, ResultExp, exp(valoresdey));
        valoresdey += Incremento;
    }
}