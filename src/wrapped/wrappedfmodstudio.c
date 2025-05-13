#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

#include "generated/wrappedfmodstudiodefs.h"

const char* fmodstudioName = "libfmodstudio.so.13";
#define LIBNAME fmodstudio
#define ALTNAME "libfmodstudio.so"

#include "generated/wrappedfmodstudiotypes.h"

#include "wrappercallback.h"

// Insert code here

#include "wrappedlib_init.h"