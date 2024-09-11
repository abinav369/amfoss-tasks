#include <stdio.h>

int main() {
    int n;
    FILE *infile, *outfile;

    infile = fopen("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt", "r");
    fscanf(infile, "%d", &n);
    fclose(infile);

    outfile = fopen("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/C/output.txt", "w");

    for (int i = 0; i <= n / 2; i++) {
        for (int j = 0; j < (n / 2) - i; j++) fprintf(outfile, " ");
        for (int j = 0; j < 2 * i + 1; j++) fprintf(outfile, "*");
        fprintf(outfile, "\n");
    }

    for (int i = (n / 2) - 1; i >= 0; i--) {
        for (int j = 0; j < (n / 2) - i; j++) fprintf(outfile, " ");
        for (int j = 0; j < 2 * i + 1; j++) fprintf(outfile, "*");
        fprintf(outfile, "\n");
    }

    fclose(outfile);
    return 0;
}
