#include<stdio.h>
int main() 

{
   int a[10],i,temp,j;
   for(i=0;i<10;i++)
     
     {
    scanf("%d",&a[i]);
    for(j=0;j<10;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  }
      printf("%d",a[0]);
}
