/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "reverse.h"

bool_t
xdr_reverse (XDR *xdrs, reverse *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->str, 10,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
