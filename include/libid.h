
void idz_copycols_(int *m, int *n, double _Complex *a, int *krank,
                   int *list, double _Complex *col);
  
void idz_frmi_(int *m, int *n, double _Complex *w);

void idzp_aid_(double *eps, int *m, int *n, double _Complex *a,
               double _Complex *work, int *krank, int *list, double _Complex *proj);

void idzp_id_(double *eps, int *m, int *n, double _Complex *a, int *krank,
              int *list, double *rnorms);
