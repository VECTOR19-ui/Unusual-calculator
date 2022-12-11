#ifndef HCF_OR_GCD_AND_LCM_H_INCLUDED
#define HCF_OR_GCD_AND_LCM_H_INCLUDED
long hcflcm(){
  long x,y,hcf,lcm;
  int hgchce;
  //A place to ask user to choose calculation from hcf or lcm:
  printf("\nChoose your opertaion below\n");
  printf("\n1,HCF\n");
  printf("\n2,LCM\n");
  printf("\nChoose: ");
  scanf("%d",&hgchce);
  //testing choice with switch statement:
  switch(hgchce){
case 1:
system("cls");
printf("\nPut two numbers to find highest common factor: ");
scanf("%ld%ld",&x,&y);
hcf=hcflcm(x,y);
printf("HCF=%ld\n",hcf);
break;
case 2:
printf("\nPut two numbers to get leadt common factor: ");
scanf("%ld%ld",&x,&y);
lcm=(x*y)/hcf;
printf("LCM=%ld",lcm);
break;
default:
    printf("TRy again\n");
    break;
  }
  return 0;
}
#endif // HCF_OR_GCD_AND_LCM_H_INCLUDED
