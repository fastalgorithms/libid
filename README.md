# Interpolative Decomposition Library

This is a fork of the ID library 

- P. Martinsson, V. Rokhlin, Y. Shkolnisky, M. Tygert, ID: a software
package for low-rank approximation of matrices via interpolative decompositions,  http://tygert.com/software.html

### Original distribution readme
Please see the documentation in subdirectory doc of this id_dist directory.

At the minimum, please read Subsection 2.1 and Section 3 in the documentation,
and beware that the _N.B._'s in the source code comments highlight important
information about the routines -- _N.B._ stands for _nota_bene_ (Latin for
"note well").

#### Update: Feb 2, 2019
- Removed or commented out `save` statements for OpenMP
compatability. However, these statements still exist in the random
number generation routines in id_rand.f.
- Transferred to www.gitlab.com/fastalgorithms
