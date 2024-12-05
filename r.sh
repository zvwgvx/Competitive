#!/bin/bash

g++ -Wall -std=c++14 -o main main.cpp

start=$(date +%s.%6N)
./main

end=$(date +%s.%6N)

elapsed=$(echo "$end - $start" | bc)
echo
echo "sys'runtime : 0$elapsed seconds"
