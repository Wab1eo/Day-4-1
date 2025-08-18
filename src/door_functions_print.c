#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double verzera(double x);
double lemniscat(double x);
double giperbola(double x);

int main() {
    double x;
    double b;
    double c;
    double d;
    double pi = 3.14159265358979323846;
    printf("График функции Верзьера Аньези\n");
    for (int i = 0; i < 42; i++){
        printf("===");
    }
    printf("\n");
    for (int i = 0; i < 42; i++){
        x = pi*(-1)+((pi+pi)/41)*i;
        b = verzera(x);
        int pos1 = (int)(b*21);
        for (int z = 0; z < pos1; z++) printf(" ");
        printf("*\n");
    }
    printf("График функции Лемниската Бернулли\n");
    for (int i = 0; i < 42; i++){
        printf("===");
    }
    printf("\n");
    for (int i = 0; i < 42; i++){
        x = pi*(-1)+((pi+pi)/41)*i;
        c = lemniscat(x);
        int pos2 = (int)(c*21);
        for (int z = 0; z < pos2; z++) printf(" ");
        printf("*\n");
    }
    printf("График функции Квадратичной гиперболы\n");
    for (int i = 0; i < 42; i++){
        printf("===");
    }
    printf("\n");
    for (int i = 0; i < 42; i++){
        x = pi*(-1)+((pi+pi)/41)*i;
        d = giperbola(x);
        int pos3 = (int)(d);
        for (int z = 0; z < pos3; z++) printf(" ");
        printf("*\n");
    }
}

double verzera(double x){
    return pow(1, 3)/(pow(1, 2)+pow(x, 2));
}

double lemniscat(double x){
    return sqrt(sqrt(pow(1, 4)+4*pow(x, 2)*pow(1, 2))-pow(x, 2)-pow(1, 2));
}

double giperbola(double x){
    return 1/pow(x, 2);
}