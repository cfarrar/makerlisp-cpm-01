//------------------------------------------------------------------------
// Copyright (c) 2019, Christopher D. Farrar
//------------------------------------------------------------------------
// I here grant permission to any and all to copy and use this software for
// any purpose as long as my copyright message is retained.
//------------------------------------------------------------------------
#include <ez80.h>
#include <stdio.h>
//----------------------------------------------------------------------------
#include "cpmload.h"
#include "mlmhw.h"
//------------------------------------------------------------------------

/* Timeout on VGA ready */
#define WAIT4VGA 2000000

int main()
{
    /* Initialize MakerLisp CPU */
    init_mlmhw();

    /* Start CP/M */
    for ( ;; )
    {
        startCpm();
    }
}
//------------------------------------------------------------------------
