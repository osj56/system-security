#include <stdio.h>
#define MY_SHA3_HASH_LAST_TWO_DIGIT_NUMBER 6
int func1(){
	printf("Fail..\n");
	return -1;
}
int func2(){
	printf("My Password is Success!!\n");
	return 1;
}
void main1(){
	char buffer[MY_SHA3_HASH_LAST_TWO_DIGIT_NUMBER];
	scanf("%s",buffer);
	func1();
}
void main(){
	main1();
}
