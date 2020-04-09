#include<stdio.h>
int main()
{
  int n,i,k,s;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  int a[n];
      printf("enter the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
}
printf("enter the search number\n");
  scanf("%d",&k);
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
s=1;
break;
}
}
if(s==1)
printf("%d is present in array",k);
else
printf("%d is not present in array",k);
  return 0;
}
