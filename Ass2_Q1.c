#include <stdio.h>
int main()
{
int i, x, p, q, n, counter, z;
p=0;
q=0;

scanf("%d",&n);

for(i=1; i < n+1; i++)
{
counter =1;

for(;counter<i;)
{
scanf("%d",&z);
counter++;
if(z==0);
else
p=1;
}

if(counter==i)
{
scanf("%d",&x);
counter++;
}

for(;counter<n+1;)
{
scanf("%d",&z);
counter++;
if(z==0);
else
q=1;
}

}

if(p==1&&q==1)
printf("0");

else if (p==1 && q==0)
{
	printf("-1");
}

else if (p==0 && q==1)
{
	printf("1");
}
else
printf("2");


return 0;
}
