#include "revert_string.h"
#include <string.h>

extern void RevertString(char *str)
{
	// your code here
    int i;
    int length = strlen(str);
    for(i = 0;i < length/2; ++i)
    {
        char temp;
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;

    }
}