#include<stdio.h>
int main()
{
int a;
float f;
char c;
//scanf("%d %f %c",&a,&f,&c);
scanf("%d",&a);
scanf("%f",&f);
//getchar();
scanf(" %c",&c);

printf("%d %.2f",a,f);
printf("%c",c);
return 0;
}