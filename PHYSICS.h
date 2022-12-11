#ifndef PHYSICS_H_INCLUDED
#define PHYSICS_H_INCLUDED
//program for fullfilling physics header:
physics(){
//global variable declaration:
int E,m,f,a,phychce;
//declarartion of constant variable for the speed of light value:
  const  int c=299792458;
//showing and asking user to choose calculation:
printf("\nChoose your operation below\n");
printf("\n2,Einesten mass energy equivalence\n");
printf("\n2,Newton second law\n");
printf("Choose: ");
scanf("%d",&phychce);
//switch exp:
switch(phychce){
case 1:
printf("Put mass value: ");
scanf("%d",&m);
E=m*c*c;
printf("Energy=%d\n",E);
break;
case 2:
printf("Put mass value: ");
scanf("%d",&m);
printf("Put acceleration value: ");
scanf("%d",&a);
f=m*a;
printf("Accelereation=%d\n",a);
break;
default:
printf("Try again\n");
break;
}
}


#endif // PHYSICS_H_INCLUDED
