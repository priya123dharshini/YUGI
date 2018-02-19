#include "stdio.h"

int main(void) {
  char w[100];
  int count1=0,count2=0,i;
  scanf("%s",w);
  for(i=0;w[i]!='\0';i++)
  {
    count1++;
    if(w[i]=='1'||w[i]=='0')
    {
      count2++;
    }
    
  }
 if(count1==count2)
  {
        printf("yes");
  }
  return 0;
}
