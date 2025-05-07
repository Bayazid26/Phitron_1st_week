#include<stdio.h>
int main()
{
int a; //4 byte jayga dokhol korbe
//scanf("%d",&a); //& address of/reference sign
//&a=address of a
float f;
char c;
//scanf("%f",&f);
scanf("%d %f %c",&a,&f,&c);
printf("%d %.2f %c",a,f,c);
return 0;
}