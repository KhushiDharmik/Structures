#include<stdio.h>
struct employee{
	char name[30];
	int empId[20];
	float salary[20];
	float experience[60];
}s[5];
int main(){
	int i;
	printf("Enter details: of 5 employees\n");
	for(i=0; i<5; i++){
	printf("Name:"); scanf("%s", s[i].name);
	printf("ID:");   scanf("%d", s[i].empId);
	printf("Salary:");  scanf("%f",s[i].salary);
	printf("Experience:");  scanf("%f",s[i].experience);
}
	printf("Entered details are:\n");
	for(i=0; i<5; i++){
	printf("%s\t%d\t%f\t%f", s[i].name, s[i].empId, s[i].salary, s[i].experience);}
	return 0;
	
}
