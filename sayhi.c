#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

int main(int argc, char **argv) {
    int c;
    opterr = 0;

 static struct option long_options[] = {
        {"rus",      optional_argument,       0,  's' },
        {"kaz", optional_argument,       0,  'z' },
        {"name", optional_argument,   0,  'n' },
        {"r", optional_argument,   0,  'r' },
        {"k", optional_argument,   0,  'k' }
    };

 int long_index =0;
while ((c = getopt_long (argc, argv, "kk:rr:szn:",long_options, &long_index)) != -1)
        switch (c) 
    {
        case 'k':
            printf("salem "); 
            break;
        case 'r':
            printf("privet "); 
            break;
        case 's':
            printf("privet\n"); 
            break;
        case 'z':
            printf("salem\n"); 
            break;
            case 'n':
            printf("%s\n", optarg); 
            break;
        case '?':
            fprintf(stderr, "kalen error\n");   
            return 1;
        default:
            abort();
    }

    return 0;
}

