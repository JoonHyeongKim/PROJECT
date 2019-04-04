#include <stdio.h>
#include <stdlib.h>
#include "21600151.h"
#define MAX_SIZE 2048

boolean isPrime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;

}

