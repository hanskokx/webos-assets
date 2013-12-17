#!/bin/bash

function getopt_simple()
{
    until [ $# -eq 0 ]
    do
        eval ${1##*-}='$2'
        shift 2
    done
}

# Simulate the command line
set -- --file myfile.txt -depth 3 -width 72 --name "Hai Vu"
 
# Parse the command line
getopt_simple "$@"
 
# Now show the variables
echo "file  = $file "
echo "depth = $depth"
echo "name  = $name "