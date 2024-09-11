#include <iostream>
#include <fstream>
#include <string>

int main() {
    int n;
    std::ifstream infile("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt");
    infile >> n;
    infile.close();

    std::ofstream outfile("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/C++/output.txt");

    for (int i = 0; i <= n / 2; i++) {
        outfile << std::string((n / 2) - i, ' ') + std::string(2 * i + 1, '*') << std::endl;
    }

    for (int i = (n / 2) - 1; i >= 0; i--) {
        outfile << std::string((n / 2) - i, ' ') + std::string(2 * i + 1, '*') << std::endl;
    }

    outfile.close();
    return 0;
}
