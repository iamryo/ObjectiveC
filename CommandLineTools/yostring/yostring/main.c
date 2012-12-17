//
//  main.c
//  yostring
//
//  Created by Ryan Clark on 12/17/12.
//  Copyright (c) 2012 Ryan Clark. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char x = '!'; // The character '!'
    
    while (x <= '~') { // The character '~'
        printf("%x is %c\n", x, x);
        x++;
    }
    
    // Get a pointer to 5 bytes of memory in the heap
    char *start = malloc(5);
    
    start[0] = 'L';
    start[1] = 'o';
    start[2] = 'v';
    start[3] = 'e';
    start[4] = '\0';
    
    // Print out the string and its length
    printf("%s has %zu characters\n", start, strlen(start));
    
    // Print out the third letter
    printf("The third letter is %c\n", start[2]);
    
    // Free the memory so that is can be reused
    free(start);
    start=NULL;
    return 0;
}

