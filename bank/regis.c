#include<stdio.h>
#include<string.h>

void regis(){
    char* b[8]={"(1) Enter Name : ","(2) Enter DOB(dd/mm/yy) : ","(3) Enter Today's Date(dd/mm/yy) : ","(4) Enter New A/C No. : ","(5) Enter Password : ","(6) Enter Mobile no. :","(7) Enter Username : ","(8) Enter security Que(Pet Name) : "};
    char* c[8];
    for(int i=0;i<8;i++){
        printf("\n%s",b[i]);
        scanf("%s",&c[i]);
    }

FILE *fp;
struct {
    char name[50];
    char dob[15];
    char date[15];
    int ac,pass,no;
    char sq[15];
} add;


}