#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024 

int read_word(int fd ,char *word,int size)
{
	char ch;
	int i=0;
	ssize_t n;


	while(1){
		n=read(fd, &ch, 1);
		if (n == 0)
			return 0;
		if (n == -1)
			return -1;
		if (ch != ' ' && ch != '\n' && ch != '\t')
			break;
	}

	while(i < size -1){

		n = read(fd,&ch,1);

		if(n ==0 )
			break;

		if (n == -1)
			return -1;
		if (ch == ' ' || ch == '\n' || ch == '\t')
			break;

		word[i++] = ch;
	}
	word[i] = '\0';
	 return 1;
}

int main(){
	int fd1,fd2,fd3;

	char word1[BUFFER_SIZE];
	char word2[BUFFER_SIZE];

	int ret1,ret2;

	fd1 = open("file1.txt",O_RDONLY);

	if (fd1 == -1){
		perror(file1.text);
		return 1;
	}

	fd2 = open("file2.txt",O_RDONLY);
	 

	if (fd2 == -1)
	{
		perror("file.txt");
		close(fd1);
		return 1;
	
	}	

	fd3 = open("file3.txt",O_WRONLY | O_CREAT | O_TRUNC ,0644);

	if (fd3 == -1){
		perror("file3.txt");

		close(fd1);
		close(fd2);

		return 1;
	}


	while(1){

		ret1 = read_word(fd1,word1,BUFFER_SIZE);
		ret2 = read_word(fd2,word2,BUFFER_SIZE);

		if ret1 == -1 || ret2 == -1)
		{
			perror("read");
			break;
		}
	
		if (ret1 == 1){
			write(fd3, word1,strlen(word1));
			write(fd3 ," ",1);
		}
		if (ret2 == 1){
			write (fd3,word2,strlen(word2));
			write(fd3," ",1);
		}

		if (ret1 == 0 && ret2 == 0)
			break;
	}

	close(fd1);
	close(fd2);
	close(fd3);

	return 0;
}

			
