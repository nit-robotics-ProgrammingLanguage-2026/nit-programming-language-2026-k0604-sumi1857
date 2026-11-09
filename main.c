#include <stdio.h>

int main(void)
{
  int number;
  long sum=0;
  scanf("%d",&number);
  
  if(number<0)
  {
    printf("NG");
    return 0;
  }

  /*1からnumberまで順番に調べる*/
  for(int value=1; value++;)
  {
    if (value>number)
    {
      break;
    }
    /*3の倍数または5の倍数は加算しない*/
    if(value%3==0||value%5==0)
    {
      continue;
    }
    sum += value;
  }
  printf("%ld",sum);
  
  return 0;
}
