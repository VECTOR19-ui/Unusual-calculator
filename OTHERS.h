#ifndef OTHERS_H_INCLUDED
#define OTHERS_H_INCLUDED
int others(){
    float BMI,kg,m,Gr,n,t,pr,c;
    int othchce;
//This program carries out different remaining calculation formulas like BMI and simillar to it for now hello world:
printf("\n1,BMI\n");
printf("\n2,Growth rate\n");
printf("\n3.Annual percentage rate\n");
printf("Choose: ");
scanf("%d",&othchce);
switch(othchce){
case 1:
    printf("Put weight in kg: ");
    scanf("%f",&kg);
    printf("Put height in m: ");
    scanf("%f",&m);
    BMI=m*m/kg;
    printf("Body mass index:%f\n",kg);
    break;
case 2:
    printf("Put number of change in population: ");
    scanf("%f",&n);
    printf("Put the time: ");
    scanf("%f",&t);
    Gr=n/t;
    printf("Growth rate:%f\n",Gr);
    break;
case 3:
    printf("Put the percent change: ");
    scanf("%f",&c);
    printf("Put the number of year: ");
    scanf("%f",&t);
    pr=c/t;
    printf("Annual percent rate:%f\n",pr);
    break;
    default:
    printf("Try again");
    break;
}
return 0;
}


#endif // OTHERS_H_INCLUDED
