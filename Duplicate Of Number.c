#include <stdio.h>
int main()
{
  int size, temp;
  printf("Enter size of array \n");
  scanf("%d",&size);
  int array[size];
  printf("Enter %d element in the array \n",size);
  for(int i=0; i<size; i++)
  {
    scanf("%d",&array[i]);
  }
  printf("Original Array \n");
  for(int i=0; i<size; i++)
  {
    printf("%d ",array[i]);
  }
  printf("\n");
  for(int i=0; i<size-1; i++)
  { 
    for(int j=i+1; j<size; j++)
	{
      if(array[i] == array[j])
	  {
        temp = array[j];
        array[j] = array[size-1];
        array[size-1] = temp;
        size--; 
      }
    }
  }
  printf("Filtered Array \n");
  for(int i=0; i<size; i++)
  {
    printf("%d ",array[i]);
  }

  return 0;
}