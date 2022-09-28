#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include <malloc.h>




int split(char sd[1000], int n){
    char s [1000] = "0 ";//наша доп строка
    double u[n];
    int i=0;
    strcat(s,sd);
    char *p = strtok(s," -=");// работа с массивом  strtok(s," -");и разделителями' ' и '-'
    while(p != NULL){//вывод всех чисел попорядку
        p = strtok(NULL," -");
        double y = atof(p);
        printf("%s\n", p);
    }
}


int strlen1(char *s){
    char *p = s;
    for (; *p != '\0'; p++);
    return p - s;
}

int main() {
    int n = 0, k =0, i = 1;
    char a[2] = "1";
    double y;
    scanf("%d\n", &n);
    gets(a);


    char s [1000] = "0 ";//наша доп строкаint i=0;
    strcat(s,a);
    char *p = strtok(s," -=");// работа с массивом  strtok(s," -");и разделителями' ' и '-'
    i = 1;
    while(p != NULL){//вывод всех чисел попорядку
        p = strtok(NULL," -");
        y = atof(p);
        i = i + 1;
        if (y <= 8){
            k ++;
            if (k == 5){
                printf("%d", i);
                break;
            }
        }
        else{
            k = 0;
        }
//        printf("%f\n", y);
    }
}