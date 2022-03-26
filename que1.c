#include<stdio.h>
#include<unistd.h>

int main()
{
	execl("/home/kirt/linux/assignment2/test1","./test1", "test file", "discriptor", 0);

	return 0;
}
