#include<stdio.h>
int main()
{
	printf("enter name");
	char name [200];
	scanf("%S",&name);
	printf("enter age");
	int age;
	scanf("%d",&age);
	printf("enter weight");
	float weight;
	scanf("%f",&weight);
	printf("enter gender");
	char gender;
	scanf("%c",&gender);
	printf("name is %s \n",name);
	printf("age is %d \n",age);
	printf("weight is %f \n",weight);
	printf("gender is %c \n",gender);
	return 0;
}
