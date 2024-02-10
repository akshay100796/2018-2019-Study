

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Read characters from the pipe and echo them to stdout. */

void read_from_pipe (int file)
{
  FILE *stream;
  int c;
  stream = fdopen (file, "r");
  while ((c = fgetc (stream)) != EOF)
    putchar (c);
  fclose (stream);
}

/* Write some random text to the pipe. */

void
write_to_pipe (int file)
{
  FILE *stream;
  stream = fdopen (file, "w");
  fprintf (stream, "hello, This is the OS world!\n");
  fprintf (stream, "goodbye, OS!\n");
  fclose (stream);
}



int
main (void)
{
  pid_t pid;
  int mypipe[2];
  int mypipe1[2];
/* Create the pipe. */
  if (pipe (mypipe))
    {
      fprintf (stderr, "Pipe failed.\n");
      return EXIT_FAILURE;
    }
 if (pipe (mypipe1))
    {
      fprintf (stderr, "Pipe failed.\n");
      return EXIT_FAILURE;
    }


  /* Create the child process. */
  pid = fork (	);
  if (pid == (pid_t) 0)
    {
      /* This is the child process.
 *          Close other end first. */
      close (mypipe[1]);
      read_from_pipe (mypipe[0]);

 //return EXIT_SUCCESS;
printf("\nsucessful readfing from child process");

	close (mypipe1[0]);
      write_to_pipe (mypipe1[1]);
      return EXIT_SUCCESS;

	

    }
  else if (pid < (pid_t) 0)
    {
      /* The fork failed. */
      fprintf (stderr, "Fork failed.\n");
      return EXIT_FAILURE;
    }
  else
    {
      /* This is the parent process.
 *          Close other end first. */
    
 close (mypipe[0]);
      write_to_pipe (mypipe[1]);
  
	close (mypipe1[1]);
      read_from_pipe (mypipe1[0]);
printf("\nsucessful readfing from child process");
return EXIT_SUCCESS;


    }
}

/*output
yashashri@yashashri-Inspiron-3542:~$ cd OS
yashashri@yashashri-Inspiron-3542:~/OS$ gcc pipe.c
yashashri@yashashri-Inspiron-3542:~/OS$ ./a.out
hello, This is the OS world!
goodbye, OS!

sucessful readfing from child processhello, This is the OS world!
goodbye, OS!

sucessful readfing from child process
yashashri@yashashri-Inspiron-3542:~/OS$ 

*/
