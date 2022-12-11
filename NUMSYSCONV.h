#ifndef NUMSYSCONV_H_INCLUDED
#define NUMSYSCONV_H_INCLUDED
int numsysconv(){
    //main var:
    int num;
    //decimal variable declaration:
     int x[10],y,z;
     //octal variable declartion:
     int oct[8],o;
     //Binary variable declaration:
     long double bin;
     //Hexadecimal variable declaration:
     int hex;
//This program will convert decimal,binary,hexadecimal,octal from one to the other as needed:
printf("Enter your choice again: ");
printf("\n1,Decimal to binary");
printf("\n2,Decimal to octal");
printf("\n3,Decimal to hexadecimal\n");
printf("\n4,Binary to decimal\n");
printf("\n5,Binary to octal\n");
printf("\n6,Binary to hexadecimal\n");
printf("\n7,Octal to decimal\n");
printf("\n8,Octal to binary\n");
printf("\n9,Octal to hexadecimal\n");
printf("\n10,Hexadecimal to decimal\n");
printf("\n11,Hexadecimal to binary\n");
printf("\n12,Hexadecimal to octal\n");
scanf("%d",&num);
    switch(num){
case 1:
    printf("Put a decimal number: ");
        scanf("%d",&y);
    for(z=0;y>0;z++){
    x[z]=y%2;
    y=y/2;
}
for(z=z-1;z>=0;z--){
    printf("Binary of %d:%d",y,x[z]);
}
break;
case 2:
        printf("Put a decimal number: ");
             scanf("%d",&y);
             for(z=0;y<7;z++){
               oct[z]=y%8;
               y=y/8;
              printf("Octal number of %d:%d\n",y,oct[z]);
        }
        break;
case 3:
    printf("Put decimal number: ");
    scanf("%d",&y);
    //Other expressions of dec to hex:
    break;
case 4:
    printf("Put binary numeber: ");
    scanf("%ld",&bin);
    //other exp for bin:
    break;
case 5:
    printf("Put binary number: ");
    scanf("%ld",&bin);
    //Other exp for bin:
    break;
case 6:
    printf("Put binary number: ");
    scanf("%ld",&bin);
    //other exp for bin:
    break;
case 7:
    printf("Put octal numver: ");
    scanf("%d",&o);
    //other exp for oct:
    break;
case 8:
    printf("Put octal number: ");
    scanf("%d",&o);
    //other exp for oct:
    break;
case 9:
    printf("Put octal number: ");
    scanf("%d",&o);
    //other exp for oct:
    break;
case 10:
    printf("Put hexadecimal number: ");
    scanf("%d",&hex);
    //other exp for hex:
    break;
case 11:
    printf("Put hexadecimal number: ");
    scanf("%d",&hex);
    //other exp fot hex:
    break;
case 12:
    printf("Put hexadecinal number: ");
    scanf("%d",&hex);
    //other exp fot hex:
    break;
    }
return 0;
}


#endif // NUMSYSCONV_H_INCLUDED
