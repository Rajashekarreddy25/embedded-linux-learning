#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>


#define QUEUE_NAME "/child_to_parent"

int main(){

	mqd_t mq;
	pid_t pid;

	struct mq_attr attr;

	char buffer[100];
	unsigned int priority;


	//message queue attributes//
	
	attr.mq_flags = 0;
	attr.mq_maxmsg = 10;
	attr.mq_msgsize = 100;
	attr.mq_curmsgs = 0;

	//create the posix message_queue
	mq = mq_open(QUEUE_NAME,O_CREAT | O_RDWR,066,&attr);

	if (mq ==(mqd_t)-1){
		perror("mq_open");
		return 1;
	}

	// create the child process//
	
	pid = fork();
	if (pid < 0){
		perror("fork");
		mq_close(mq);
		mq_unlink(QUEUE_NAME);

		return 1;
	}
	
	//child process//
	 
	if (pid == 0)
	{

		char message[] = "hello parent ,from the sender(child)";

		printf("child: sending messge....\n");

		if (mq_send(mq,message,strlen(message)+1,5) == -1)
		{

			perror("mq_send");
			exit(1);
		}

		printf("Child:Message sent sucessfully\n");

		mq_close(mq);
		exit(0);
	}

	//parent process
	
	else{
		printf("Parent:Waiting for message..\n:");

		if (mq_receive(mq,buffer,sizeof(buffer),&priority) == -1){
			perror("mq_receive");
			mq_close(mq);
			mq_unlink(QUEUE_NAME);

			return 1;
		}

		printf("parent: Message received = %s\n",buffer);
		printf("parent: Message priority = %u\n",priority);

		// wait for child to finish

		wait(NULL);

		// close and remove to the message queue 

		mq_close(mq);
		mq_unlink(QUEUE_NAME);
	}
	return 0;
}



