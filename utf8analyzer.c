#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
// initialized codepoint helper
int codepoint_size( unsigned char uc );

<<<<<<< HEAD
uint8_t is_ascii(char str[]) {
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] > 127) {
			return 0;
	} else { 
		return 1;
	    }
	}
}

int32_t utf8_cplen(char str[]) {
	int32_t cplen = 0;
	int i = 0;
	while (str[i] != '\0') {
		unsigned cbyte = (unsigned char) str[i];
	       if ((cbyte < 0x80)) {
	       i += 1;
	       } else if ((cbyte & 0xE0) == 0xC0) {
		i += 2;
	       } else if ((cbyte & 0xF0) == 0xE0) {
       		i += 3;
	       } else if ((cbyte & 0xF8) == 0xF0) {
       		i += 4;
	       } else {
       		i += 1;
	       } 
		cplen++;
	}
return cplen;
}

void str_animal_emoji(const char str[]) {
	int len = strlen(str);
	unsigned char bin[len];
	int ct = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		if ((str[i] >= '🐀' && str[i] <= '🐿️') && (str[i] >= '🦀' && str[i] <= '🦮')) {
			bin[0 + ct] = str[i];
		}
	}
	for (int i = 0, bin[i] != '\0'; ++i) {                                 printf("%s", bin[i])
	}
}



int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: utf8analyzer \"<UTF-8 encoded string>\"\n");
        return 1;
    }	
    
printf("%d %d", (is_ascii(argv[1])), (is_ascii(argv[1])));
printf("%s %d\n", "Number of code points:", utf8_cplen(argv[1]));    

printf("%s ", "Animal emojis: ");
str_animal_emoji(argv[1]);
}
// implement the UTF-8 analyzer here
/*if (is_ascii(argv[1]) == 0) {
    printf("%s \n", "false");
    } else {
    printf("%s \n", "true");
    } 
*/
 }

// 2. Capitalize ASCII
void capitalize_ascii( char str[] ) {
     for ( int i = 0; str[i] != '\0'; i++ ) {
	     
	     if ( str[i] <= 'z' && str[i] >= 'a' ) {
		str[i] -= 32;
	     }

     }
}

// 3. Length of String in bytes
int32_t byte_strlen( char str[] ) {
	int32_t length = 0;
	int i = 0;

	while ( str[i] != '\0' ) {
		unsigned char uc = ( unsigned char ) str[ i ];
		if ( uc <= 0x7F )  {
			i += 1;
		}
		else if ( ( uc & 0xE0 ) == 0xC0 ) {
			i +=2;
		}
		else if ( ( uc & 0xF0 ) == 0xE0 ) {
			i += 3;
		}
		else if ( ( uc & 0xF8 ) == 0xF0 ) {
			i += 4;
		}
		else {
			return -1;
		}
		length++;
	}
	return length;
}
// 6. Codepoint byte count
void codepoint_bytes( char str[] ) {
	int i = 0;
	while ( str[i] != '\0' ) {
	int codepointSize = codepoint_size( ( unsigned char ) str[ i ] );
	if ( codepointSize == -1 ) {
		return;
	}

	i += codepointSize;
	}
}
// codepoint helper method: 
int codepoint_size( unsigned char uc ) {
	if ( uc <= 0x7F ) {
            return 1;
        }
        else if ( ( uc & 0xE0 ) == 0xC0 ) {
            return 2;
        }
        else if ( ( uc & 0xF0 ) == 0xE0 ) {
            return 3;
        }
        else if ( ( uc & 0xF8 ) == 0xF0 ) {
            return 4;
        }
        else {
            return -1;
        }
}


//Code points as decimal numbers
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

    // implement the UTF-8 analyzer here
}
