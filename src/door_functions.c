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
    for (int i = 0; i < 42; i++){
        x = pi*(-1)+((pi+pi)/41)*i;
        b = verzera(x);
        c = lemniscat(x);
        d = giperbola(x);
        printf("%.7f |", x);
        if (b==b){
            printf(" %.7f |", b);
        }
        else {
            printf(" - |");
        }
        if (c==c){
            printf(" %.7f |", c);
        }
        else {
            printf(" - |");
        }
        if (d==d){
            printf(" %.7f\n", d);
        }
        else {
            printf(" -\n");
        }
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