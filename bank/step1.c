#include<stdio.h>
#include<string.h>

char step1(char b){
     char* a[3]={"(1) register","(2) Login","(3) forget password"};

    for(int i=0;i<3;i++){
        printf("%s \n",a[i]);
    }
    printf("\n\n   Enter choice: ");

    scanf("%c",&b);

    return b;
}