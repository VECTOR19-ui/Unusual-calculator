#ifndef EVENODD_H_INCLUDED
#define EVENODD_H_INCLUDED
int EVENODD(){
int eo;
//Asking the user to put a number to know if a number is even or odd:
printf("Enter a positive number or 00 to main menu: ");
scanf("%d",&eo);
//A place where the given number will be evaluated with bitwise AND and OR:
((eo&1)&& printf("Number is odd\n") ||printf("Number is even\n"));
}


#endif // EVENODD_H_INCLUDED
