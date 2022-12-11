#ifndef SQUAREROOT_H_INCLUDED
#define SQUAREROOT_H_INCLUDED
int sqrt(){
//square root variable declaration:
int sqrt,sqrtd,sqrtchce;
//place to ask the user to put anumber:
printf("\nPut a number or 00 to main menu: ");
scanf("%d",sqrt);
//place to display output:
if(sqrtchce==00){
}else{
sqrtd=sqrt*sqrt;
printf("\nSquare root of %d:%d",sqrt,sqrtd);
}
return 0;
}



#endif // SQUAREROOT_H_INCLUDED
