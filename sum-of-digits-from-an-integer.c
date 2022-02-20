#include <stdio.h>

int main()
{    
  int input,helper,sum=0,i=0,j=0;
  int* arr=malloc(sizeof(int));
  printf("Pick a number: ");
  scanf("%d",&input);
  while(input>0)
  {
    helper=input%10;
    if(i==0){
      arr=realloc(arr, (i+2)*sizeof(int));
    }else{
      arr=realloc(arr, (i+1)*sizeof(int));
    }
    arr[i]=helper;
    sum=sum+helper;
    input=input/10;
    i++;
  }
  printf("The sum is: ");
  j=i;
  while(j>0){
    if(j!=1){
      printf("%d + ",arr[j-1]);
      j--;
    }else{
      printf("%d",arr[j-1]);
      j--;
    }
    
  }
  printf(" = %d", sum);
  return 0;
}   
