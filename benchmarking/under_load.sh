#!/bin/bash
# under_load.sh: time any command while every CPU core is kept busy
# usage: ./under_load.sh ./baseline_loop

for i in $(seq 1 "$(nproc)"); do 
	yes > /dev/null &  # 'yes' prints "y" forever: a simple way to keep one core busy
done 

time "$@"      # run and time whatever command you passed in 

kill $(jobs -p)
