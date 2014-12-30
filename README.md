cilkplus-rts-src
====================

Cilk runtime modified to work with Cilk tools, including cilkprof and cilksan
race detector.

To install, modify the reconfig.sh file to point CC and CXX to the desired
compiler (either gcc-cilk-ok from the supertech github or llvm-cilk-ok), and
then invoke ./reconfig.sh.  Doing some will install lib/ and include/ in the
same top-level directory that contains this repo (cilkplus-rts-src/).
