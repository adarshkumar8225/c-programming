#include<unistd.h>
#include<sys/types.h>
//#include<errno.h>
#include<stdio.h>
//#include<sys/wait.h>
#include<stdlib.h>


int main()
{
	int *p=(int*) malloc(sizeof(int));
	pid_t p1,p2;
	*p=0;
	p1=fork();
	if(p1<0)
	{
		printf("fork unsuccessful\n");
		exit(1);
	}
	if(p1==0) //1st child.
	{
		 printf("Initially value pointed by p:%d\n",*p);

		*p=50;
		printf("value pointed by p in child1:%d\n",*p);

	}
	else{
		p2=fork();
		if(p2==0){  //2nd child
			printf("Initially value pointed by p:%d\n",*p);
			*p=100;
			printf("value pointed by p in child2:%d\n",*p);
		}
	}
	return 0;
}
