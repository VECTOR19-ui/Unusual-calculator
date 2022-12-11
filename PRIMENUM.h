#ifndef PRIMENUM_H_INCLUDED
#define PRIMENUM_H_INCLUDED
int prime(){
    int prmn,i,flag=0;
//This program is only capable of finding prime numbers:
printf("\nEnter positive integer: ");
scanf("%d",&prmn);
for(i=2;i<prmn/2;++i){
    if(prmn%i==0){
        flag=0;
        break;
    }
}
if(prmn==1){
    printf("1 is neither prime nor composite");
}else{
if(flag==0){
    printf("%d is prime\n",prmn);
}else{
printf("%d is composite"<prmn);
}
return 0;
}
}


#endif // PRIMENUM_H_INCLUDED
