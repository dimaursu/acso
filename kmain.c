#include "lib/io.c"
#include "lib/kbd.c"
#include "lib/video.c"

int main( void )
{
  char command[200];
    for(;;)
    {
      puts("Enter a command:$");
      gets(command);
      puts("\nYou typed:\n");
      puts(command);
      puts("\n");
    }

}
