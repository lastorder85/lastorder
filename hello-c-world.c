#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
main() {
    int i=0,a;
 srand(time(0));
    for(i=0;i<100;++i)
    {
        
        a=rand()%101;
        printf("%d\n",a);
    }
}
