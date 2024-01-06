/*CREATE A PROGRAM THAT TAKES AN INTEGER NUMBER,AN FLOAT NUMBER AND A DOUBLE NUMBER.THEN SUM THOSE NUMBER AND PRINT THE ANSWER
*/
/* CREATOR NAME:IFTAMAM MORTAZA RAFI */

//LETS START :)

#include <stdio.h>
int main (){
    int num2;
    float num1;
    double num3;
    float sum;

    //INPUT THE FLOAT FORMATE NUMBER
    printf("PLEASE ENTER A FLOAT NUMBER: ");
    scanf("%f",&num1);

    //INPUT THE INTEGER FORMATE NUMBER
    printf("PLEASE ENTER An INTEGER NUMBER: ");
    scanf("%d",&num2);

    //INPUT THE DOUBLE FORMATE NUMBER
    printf("PLEASE ENTER A DOUBLE NUMBER: ");
    scanf("%lf",&num3);

    //CALCULATION OF SUM
    sum = num2+num1+num3;

    //PRINTING THE RESULT OF SUMATION
    printf("THE SUM IS: %f",sum);

    getch();
    return 0;

}


