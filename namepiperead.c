#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
  int fd,x;
  char buff[10];
 	fd=open("/tmp/myfifo",O_RDONLY);
	x=read(fd,buff,sizeof(buff));
	write(1,buff,sizeof(buff));
	close(fd);

}









