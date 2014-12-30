#!/bin/sh
TOP_DIR=`pwd`
INSTALL_DIR=`dirname "$TOP_DIR"`

if [ -d $INSTALL_DIR ]; then
    echo "Configuring Cilk install directory to be $INSTALL_DIR"
else
    echo "Creating Cilk install directory $INSTALL_DIR"
    mkdir $INSTALL_DIR
fi
libtoolize
aclocal
automake --add-missing
autoconf
./configure CC="../../llvm-cilk-ok/bin/clang" CXX="../../llvm-cilk-ok/bin/clang++" --prefix=$INSTALL_DIR
