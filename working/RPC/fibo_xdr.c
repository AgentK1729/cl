/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "fibo.h"

bool_t
xdr_input (XDR *xdrs, input *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->n))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->c))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_output (XDR *xdrs, output *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->result))
		 return FALSE;
	return TRUE;
}