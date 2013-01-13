#include "lib/io.c"
#include "lib/kbd.c"
#include "lib/video.c"

int main( void )
{
  char command[30];
  putc('q');
  puts("trololoololololooloo");
  puts("aceasta e o linie mult mai lunga ca de obicei. sa vedem daca are 80 caracterei. 77. mai trebuie cateva. de fapt sunt destule. am prevazut deja line wrapping");
  puts("aici ar trebui sa fie un newline\n");
  puts("enter your command here $\n");
  puts("string ads\n");
  puts("this should be on a new line");
  clrscr();
  gets(command);
  puts(command);

  for(;;);
}
