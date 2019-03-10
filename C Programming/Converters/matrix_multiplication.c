#include <stdio.h>

int matrix[3][3],matrix1[3][3],answer[3][3],i,j,temp; //matrix declared globally instead of locally

void inpMatrix(int flag) //function for inputting matrices; using flag to differentiate between the first and second matrix
{
	if(flag==0)
	{
		printf("Please give me input for the first matrix: \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Matrix[%d][%d]= ",i+1,j+1);
				scanf("%d",&matrix[i][j]);
				}	
			}
		}	
	else
	{
		printf("\nPlease give me input for the second matrix: \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Matrix[%d][%d]= ",i+1,j+1);
				scanf("%d",&matrix1[i][j]);
				}	
			}
		}	
	
}

void dispMatrix(int flag)
{
	if(flag==0)
	{
		printf("\nFirst Matrix:\n\n");
		for (i=0;i<3;i++) {
	     	for(j=0;j<3;j++) {
			 	printf("%d ",matrix[i][j]);	
	     	}
	     	printf("\n");
   		}	
	}
	else
	{
		printf("\nSecond Matrix:\n\n");
		for (i=0;i<3;i++) {
	     	for(j=0;j<3;j++) {
			 	printf("%d ",matrix1[i][j]);	
	     	}
	     	printf("\n");
   		}
	}
	
}

void answerMatrix()
{
	printf("\nAnswer:\n\n");
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

int main() {

	//Inputting  matrix
   	inpMatrix(0);
   	inpMatrix(1);

   //printing matrix	
	dispMatrix(0);
	dispMatrix(1);

   //calculating matrix multiplication and printing the answer
   	answerMatrix();
   	
    return 0;
}
