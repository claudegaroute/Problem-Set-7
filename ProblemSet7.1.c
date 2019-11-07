#include <stdio.h>

int main(){

    FILE* f = popen("gnuplot --persist -e \"plot '< head -100 sine.dat' u 1:2 w lines,\"", "r"); 
    fprintf(f,"\n"); 

    return 0;
}