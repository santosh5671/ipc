#include<stdio.h>
#include<unistd.h>

int main()
{

int pfd[2];   //pfd[0]---for reading   fpd[1]---for writing
int x;
char buff[50];


pipe(pfd);

x=fork();

if(x>0)
{

	printf("I AM IN PARENT");
	write(pfd[1],"helloindia",20);
}
 if(x==0)
{

	sleep(3);
	printf("I am in CHILD\n");
	read(pfd[0],buff,20);

	write(1,buff,20);
}
return 0;
}





