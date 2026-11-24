#include <iostream>
#include <unistd.h>

int main() {

    pid_t x = fork();

    if (x == 0) {
        std::cout << "child process returned";
    }
    else {
        std::cout << "parent process returned";
    }


}
