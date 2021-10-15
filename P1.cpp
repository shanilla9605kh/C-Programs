#include <stdio.h> 
#include<math.h> 
int main()
{
int a, r, n, sum; printf("value of a: "); scanf("%d", &a); printf("value of r: "); scanf("%d", &r); printf("value of n: "); scanf("%d", &n); if(r>1)
{
sum=a*((pow(r,n)-1)/(r-1));
}
else
{
sum=a*((1-pow(r,n))/(1-r));
}
printf("Sum of geometric progression is: %d ", sum);
}

