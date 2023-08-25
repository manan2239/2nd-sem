#include <stdio.h>
int fact (int f)
{
	if(f==1)
	return 1;
	return f*fact(f-1);
}
int main ()
{int f;
	printf("enter any number ");
  scanf("%d",&f);
   fact ( f); 
   int i=fact(f);
   printf("the valve  of i is %d",i);
   
   
   
     return 0;

}

