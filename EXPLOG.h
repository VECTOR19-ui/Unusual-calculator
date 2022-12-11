#ifndef EXPLOG_H_INCLUDED
#define EXPLOG_H_INCLUDED
int explog(){
double lenum,result,lenumtm;
int leop;
//Asking the user to choose operation from exp to log:
printf("Choose your operation below");
printf("\n1,Find log\n");
printf("\n2,Find exp\n");
printf("\nPut choice here: ");
scanf("%d",&leop);
    switch(leop){
case 1:
    printf("Put number to find its log: ");
    scanf("%d",&lenum);
    result=log(lenum);
    printf("log(%.1f)=%.2f",lenum,result);
    break;
case 2:
    printf("Put base number: ");
    scanf("%d",lenum);
    printf("Put sets of times for the number to multiplied: ");
    scanf("%d",&lenumtm);
    result=exp(lenum*lenumtm);
    printf("Its exponent is:%d",result);
    break;
default:
    printf("Try again");
    break;
    }
    return 0;
}


#endif // EXPLOG_H_INCLUDED
