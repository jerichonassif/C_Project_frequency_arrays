#include <stdio.h>




int main(int argc, char **argv)
{
	 int size = 5;
		char value[5] = {
		0,1,1,1,2
	};
	int ferqunce[3] = {
		0
	};
	
	int intergate = 3;
	
	for(int i = 0 ; i < size ; i++){
		ferqunce[value[i]]++;
	}
	
	for( int i=0 ; i < intergate ; i++ ){
		printf("value : %d |ferqunce :  %d\n",i, ferqunce[i]);
	}
  
	return 0;
}