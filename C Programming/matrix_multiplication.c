#include <stdio.h>
 int main() {


   int matrix[3][3],matrix1[3][3],i,j;


   //Inputting  matrix
   printf("Please give me input for the first matrix: \n");
   for (i=0;i<3;i++) {
     for(j=0;j<3;j++) {
       printf ("Matrix[%d][%d]= ",i+1,j+1);
       scanf("%d",&matrix[i][j]);
     }
   }

   printf("Please give me input for the second matrix: \n");
   for (i=0;i<3;i++) {
     for(j=0;j<3;j++) {
       printf ("Matrix[%d][%d]= ",i+1,j+1);
       scanf("%d",&matrix1[i][j]);
     }
   }


   //printing matrix
   printf("First Matrix:\n");
   for (i=0;i<3;i++) {
     for(j=0;j<3;j++) {
       printf ("%d ",matrix[i][j]);
     }
     printf("\n");
   }

   printf("Second Matrix:\n");
   for (i=0;i<3;i++) {
     for(j=0;j<3;j++) {
       printf ("%d ",matrix1[i][j]);
     }
     printf("\n");
   }

   //calculating matrix multiplication and printing the answer
   printf("\nAnswer:\n");
      int answer[3][3],temp;
     for(temp=0;temp<3;temp++)
     {
      for (i=0;i<3;i++) {
       answer[temp][i] = 0;
        for (j=0;j<3;j++){

             answer[temp][i] = answer[temp][i] + (matrix[temp][j]*matrix1[j][i]);
        }
       printf("%d ",answer[temp][i]);
      }
      printf("\n");
     }
    }
