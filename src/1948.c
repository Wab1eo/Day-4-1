#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int delen(int a, int b);
int prostodel(int a, int b);
int procentdel(int a, int b);
int maxdelen(int a, int b);

int main(){
    printf("Введите число для поиска наибольшего простого делителя этого числа: ");
    int a;
    char c;
    scanf("%d%c", &a, &c);
    if (c != '\n') {
        printf("n/a\n");
        return 0;
    }
    int b = maxdelen(a,b);
    if (maxdelen(a,b)==-1){
        printf("n/a\n");
    }
    if (maxdelen(a,b)>=1){
        printf("%d - наибольший простой делитель!\n", maxdelen(a, b));
    }
};

int delen(int a, int b) {
    int number = 0;
    if (b == 0){
        return 43564776;
        number = 0;
    }
    bool aaa = true;
    if(a < 0 && b > 0){
        aaa = false;
        a = a*(-1);
    }
    if(a > 0 && b < 0){
        aaa = false;
        b = b*(-1);
    }
    while (abs(a) >= b)
    {
        a = a-b;
        number++;
    }
    if (aaa == false){
        number = number*(-1);
    }
    return number;
};


int procentdel(int a, int b){
    int absa = abs(a);
    int absb = abs(b);
    if (absb == 0){
        return 56564543;
    }
    while (absa > 0) {
        absa = absa-absb;
    }
    return absa == 0;
}

int prostodel(int a, int b){
    if (b>1){
        for (int i = 2; i<b; i++){
            if (procentdel(b, i)==1){
                return 0;
            }
        }
    }
    return 1;
}

int maxdelen(int a, int b) {
    for (int b = abs(a); b>=1; b--){
        if(procentdel(a, b)==1 && prostodel(a, b)){
            return b;
        }
    }
    return -1;
}

