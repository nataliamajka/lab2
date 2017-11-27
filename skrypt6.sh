#!/bin/bash
if [ ! -f "$1" ]
then
	echo "$1 nie jest plikiem!"
	break
fi
zrodlo=$1
while [ -d "$2" ]
do
	cp $zrodlo $2
	shift
done
