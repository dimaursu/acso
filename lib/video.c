#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 24
#define SCREEN_MAX_CHAR 1920
#define SCREEN_MAX_MEM 3840

int position = 0;

void putc( char c)
{
    char *vidmem = (char *) 0xb8000; //a pointer to video memory
    vidmem[position] = c;
    vidmem[position+1] = 0x7; 
    position = position +2;
}

void puts( char *string )
{
  int i=0;
   while(string[i] != '\0')
   {
       putc(string[i]);
       i++;
   }
}

int clrscr()
{
    int i = 0;
    char *vidmem = (char*) 0xb800; 
    for(i=0; i<200; i++)
    {
       vidmem[i] = ' ';
    }
    return 0;
}

char* gets(char *c)
{

  return *c;
}
