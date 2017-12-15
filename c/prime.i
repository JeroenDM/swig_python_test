/* prime.i */
%module prime
%{
extern int is_prime(int n);
%}
extern int is_prime(int n);