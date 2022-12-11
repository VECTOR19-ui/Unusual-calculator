#ifndef TRIGONOMETERY_H_INCLUDED
#define TRIGONOMETERY_H_INCLUDED
int trigonometery(){
    //declaration of sin cos tan as a global variable:
float cos_theta,sin_theta,tan_theta;
//variable declaration as of the angles:
float opposite,adjecent,hypothunse;
//global variable of trigonometery for user choice input:
int tri;
//asking user for choosing operation:
printf("Choose operation below\n");
printf("\n1,Find cos");
printf("\n2,Find sin");
printf("\n3,Find tan");
printf("\nPut your choice here: ");
scanf("%d",&tri);
//testing input with switch condition:
switch(tri){
case 1:
    system("cls");
    printf("Put opposite side value: ");
    scanf("%f",&opposite);
    printf("Put hypothunse value: ");
    scanf("%f",&hypothunse);
    sin_theta=opposite/hypothunse;
    printf("Sin theta=%f\n",sin_theta);
    break;
    case 2:
        printf("Put adjecent value: ");
        scanf("%f",&adjecent);
        printf("Put hypothunse value: ");
        scanf("%f",&hypothunse);
        cos_theta=adjecent/hypothunse;
        printf("Cos theta=%f\n",cos_theta);
        break;
    case 3:
        printf("Put sin value: ");
        scanf("%f",&sin_theta);
        printf("Put cos value: ");
        scanf("%f",&cos_theta);
        tan_theta=sin_theta/cos_theta;
        printf("Tan theta=%f\n",tan_theta);
        break;
    default:
        printf("Try again");
        break;
        }
        //end of switch exp:
        return 0;
}




#endif // TRIGONOMETERY_H_INCLUDED
