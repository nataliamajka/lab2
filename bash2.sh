#!/bin/bash
 
for FILE in $(ls ~);
do
    if [ -r $FILE ]; then
        echo "Czy wyswietlic plik $FILE ?[TAK/NIE]"
        read odpowiedz
        if [ $odpowiedz = "TAK" ]; then
        cat $FILE
        else
        echo "Plik zostanie wyslany mailem"
        fi
    fi
done
