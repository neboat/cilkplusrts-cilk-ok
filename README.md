cilkplus-rts-src
====================

Cilk runtime modified to work with Cilk tools, including cilkprof and cilksan
race detector.

To install, modify the reconfig.sh file to set CC and CXX to where the desired
compiler is installed (either gcc-cilk-ok from the supertech github or llvm-cilk-ok), 
and invoke ./reconfig.sh.  Doing so will install the associated lib/ and include/ 
for Cilk Plus runtime in the same top-level directory that contains this repo 
(cilkplus-rts-src/).
