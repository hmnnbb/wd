#include <stdio.h>
int main()
{
	int age;
	float height;
	char name[20];
	scanf("%s %d %f", name, &age, &height);
	printf("name:%s  age:%d  height:%.2f\n", name, age, height);
	return 0;
}
