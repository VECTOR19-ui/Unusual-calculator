#ifndef CEILFLOOR_H_INCLUDED
#define CEILFLOOR_H_INCLUDED
int ceilfloor(){
int cfchoice;
printf("Enter your choice below\n");
printf("\n1,Ceil\n");
printf("\n2,Floor\n");
printf("Put your choice here: ");
scanf("%d",&cfchoice);
switch(cfchoice){
case 1:
    system("cls");
    printf("Put number: ");
    float cnum;
    scanf("%f",&cnum);
    printf("%f ceil is %f\n",ceil(cnum));
    break;
case 2:
    printf("Put number here: ");
    float fnum;
    scanf("%f",&fnum);
    printf("%f floor is %f\n",fnum,floor(fnum));
    break;
default:
    printf("Try again");
    break;
    }
    return 0;
}


#endif // CEILFLOOR_H_INCLUDED
