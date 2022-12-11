#ifndef FACTORIAL_H_INCLUDED
#define FACTORIAL_H_INCLUDED
//This program finds the product of a whole number by calculating its factorial:
//preprocessing can proceed here as it is necessary:
int factorial(){
int a,b,c=1;
//A place where a user will be asked to put a number to know its factorial:
printf("\nEnter a number to get its factorial: ");
scanf("%d",&a);
//a place where we make a for loop to make the b variable volatile by its value and get its factorial:
for(b=1;b<=a;b++)
    c=c*b;
    //A place where we know that the product of our number:
    printf("Product of %d:%d",a,c);
    return 0;
    //end of factorial operation:
}



#endif // FACTORIAL_H_INCLUDED
