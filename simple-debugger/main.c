#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ptrace.h>
#include <sys/user.h>

int main() {
    /*int pid;
    int status;
    if ((pid = fork()) == 0) {
        ptrace(PTRACE_TRACEME, 0, NULL, NULL);
        execl("./a.out", "a.out", NULL);
    }
    printf("child: %d\n", pid);
    waitpid(pid, &status, __WALL);
    ptrace(PTRACE_CONT, pid, NULL, NULL);
    while(1) {
        size_t* addr;
        waitpid(pid, &status, __WALL);
        if (WIFEXITED(status)) return 0;
        ptrace(PTRACE_GETREGS, pid, NULL, (void*) addr);    // RIP is the 16th register in the PEEKUSER layout
        unsigned long epc = (unsigned long) &addr;
        printf("epc: %016lx opcode: %02x\n", epc, (unsigned char)ptrace(PTRACE_PEEKTEXT, pid, epc, NULL));
        ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL);
    }*/
    puts("hello");
}
