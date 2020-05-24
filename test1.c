
#include <stdlib.h>  
#include <stdio.h>
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(void)
{

    char names[] = "This is a test for fputs!\n";
    char nums[] = "This is a test for fprintf!\n"; 

    char nnn[20];
    char puts[50];

    int token34 = 40;
    int* p = &token34;

    FILE * fp;
    fp = fopen("test1.txt", "a+");

    // fprintf(fp, nums);
    // fputs(names, fp);
    // fscanf(fp, "%s", nnn);
    
    fgets(puts, 50, fp);
  
    // printf("%s\n", nnn);
    printf("%s", puts);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%d\n", MAX(10,2));

    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));


    message_for(Charlie, Delta);

    tokenpaster(34);

    fclose(fp);

    return 0;
}
