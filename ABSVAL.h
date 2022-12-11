#ifndef ABSVAL_H_INCLUDED
#define ABSVAL_H_INCLUDED
int absval(){
    int anum;
//asking user to put number to get absolute value:
printf("Put your number here or 00 to main menu: ");
scanf("%d",&anum);
printf("Abs value is %d\n",abs(anum));
return 0;
}


#endif // ABSVAL_H_INCLUDED
