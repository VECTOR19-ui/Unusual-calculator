#ifndef ARITHMETIC_H_INCLUDED
#define ARITHMETIC_H_INCLUDED
int arithmetic(){
    int arithchce,avar,svar,mvar,dvar;
float op1,op2;
float quotient;
float answer;
ARITHMAIN:
printf("\nChoose calculation below\n");
printf("\n1,Addition\n");
printf("\n2,Subtraction\n");
printf("\n3,Multiplication\n");
printf("\n4,Division\n");
printf("\n\tChoose: ");
scanf("%d",&arithchce);
switch(arithchce){
case 1:
    system("cls");
   printf("Put two operands for addition: ");
   scanf("%f%f",&op1,&op2);
   answer=op1+op2;
   printf("Sum=%f\n",answer);
    break;
case 2:
    system("cls");
    printf("Put two operands to subtract: ");
    scanf("%f%f",&op1,&op2);
    answer=op1-op2;
    printf("Difference=%f",answer);
    break;
case 3:
    system("cls");
    printf("Put two operands to multiply: ");
    scanf("%f%f",&op1,&op2);
    answer=op1*op2;
    printf("Multiplication:%f",answer);
    break;
case 4:
    system("cls");
    printf("Put two numbers to divide: ");
    scanf("%f%f",&op1,&op2);
    answer=op1/op2;
    printf("Division:%f",answer);
    break;
default:
    system("cls");
    goto ARITHMAIN;
    break;
    }
}


#endif // ARITHMETIC_H_INCLUDED

