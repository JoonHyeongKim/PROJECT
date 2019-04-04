#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "21600151.h"
#include "21800365.h"
#define MAX_SIZE 2048

int reverse_digits(int n);
int sort_digits(int n);
int main(){
	char input[MAX_SIZE];
	int i,is_number,reverse,sort;
	boolean prime;
	
	while(fgets(input,sizeof(input),stdin)!=NULL){
		input[strlen(input)-1]=0;

		if(strcmp(input,"quit")==0){
				printf("(bye)");
				break;
			}
		for(i=0;i<strlen(input);i++){
			if(!isdigit(input[i])){
				printf("Entered input is not a number\n");
				is_number=0;
				break;
				}
			}
		if(is_number){
			prime=isPrime(atoi(input));
			printf("isPrime> %s\n",prime);
			sort =sort_digits(atoi(input));
			printf("sort> %d\n",sort);
			}
		}
		return 0;
}

