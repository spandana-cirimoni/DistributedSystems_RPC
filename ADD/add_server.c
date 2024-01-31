/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"

int *
add_1_svc(add *argp, struct svc_req *rqstp)
{
	static int  result[5][5];

	printf("Add function called");
	size_t n=size_t(argp->matrixA)/size_t(argp->matrixA[0]);
	size_t m=size_t(argp->matrixB)/size_t(argp->matrixB[0]);
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			result[i][j]=argp->matrixA[i][j]+argp->matrixB[i][j];
		}
	}
	return &result;
}
