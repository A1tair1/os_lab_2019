#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
                                                                                        
int main(int argc, char* argv[]) {   
    int pid = fork(); // Идентификатор процесса

    if (pid < 0)
    {
        printf("An error has occured\n");
    }
	if (pid == 0) {                                
        execv("sequential_min_max", argv); // непосредственно запуск 
        return 0;
    }
    wait(NULL);
    return 0;
}