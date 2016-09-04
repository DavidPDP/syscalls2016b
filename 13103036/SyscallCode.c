#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <fcntl.h>

main() {
    printf("Soy una máquina con oráculo\n");
    int infectado = fork();
        if(infectado == 0){
            time_t fugaz = time(NULL);
            printf("La velocidad del rasho: ");
            printf(ctime(&fugaz));
        }
        else{
            wait(0);
            printf("Final...\n");
            int parcialApoUno = creat("PreguntaParcialSegura", 0600);
            write(parcialApoUno, "Pregunta 1. ¿p=np?", 18);
        }
}
