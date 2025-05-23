#include <stdio.h>
#include "debug.h"
#include "box64version.h"
#define GITREV "nogit"

void PrintBox64Version()
{
    printf_ftrace(1, "Box64%s%s v%d.%d.%d %s built on %s %s\n",
    #ifdef HAVE_TRACE
        " with trace",
    #else
        "",
    #endif
    #ifdef DYNAREC
        " with Dynarec",
    #else
        "",
    #endif
        BOX64_MAJOR, BOX64_MINOR, BOX64_REVISION,
        GITREV,
        __DATE__, __TIME__);
}

