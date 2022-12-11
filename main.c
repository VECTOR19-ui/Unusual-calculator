//Main program of unusual calculator:
//Preprocessing:
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "EVENODD.h"
#include "FACTORIAL.h"
#include "ARITHMETIC.h"
#include "SQUAREROOT.h"
#include "MULTBL.h"
#include "NUMSYSCONV.h"
#include "EXPLOG.h"
#include "CEILFLOOR.h"
#include "ABSVAL.h"
#include "TRIGONOMETERY.h"
#include "HCF_OR_GCD_AND_LCM.h"
#include "MATRIX.h"
#include "VOLUME_AREA.h"
#include "PRIMENUM.h"
#include "BUSINESS.h"
#include "PHYSICS.h"
#include "OTHERS.h"
#include "MAIN.h"
//End of preprocessing:
//Body of the main function:
int choice;
void main(){
   printf("\n\n\n\t\tWELCOME TO UNSUAL CALCULATOR\n");
   printf("\n\t\tEnter your operation below\n");
   printf("\t1,Arithmetic\n");
   printf("\t2,Factorial\n");
   printf("\t3,Even or Odd\n");
   printf("\t4,Multiplication table\n");
   printf("\t5,Square root\n");
   printf("\t6,Number system conversion\n");
   printf("\t7,Logarithm and Exponent\n");
   printf("\t8,Ceil and Floor\n");
   printf("\t9,Absolute value\n");
   printf("\t10,Sin Cos Tan\n");
   printf("\t11,Matrix\n");
   printf("\t12,Volume and Area\n");
   printf("\t13,HCF GCD LCM\n");
   printf("\t14,Prime number\n");
   printf("\t15,Business calculation\n");
   printf("\t16,Physics calculation\n");
   printf("\t17,Others\n");
   printf("Enter your choice: ");
   scanf("%d",&choice);
   //Evaluating user input:
        if(choice==1){
                system("cls");
            arithmetic();
        }
         else if(choice==2){
                system("cls");
            factorial();
         }
         else if(choice==3){
                system("cls");
         EVENODD();
         }
         else if(choice==4){
                system("cls");
                 multbl();
                }else if(choice==5){
                system("cls");
         sqrt();
         }else if(choice==6){
             system("cls");
             numsysconv();
         }else if(choice==7){
       system("cls");
       explog();
         }else if(choice==8){
             system("cls");
             ceilfloor();
             }else if(choice==9){
          system("cls");
          absval();
          }else if(choice==10){
              system("cls");
              trigonometery();
              }else if(choice==11){
                  system("cls");
              matrix();
              }else if(choice==12){
              system("cls");
              volumearea();
              }else if(choice==13){
                 system("cls");
                  hcflcm();
                  }else if(choice==14){
                      system("cls");
                      prime();
                      }else if(choice==15){
                      system("cls");
                      business();
                     }else if(choice==16){
                         system("cls");
                         physics();
                        }else if(choice==17){
                            system("cls");
                            others();
                            }else{
                                system("cls");
                                abort();
          }
   return 0;
}


