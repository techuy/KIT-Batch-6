#include <stdio.h>
 int main() {
   int matrix[3][3],matrix1[3][3],i,j;
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

   printf("\nAnswer:\n");
   int answer[3][3],temp;
   for (i=0;i<3;i++) {
     for (j=0;j<3;j++){
       
     }
   }

   for (i=0;i<3;i++) {
     for(j=0;j<3;j++) {
       printf ("%d ",answer[i][j]);
     }
     printf("\n");
   }
 }
