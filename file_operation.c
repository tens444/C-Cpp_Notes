#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    
    if(NULL == (fp = fopen("1.in", "w")))   //a good habit of putting NULL at beginning.
    {
        printf("Cannot open the file.");
        exit(0);                            //exit normally. just cuz file error.
    }

    char str[10];
    int n;
    fgets(str, n, fp);  //get (n-1) chars from str[] into fp and add '\n' at last.
                        //stop if str[] newlined before (n-1) chars.
    fputs(str, fp);     //put str[] into fp only.

    int a;
    fscanf(fp, "format-like-%d", &a);
    fprintf(fp, "format-like-%d", a);   //IO operations formally for text files.

    char *p;
    int x, y;
    fread(p, x, y, fp);     //IO operations in binary for binary files.
    fwrite(p, x, y, fp);    //read or write y bunches of x bytes.

    fclose(fp);     //do something in the end when working with files.
    return 0;
}
