#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char **argv) {
    int cosine = 0;
    int sine = 0;
    int index;
    int c;

    while ((c = getopt (argc, argv, "cs")) != -1)
    	switch (c) 
    {
    	case 'c':
    		cosine = 1;
    		break;
    	case 's':
    		sine = 1;
    		break;
    	case '?':
    		fprintf(stderr, "saule owibka\n");	
    		return 1;
    	default:
    		abort();
    }
    for (index = optind; index < argc; index++) {
    	if (!sine && !cosine)
    	{
    		/* code */
    		printf("%f\n", sin(atof(argv[index])));
    		printf("%f\n", cos(atof(argv[index])));
    	}
    	else {
    		if (sine)
    		{
    			printf("%f\n", sin(atof(argv[index])));
    		}
    		if (cosine)
    		{
    			printf("%f\n", cos(atof(argv[index])));
    		}
    	}
    	break;
    }
    return 0;
}