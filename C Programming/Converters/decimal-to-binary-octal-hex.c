#include<stdio.h>

void binCon();
void octCon();
void hexCon();

int dec, bin, temp[50], i=0, j;
int main(){
  printf("Enter the decimal number : ");
  scanf("%d",&dec);
  binCon();
  octCon();
  hexCon();
  return 0;
}

void binCon(){
  int n=dec;
  i=0;
  do{
    temp[i]=n%2;
    n/=2;
    i++;
  }while(n>0);

  printf("\nThe binary number is     : ");
  for(j=i-1;j>=0;j--){
    printf("%d",temp[j]);
  }
}

void octCon(){
  int n=dec;
  i=0;
  do{
    temp[i]=n%8;
    n/=8;
    i++;
  }while(n>0);
  printf("\nThe octal number is      : ");
  for(j=i-1;j>=0;j--){
    printf("%d",temp[j]);
  }
}

void hexCon(){
  int n=dec;
  char a;
  i=0;
  do{
    temp[i]=n%16;
    n/=16;
    i++;
  }while(n>0);
  printf("\nThe hexa number is       : ");
  for(j=i-1;j>=0;j--){
    if(i>0){
    	if(temp[j]>=10){
      		a = 55 + temp[j];
      		printf("%c", a);}
      else{
        printf("%d",temp[j]);
      }
    }
  }
}
