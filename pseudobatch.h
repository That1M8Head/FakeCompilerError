#include <cstdlib>

/* This is the actual C++ code that will be executed upon successful "activation".
For the proper batch file experience, system() functions have been used.
You can directly translate a batch file this way, as long as you don't mind it being line by line. */

static const char* BatchString =
    "echo Hello, World!\n"
    "pause";

void runBatchFile()
{
    system(BatchString);
}