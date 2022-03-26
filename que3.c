#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/kirt/linux/assignment2/test2", "./test2", "test", "file", 0) ;
	
	printf("\n");
	
return 0;
}
