#include<stdio.h>
#include<String.h>

void login(){
    char* a[2]={"Enter Username : ","Enter Password : "};
    char* b[2];

    for(int i=0;i<2;i++){
        printf("\n%s",a[i]);
        scanf("%s",&b[i]);
    }
}