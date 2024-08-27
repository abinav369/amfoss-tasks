#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt");
    ofstream outfile("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/C++/output.txt");

    if (infile && outfile) {
        string content((istreambuf_iterator<char>(infile)),
                             istreambuf_iterator<char>());
        outfile << content;
    } else {
        cerr << "Failed to open input.txt or output.txt" << endl;
    }

    infile.close();
    outfile.close();
    return 0;
}
