#include <stdio.h>
#include <sndfile.h>


int main(){

    SNDFILE *sndFile;
    SF_INFO sfInfo;

//I'm actually not sure why libsndfile is needed for this particular problem since sox can be run externally. This completes the objective, but perhaps it is not implemented correctly?
    FILE* f = popen("sox sine.wav sine10.wav tempo 0.2", "r"); 

    return 0;
}

