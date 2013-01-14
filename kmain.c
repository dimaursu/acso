#include "lib/io.c"
#include "lib/kbd.c"
#include "lib/video.c"
#include "lib/longjmp.c"


int main( void )
{
 // char command[200];
  char name[40];
    for(;;)
    {
      /*puts("Enter a command:$");
      gets(command);
      puts("\n");*/
      puts("insert here:");
      gets(name);
      puts("\n");
      cmd_hello(name);

    }

}
