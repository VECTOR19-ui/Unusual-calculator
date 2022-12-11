#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
//A program for finding sum of matrix,multiplication of matrix,sparse,symmetric,diterminant:
//preprocessing inclusion:
int matrix(){
 //Matrix global variable declaration:
     int mtrxchce,i,j,k,row,col;
     //Allowing the user to choose calculation:
     MTRXMAIN:
     printf("Enter your choice below\n");
     printf("\n1,Sum of two matrix\n");
     printf("\n2,Multiplication of two matrix\n");
     printf("\n3,Square of two matrix\n");
     printf("\n4,Sparse matrix\n");
     printf("\n5,Transponse matrix\n");
     printf("\n6,Symmetric of matrix\n");
     printf("\n7,Determinant of a matrix\n");
     printf("\n8,Inverse of a matrix\n");
     printf("\nMy choice: ");
     scanf("%d",&mtrxchce);
     //Sum of two matrix:
     if(mtrxchce==1){
        system("cls");
 int a[10][10],b[10][10],c[10][10];

 printf("\n Enter the row and column size : ");
 scanf("%d %d",&row,&col);

 printf("\n Enter the matrix 1 :\n\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("\n Enter the matrix 2 :\n\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 }
 }
 printf("\n The sum is : \n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf(" %d ",c[i][j]);
 }
 printf("\n");
 }
     }else if(mtrxchce==2){
      //Multiplication of matrix:
      system("cls");
 int a[10][10],b[10][10],mul[10][10],c,r;
 printf("enter the number of row=");
 scanf("%d",&r);
 printf("enter the number of column=");
 scanf("%d",&c);
 printf("enter the first matrix element=\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("enter the second matrix element=\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
  printf("multiply of the matrix=\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 mul[i][j]=0;
 for(k=0;k<c;k++)
 {
 mul[i][j]+=a[i][k]*b[k][j];
 }
 }
 }
 //for printing result
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 printf("%d\t",mul[i][j]);
 }
 printf("\n");
 }
}
else if(mtrxchce==3){
    system("cls");
 int a[3][3],c[3][3];
 int i,j,k;
 printf("Enter the values of first matrix\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 c[i][j]=0;
 for(k=0;k<3;k++)
 {
 c[i][j]=c[i][j]+(a[i][k]*a[k][j]);
 }
 }
 }
 printf("Square of the given matrix is :\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%d ",c[i][j]);
 }
 printf("\n");
 }
 }
else if(mtrxchce==4){
     system("cls");
 int matrix[10][10];
 int i, j, m, n;
 int sparse_counter = 0;
  printf("Enter the order of the matix \n");
 scanf("%d %d", &m, &n);
 printf("Enter the elements of the matix \n");
 for (i = 0; i < m; ++i)
 {
 for (j = 0; j < n; ++j)
 {
 scanf("%d", &matrix[i][j]);
 if (matrix[i][j] == 0)
 {
 ++sparse_counter;
 }
 }
 }
 if (sparse_counter > ((m * n) / 2))
 {
 printf("The given matrix is Sparse Matrix !!! \n");
 }
 else
 printf("The given matrix is not a Sparse Matrix \n");
 printf("There are %d number of Zeros.", sparse_counter);
 }
else if(mtrxchce==5){
   system("cls");
 static int array[10][10];
 int i, j, m, n;

 printf("Enter the order of the matrix \n");
 scanf("%d %d", &m, &n);
 printf("Enter the elements of the matrix\n");
 for (i = 0; i < m; ++i)
 {
 for (j = 0; j < n; ++j)
 {
 scanf("%d", &array[i][j]);
 }
 }
 printf("The given matrix is \n");
 for (i = 0; i < m; ++i)
 {
 for (j = 0; j < n; ++j)
 {
 printf(" %d", array[i][j]);
 }
 printf("\n");
 }
 printf("Transpose of matrix is \n");
 for (j = 0; j < n; ++j)
 {
 for (i = 0; i < m; ++i)
 {
 printf(" %d", array[i][j]);
 }
 printf("\n");
 }
     }else   if(mtrxchce==6){
         system("cls");
 int mat[12][12],transpose[12][12];
 int i,j,row,col,flag=1;
 printf("Enter the number of rows and columns for 1st matrix\n");
 scanf("%d%d",&row,&col);
 printf("Enter the elements of the matrix\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 scanf("%d",&mat[i][j]);
 }
 }

 printf("The matrix\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("%d\t",mat[i][j]);
 }
 printf("\n");
 }
 //To find transpose
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 transpose[j][i]=mat[i][j];
 }
 }
 printf("The transpose matrix\n");
 for(i=0;i<col;i++)
 {
 for(j=0;j<row;j++)
 {
 printf("%d\t",transpose[i][j]);
 }
 printf("\n");
 }

 if(row==col)
 {
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 if(mat[i][j]!=transpose[i][j])
 {
 flag=0;
 break;
 }
 }
 if(flag==0)
 {
 printf("\nThe matrix is not symmetric");
 break;
 }
 }
 if(flag==1)
 {
 printf("\nThe matrix is symmetric");
 }
 }
 else
 {
 printf("\nThe matrix is not symmetric");
 }
     }else  if(mtrxchce==7){
    system("cls");
 int a[3][3], i, j;
 long determinant;

 printf("Enter the 9 elements of matrix: ");
 for(i = 0 ;i < 3;i++)
 for(j = 0;j < 3;j++)
 scanf("%d", &a[i][j]);
 printf("\nThe matrix is\n");
 for(i = 0;i < 3; i++){
 printf("\n");
 for(j = 0;j < 3; j++)
 printf("%d\t", a[i][j]);
 }
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
 * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 printf("\nDeterminant of 3X3 matrix: %ld", determinant);
      }else  if(mtrxchce==8){
      system("cls");
 int mat[3][3], i, j;
 float determinant = 0;
 printf("Enter elements of matrix row wise:\n");
 for(i = 0; i < 3; i++)
 for(j = 0; j < 3; j++)
 scanf("%d", &mat[i][j]);

 printf("\nGiven matrix is:");
 for(i = 0; i < 3; i++){
 printf("\n");

 for(j = 0; j < 3; j++)
 printf("%d\t", mat[i][j]);
 }
 //finding determinant
 for(i = 0; i < 3; i++)
 determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
printf("\n\ndeterminant: %f\n", determinant);
  printf("\nInverse of matrix is: \n");
 for(i = 0; i < 3; i++){
 for(j = 0; j < 3; j++)
 printf("%.2f\t",((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant);
 printf("\n");
 }
      }else{
          goto MTRXMAIN;
      }
     return 0;
}


#endif // MATRIX_H_INCLUDED
