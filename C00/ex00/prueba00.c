
#include <unistd.h>

int main(void)
{
    write(1, &"Hola", 4);
}