#!/bin/bash
cut -f1 -d : /etc/passwd > plik.txt
najdluzszy="root"
najkrotszy="root"
while read tekst;
do
    if [ ${#tekst} -gt ${#najdluzszy} ]
    then
    najdluzszy=$tekst
    fi
    if [ ${#tekst} -lt ${#najkrotszy} ]
    then
    najkrotszy=$tekst
    fi
done < plik.txt
echo "Najdluzsza nazwa: $najdluzszy  Najkrotsza nazwa $najkrotszy "
rm -r plik.txt

