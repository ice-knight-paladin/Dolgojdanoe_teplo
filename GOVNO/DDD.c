#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char sd [1000];//наша пpоизвольная строка
    gets(sd);
    char s [1000] = "0 ";//наша доп строка
    strcat(s,sd);
    char *p = strtok(s," -=");// работа с массивом  strtok(s," -");и разделителями' ' и '-'
    while(p != NULL){//вывод всех чисел попорядку
        p = strtok(NULL," -");
        printf("%s\n",p);
    }
}