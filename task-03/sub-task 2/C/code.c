#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *infile, *outfile;
    char buffer[256];

    infile = fopen("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt", "r");
    if (infile == NULL) {
        perror("Failed to open input.txt");
        return 1;
    }

    outfile = fopen("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/C/output.txt", "w");
    if (outfile == NULL) {
        perror("Failed to open output.txt");
        fclose(infile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), infile) != NULL) {
        fputs(buffer, outfile);
    }

    fclose(infile);
    fclose(outfile);
    return 0;
}
