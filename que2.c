#include<stdio.h>
#include<unistd.h>

int main()
{

	pid_t child1, child2;
	int n, m;
	printf("Enter two numbers : \n");
	scanf("%d\n%d", &n, &m);

	child1 = fork();

	if (child1 == 0) {
		sleep(1);
		printf("Addition from child1 : %d + %d = %d\n", n, m, n+m);
		printf("child1 pid = %d\n\n", getpid());

	}
	 else {
		child2 = fork();

		if (child2 == 0) {
			sleep(1);
			printf("Average from child2 : %d\n", (n+m)/2);
			printf("child2 pid = %d\n\n", getpid());

		} 
		else {
			sleep(3);
			 printf("Parent : \n");
			printf("Parent pid = %d\n", getppid());
		}
	}
return 0;
}
