#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>


void print_chars__int(char str[]) {
    printf("Code points as decimal numbers: ");
    for (int i = 0; i < sizeof(str); i++){
        if(str[i] == '\0'){
            break;
        
        }
        printf("%d ",(int)str[i]);
    }
}


int main(int argc, char** argv) {
/*        if (argc != 2) {
            fprintf(stderr, "Usage: utf8analyzer \"<UTF-8 encoded string>\"\n");
            return 1;
        }*/

        //Code points as decimal numbers
        char buffer[100];
        while(1) {
                char* maybe_eof = fgets(buffer, sizeof(buffer), stdin);
                if(maybe_eof == NULL) { break; }

                // Remove newline if present
                size_t len = strlen(buffer);
                        if (len > 0 && buffer[len-1] == '\n') {
                        buffer[len-1] = '\0';
                }

                print_chars__int(buffer);
        }
        
        // implement the UTF-8 analyzer here

}
