#ifndef MULTBL_H_INCLUDED
#define MULTBL_H_INCLUDED
int multbl(){
    int i,A=1,B=2,C=3,D=4,E=5,F=6,G=7,H=8,I=9,J=10,K=11,L=12,put;
printf("\nMultiplication table\n");
    for(i=0;i<=12;++i){
printf("\n%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d \n%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d \t%d*%d=%d",A,i,A*i,B,i,B*i,C,i,C*i,D,i,D*i,E,i,D*i,E,i,E*i,F,i,F*i,G,i,G*i,H,i,H*i,I,i,I*i,J,i,J*i,K,i,K*i,L,i,L*i);
    }
    return 0;
}


#endif // MULTBL_H_INCLUDED
