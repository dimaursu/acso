#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 24
#define SCREEN_MAX_CHAR 1920
#define SCREEN_MAX_MEM 3840

#define BLACK          0x00
#define BLUE           0x01
#define GREEN          0x02
#define CYAN           0x03
#define RED            0x04
#define MAGENTA        0x05
#define BROWN          0x06
#define LIGHT_GRAY     0x07
#define DARK_GRAY      0x08
#define BRIGHT_BLUE    0x09
#define BRIGHT_GREEN   0x0A
#define BRIGHT_CYAN    0x0B
#define BRIGHT_RED     0x0C
#define BRIGHT_MAGENTA 0x0D
#define BRIGHT_YELLOW  0x0E
#define BRIGHT_WHITE   0x0F


char color = 0x07;
int position = 0;

int putc( char c)
{
    char* vidmem = (char *) 0xb8000; //a pointer to video memory
    vidmem[position] = c;
    vidmem[position++] = color; //setting the color; we could just use 0x7, gray text on black background; 
    position = position +1; 
    return 0;
}

int puts( char* string )
{
   int i;
   while(*string)
   {
       putc(*string++);
       i++;
   }
   return i;
}
