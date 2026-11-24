#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    pid_t x = fork();

    int status{};

    if (x == 0) {
        std::cout << "child: not done yet \n";
    }
    else {
        waitpid(x, &status, 0);
        std::cout << "parent: child process finished \n";

    }





}
