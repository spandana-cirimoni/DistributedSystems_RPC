/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "add.h"

bool_t
xdr_add (XDR *xdrs, add *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->matrixA, 5,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->matrixB, 5,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}