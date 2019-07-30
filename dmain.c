/* DUNGEON-- MAIN PROGRAM */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#define EXTERN
#define INIT

#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <stdio.h>
#include "common/debugScreen.h"

#include "funcs.h"
#include "vars.h"


void main(argc, argv)
int argc;
char **argv;
{
/* 1) INITIALIZE DATA STRUCTURES */
/* 2) PLAY GAME */

#ifdef VITA
#define printf psvDebugScreenPrintf
psvDebugScreenInit();
printf("Hello, world!\n");

sceKernelDelayThread(3*1000000); // Wait for 3 seconds
sceKernelExitProcess(0);
#endif

    if (init_()) {
	game_();
    }
/* 						!IF INIT, PLAY GAME. */
    exit_();
/* 						!DONE */
} /* MAIN__ */
