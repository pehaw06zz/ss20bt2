#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[20];
};
int main(){
	struct student PTIT;
	printf("nhap ten sv: ");
	fgets(PTIT.name,sizeof(PTIT.name),stdin);
	printf("nhap tuoi sv: ");
	scanf("%d",&PTIT.age);
	getchar();
	printf("nhap sdt sv: ");
	fgets(PTIT.phoneNumber,sizeof(PTIT.phoneNumber),stdin);
	printf("thong tin sv\n");
	printf("ten sv la: %s",PTIT.name);
	printf("tuoi sv la: %d\n",PTIT.age);
	printf("sdt sv la: %s\n",PTIT.phoneNumber);
	return 0;
}
