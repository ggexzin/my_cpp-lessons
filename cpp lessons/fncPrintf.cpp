#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

//int main (){
//printf("teste\n");
//printf("Characters: %s %s %s \n", "ey", "ty", "teste");
//printf("Decimals: %d %ld\n", 1977, 650000L);
//printf("Preceding with blanks: %10d \n",19778111);
//printf("Width trick: %*d \n", 1 ,10);}
    

    



int main(){
    char str [50];
    int i;
    int a;
    system("clear");
    
    printf ("Enter your family name: ");
    scanf ("%79s", str);
    printf ("Enter your age: ");
    scanf ("%d", &i);
    printf ("Mr. %s, %d years old \n", str,i);
    scanf ("%f", &i);
    printf ("Enter a hexadecimal number: ");
    scanf ("%x", &i);
    printf ("You have entered %#x (%d).\n,",i,i);
    return 0;
}
//  scanf = cin;
//  printf = cout;