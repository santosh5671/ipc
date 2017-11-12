#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
  int fd,x;
  char buff[10]="HELLO";
	fflush(stdin);
  x=mkfifo("/tmp/myfifo",0666);

	fd=open("/tmp/myfifo",O_WRONLY);

	write(fd,buff,sizeof(buff));
	close(fd);

}









