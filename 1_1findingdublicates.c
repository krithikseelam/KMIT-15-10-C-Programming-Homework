#include<stdio.h>
int main(){
	int arr[5];
	int i;
	printf("Number:\n");
	for(i = 0; i < 5; i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			printf("dublicates exist!!\n");
			break;
		}
	}
	if(i == 5){
		printf("dublicates doesn't exist!!\n");
	}
	return 0;
}
