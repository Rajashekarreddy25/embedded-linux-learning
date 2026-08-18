#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

	pid_t pid;

	pid = fork();
	if (pid == 0 ){
		printf("The child pid is %d :\n",getpid());
		printf("child is aborting....\n");
		abort();

	}
	else{
		int status;
		printf("the  parent pid is %d and child pid is %d:\n",getpid(),pid);
		
		waitpid(pid,&status,0);

		pid = fork();

 	       if (pid < 0)
       		 {
            		perror("fork");
           		 return 1;
        	}

       		 if (pid == 0)
        	{
           		 // Child 2
           		 printf("Child 2: PID = %d\n", getpid());
           		 printf("Child 2 is running normally...\n");

          		  exit(0);
        	}
       		 else
        	{
           		 // Parent
         		   printf("Parent: Child 2 created, PID = %d\n", pid);

         		   waitpid(pid, &status, 0);

           		 printf("Parent: Child 2 terminated\n");
        	}
    	}

	return 0;
}


