#ifndef VOLUME_H_INCLUDED
#define VOLUME_H_INCLUDED
int volumearea(){
    int vachoice;
     //Circle circumference variable declarationL:
    float ci,radius_circumference,PI=3.14;
      //Circle area variable declaration:
    float radius_circ_area,area_circ_area;
    //Triangle variable declaartion:
    float base,height,area_triangle;
      //Square variable declaration:
    float side_sqr,area_sqr;
        //Rhombus variable declaration:
    float area_romb,diagonal1,diagonal2;
      //Pentagon variable declartion:
    int a_penta,b_penta,area_pent;
      //Hexagon variable declaration:
    int x_hexa;
    float area_hexa;
       //Heptagon variable declaration:
    int side_hepta,perimeter;
       float apothem,area_hepta;
      //Octagon variable declaration:
    int side_oct;
    float area_oct;
       //Trapezoid variable declaration:
    float x_trap,y_trap,z_trap;
    float area_trapezoid;
//This file have the basic calculations of volume prograns:
printf("Choose operation below\n");
printf("\n1,Circle circumference\n");
printf("\n2,Circle area\n");
printf("\n3,Triangle\n");
printf("\n4,Square\n");
printf("\n5,Rhombus\n");
printf("\n6,Pentagon\n");
printf("\n7,Hexagon\n");
printf("\n8,Heptagon\n");
printf("\n9,Octagon\n");
printf("\n10,Trapezoid\n");
//continious programs will continue here for volume programs:
printf("My choice: ");
scanf("%d",&vachoice);
switch(vachoice){
case 1:
    //Circle circumference expression:
   printf("Enter radius: ");
    scanf("%f",&radius_circumference);
    ci=2*PI*radius_circumference;
    printf("Circle circumference:%f\n",ci);
    break;
case 2:
    //Circle area expression section:
  printf("Put radius: ");
    scanf("%f",&radius_circ_area);
    area_circ_area=3.14159*radius_circ_area*radius_circ_area;
    printf("Circle area:%f\n",area_circ_area);
    break;
case 3:
    //Triangle expression section:
    printf("Enter the base of the triangle: ");
    scanf("%d",&base);
    printf("Enter the height of the riangle: ");
    scanf("%d",height);
    area_triangle=(base*height)/2;
    printf("Area of triangle:%f\n",area_triangle);
    break;
case 4:
    //Square expression section:
  printf("Enter the side value: ");
    scanf("%d",&side_sqr);
    area_sqr=side_sqr*side_sqr;
    printf("Area of square:%f\n",area_sqr);
    break;
case 5:
    //Rhombus expresion section:
    printf("Enter first diagonal size: ");
    scanf("%f",&diagonal1);
    printf("Enter second diagonal size: ");
    scanf("%f",&diagonal2);
    area_romb=0.5*diagonal1*diagonal2;
    printf("Area of rhombus:%f\n",area_romb);
    break;
case 6:
    //Pentagon expression section:
    printf("Put first integer: ");
    scanf("%d",&a_penta);
    printf("Put second integer: ");
    scanf("%d",&b_penta);
    area_pent=(5.0/2.0)*a_penta*b_penta;
    printf("Value of pentagon:%f",area_pent);
    break;
case 7:
    //Hexagon expression section:
  printf("Put your integer: ");
    scanf("%d",&x_hexa);
     area_hexa=(3*sqrt(3)*pow(x_hexa,2))/8;
    printf("Area of hexagon:%f\n",area_hexa);
    break;
case 8:
    //Heptagon expression section:
    printf("Enter your apothem: ");
    scanf("%f",&apothem);
    perimeter=7*side_hepta;
    area_hepta=(apothem*perimeter)/2;
    printf("Heptagon:%f\n",area_hepta);
    break;
case 9:
    //Octagon expression section:
    prime("Put side size: ");
    scanf("%d",&side_oct);
    area_oct=2*(1+sqrt(2))*side_oct*side_oct;
    printf("Octagon:%f",area_oct);
    break;
case 10:
    //Trapezoid expression section:
    printf("Put number first: ");
    scanf("%f",&x_trap);
    printf("Put number next: ");
    scanf("%f",&y_trap);
    printf("Enter number third: ");
    scanf("%f",&z_trap);
    area_trapezoid=0.5*(x_trap+y_trap)*z_trap;
    printf("Trapezoid:%f\n",area_trapezoid);
    break;
default:
    printf("We are biulding the volume section thanks");
    break;
    }
    return 0;
}


#endif // VOLUME_H_INCLUDED
