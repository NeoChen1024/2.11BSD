#if	!defined(lint) && defined(DOSCCS)
static char sccsid[] = "@(#)wwerror.c	3.3.1 1996/3/22";
#endif

/*
 * Copyright (c) 1983 Regents of the University of California,
 * All rights reserved.  Redistribution permitted subject to
 * the terms of the Berkeley Software License Agreement.
 */

#include "ww.h"

char *
wwerror()
{
	extern errno;

	switch (wwerrno) {
	case WWE_NOERR:
		return "No error";
	case WWE_SYS:
		return strerror(errno);
	case WWE_NOMEM:
		return "Out of memory";
	case WWE_TOOMANY:
		return "Too many windows";
	case WWE_NOPTY:
		return "Out of pseudo-terminals";
	case WWE_SIZE:
		return "Bad window size";
	case WWE_BADTERM:
		return "Unknown terminal type";
	case WWE_CANTDO:
		return "Can't run window on this terminal";
	default:
		return "Unknown error";
	}
}
