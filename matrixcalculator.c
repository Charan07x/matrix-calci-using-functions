#include<stdio.h>
#include<stdlib.h> 
void readMatrix(int Arr3[10][10],int rows,int colums);  
void printMatrix(int Arr3[10][10],int rows,int colums);  
void Addsub(int Arr1[10][10],int Arr2[10][10],int rows,int colums,int mul);  
void ScalarM(int Arr3[10][10],int s,int rows,int colums);  
void Multiply(int Arr1[10][10],int Arr2[10][10],int rowsA,int columsA,int columsB);  
void Transpose(int Arr1[10][10],int rowsA,int ColumnsA);
void Determinent(int a[10][10]);
int main(){  
    int add=1; 
    int sub=-1;
    int i,j,k; 
    int matrixA[10][10];  
    int matrixB[10][10];  
    int rowA,ColumnA,rowB,ColumnB,operation,s=0; 
    char Choice;
    
  
        printf("\nMatrix Calculatore Menu\n");  
        printf("\t1. To Add\n");  
        printf("\t2. To Subtract\n");  
        printf("\t3. To Scalar Multiply\n");  
        printf("\t4. To Multiply two matrices\n"); 
        printf("\t5. To find Transpose of matrix\n"); 
        printf("\t6. exit\n");
        printf("Enter your choice: ");  
        scanf(" %d", &operation);  
  
  
        switch (operation){  
  
        case 1:  
            printf("\nEnter the rows and Columns for matrix A: ");  
            scanf("%d%d",&rowA,&ColumnA);  
  
            printf("Enter the rows and Columns for matrix B: ");  
            scanf("%d%d",&rowB,&ColumnB);  
  
            while ((rowA != rowB) && (ColumnA != ColumnB)){  
                printf("\nMatrices must be the same size\n");  
                printf("\nEnter the Rows and Columns for matrix A: ");  
                scanf("%d%d",&rowA,&ColumnA);  
  
                printf("Enter the Rows and Columns for matrix B: ");  
                scanf("%d%d",&rowB,&ColumnB);  
  
            }  
  
  
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, ColumnA);  
            readMatrix(matrixA,rowA,ColumnA);  
            printf("\n\t\tMatrix A\n\n");  
            printMatrix(matrixA,rowA,ColumnA);  
  
  
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, ColumnB);  
            readMatrix(matrixB,rowB,ColumnB);
            printf("\n\t\tMatrix B\n\n");
            printMatrix(matrixB,rowB,ColumnB);
  
  
            printf("\nThe Sum of matrixA + matrixB is : \n");  
            Addsub(matrixA,matrixB,rowA,ColumnA,add);  
  
            break;  
  
        case 2:  
  
            printf("\nEnter the Rows and Colums for matrix A: ");  
            scanf("%d%d",&rowA,&ColumnA);  
  
            printf("Enter the Rows and Colums for matrix B: ");  
            scanf("%d%d",&rowB,&ColumnB);  
  
            while ((rowA!=rowB) && (ColumnA!=ColumnB)){  
                printf("\nMatrices must be the same size\n");  
                printf("\nEnter the Rows and Colums for matrix A: ");  
                scanf("%d%d",&rowA,&ColumnA);  
  
                printf("Enter the Rows and Colums for matrix B: ");  
                scanf("%d%d",&rowB,&ColumnB);  
            }  
  
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n",rowA,ColumnA);
            readMatrix(matrixA,rowA,ColumnA);  
            printf("\n\t\tMatrix A\n\n");  
            printMatrix(matrixA,rowA,ColumnA);  
  
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n",rowB,ColumnB); 
            readMatrix(matrixB,rowB,ColumnB);  
            printf("\n\t\tMatrix B\n\n");  
            printMatrix(matrixB,rowB,ColumnB);  
  
            printf("\nThe difference between matrixA - matrixB is : \n");  
            Addsub(matrixA,matrixB,rowA,ColumnA,sub);  
            break;  
  
        case 3:  
  
            printf("\nEnter the s: ");  
            scanf("%d",&s);  
            printf("\nThe s is: %d ",s);  
  
  
            printf("\nEnter the Rows and Columns for matrix A: ");  
            scanf("%d%d",&rowA,&ColumnA);  
  
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, ColumnA);   
            readMatrix(matrixA, rowA, ColumnA);  
            printf("\n\t\tMatrix A\n\n");  
            printMatrix(matrixA, rowA, ColumnA);  
  
            printf("\nThe Scalar multiplication between matrixA * %d is: \n", s);  
            ScalarM(matrixA,s,rowA,ColumnA);  
  
            break;  
  
        case 4:  
            printf("\nEnter the Rows and Columns for matrix A: ");  
            scanf("%d%d",&rowA,&ColumnA);  
  
            printf("Enter the Rows and Columns for matrix B: ");  
            scanf("%d%d",&rowB,&ColumnB);    
            while (ColumnA != rowB){  
                printf("\n\nError! column of first matrix not equal to row of second.\n\n");  
                printf("\nEnter the Rows and Columns for matrix A: ");  
                scanf("%d%d", &rowA, &ColumnA);  
  
                printf("Enter the Rows and Columns for matrix B: ");  
                scanf("%d%d",&rowB,&ColumnB);  
            }  
  
           
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, ColumnA);
            readMatrix(matrixA,rowA,ColumnA);  
            printf("\n\t\tMatrix A\n\n");  
            printMatrix(matrixA,rowA,ColumnA);  
  
             
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", rowB, ColumnB);
            readMatrix(matrixB,rowB,ColumnB);  
            printf("\n\t\tMatrix A\n\n");  
            printMatrix(matrixB,rowB,ColumnB);  
  
              
            Multiply(matrixA,matrixB,rowA,ColumnA,ColumnB);  
  
            break;  

        case 5:
            printf("\nEnter the Rows and Columns for matrix A: ");  
            scanf("%d%d",&rowA,&ColumnA);  

            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", rowA, ColumnA);
            readMatrix(matrixA,rowA,ColumnA);  
            printf("\n\t\tMatrix A\n\n");  
            printMatrix(matrixA,rowA,ColumnA);

            Transpose(matrixA,rowA,ColumnA);

            break;


        case 6: 
        printf("choice is terminated\n");
        printf("goodbye!! Have a nice day!");    
  
        default:  
            printf("\nIncorrect option! Please choose a number 1-4.");  
            break;  
        }  
  
        printf("\n\nDo you want to calculate Again? Y/N\n");  
        scanf(" %c",&Choice);  

        if (Choice=='Y' || Choice=='y'){
            main();
        } else {
            printf("\n\nGoodbye!\n\n");  
        }
    return 0;  
}  
  

