#include<stdio.h>
#include<stdlib.h>
int main(){
	int input, total = 0, count = 0;
	printf("Enter the number : ");
	scanf("%d", &input);
	while(input != 0){
		total += input;
		count++;
		printf("Enter the number : ");
		scanf("%d", &input);
	}
	printf("Total : %d\n", total);
	printf("Avg : %d\n", total/count);
	return 0;
}
