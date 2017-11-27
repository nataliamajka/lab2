#!/bin/bash
while [ -f "$1" ]
do
   sort $1 > "sorted.data$1"
   shift
done
