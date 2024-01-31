/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "reverse.h"

int *
reverse_1_svc(reverse *argp, struct svc_req *rqstp)
{
	static int  result;
	size_t n=size_t(argp->str)/size_t(argp->str[0]);
	printf("Reverse function called");
	int i=0;
	for(i=n;i>0;i--){
		result[n-i]=(int)argp->listA[i];
	}
	return &result;
}