void readMatrix(int Arr3[10][10], int rows, int colums){  
    int i,j;  
    for (i=0;i<rows;i++){  
        printf("\t%d entries for row %d: ",colums,i+1);  
        for (j=0;j<colums;j++){  
            scanf("%d",&Arr3[i][j]);  
        }
    }
      
}  
  
void printMatrix(int Arr3[10][10], int rows, int colums){  
    int i, j;  
  
    for (i = 0; i < rows; i++) {  
        for (j = 0; j < colums; j++){  
            printf("\t%d", Arr3[i][j]);  
        }  
        printf("\n");  
    }  
}  
  
  
void Addsub(int Arr1[10][10], int Arr2[10][10], int rows, int colums, int mul){  
    int i, j;  
    int sumM[10][10];  
    int Res[10][10];  
    for (i = 0; i < rows; i++){  
        for (j = 0; j < colums; j++){  
            Res[i][j] = mul * Arr2[i][j];  
            }  
        }  
  
  
    for (i = 0; i < rows; i++){  
        for (j = 0; j < colums; j++){  
            sumM[i][j] = Arr1[i][j] + Res[i][j];  
            printf("\t%d", sumM[i][j]);  
        }  
        printf("\n");  
    }  
}  
  
  
void ScalarM(int Arr3[10][10],int s,int rows,int colums){  
    int i,j;  
    int Res[10][10];  
    for(i=0;i<rows;i++){  
        for(j=0;j<colums;j++){  
            Res[i][j]=s*Arr3[i][j];  
            printf("%d\t",Res[i][j]);  
        }  
        printf("\n");  
    }  
  
}  
  
void Multiply(int Arr1[10][10], int Arr2[10][10], int rowsA, int columsA,int columsB){  
    int i,j,k;  
    int mulM[10][10];    
    for (i=0;i<rowsA;++i)  
        for (j=0;j<columsB;++j)  
        {  
            mulM[i][j] = 0;  
        }  
  
    
    for (i=0;i<rowsA;++i)  
        for (j=0;j<columsB;++j)  
            for (k=0;k<columsA;++k)  
            {  
                mulM[i][j]+=Arr1[i][k]*Arr2[k][j];  
            }  
    printf("\nOutput Matrix:\n");  
    for (i=0;i<rowsA;++i)
        for (j=0;j<columsB;++j)  
        {  
            printf("\t%d ",mulM[i][j]);  
            if (j==columsB-1)  
                printf("\n\n");  
        }  
} 


void Transpose(int Arr1[10][10],int rowsA,int ColumnsA){
    int transpose[10][10];
    
    for (int i=0;i<rowsA;++i)
  for (int j=0;j<ColumnsA;++j) {
    transpose[j][i] = Arr1[i][j];
  }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < ColumnsA; ++i)
  for (int j = 0; j < rowsA; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == rowsA - 1)
    printf("\n");
  }
}