#pragma once
void GMMfitting(int& components, double*& weights_, double*& logweights_, double* & sumlogdiags_, double*& means, double*& chol_precisions, double* X, int* labels, int n, int d, int init_k, double tol, int maxiter);
