/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct add {
	char matrixA[5];
	char matrixB[5];
};
typedef struct add add;

#define ADD 0x23143211
#define ADD_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  int * add_1(add *, CLIENT *);
extern  int * add_1_svc(add *, struct svc_req *);
extern int add_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  int * add_1();
extern  int * add_1_svc();
extern int add_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_add (XDR *, add*);

#else /* K&R C */
extern bool_t xdr_add ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */
