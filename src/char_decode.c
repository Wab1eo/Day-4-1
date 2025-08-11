#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("Режим работы: ");
    int a;
    scanf("%d", &a);
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        printf("n/a\n");
        return 0;
    }
    if (a==0){ //Сделать чтобы он работал только с пробелами
        char bomba;
        int c;
        printf("Введите слово?: ");
        while (scanf("%c", &bomba) == 1) {
            c = getchar();
            if (c == ' '){
                printf("%X ", bomba);
            }
            else if (c == '\n'){
                printf("%X ", bomba);
                break;
            }
            else {
                printf("n/a");
                break;
            }
        }
        printf("\n");
        return 0;
    }
    if (a==1){
        int c;
        int bomba;
        printf("Введите слово?: ");
        while (scanf("%X", &bomba) == 1) {
            if (bomba <= 255 && bomba >= 0){

                printf("%c", (char)bomba);
            }
            else {
                printf("n/a\n");
                return 0;
            }
            c = getchar();
            if (c == '\n'){
                break;
            }
        }
        printf("\n");
        return 0;
    }
}