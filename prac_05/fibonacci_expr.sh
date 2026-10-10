#!/bin/bash

a=0
b=1

echo "피보나치 수열 (10개 항):"

for ((i=0; i<10; i++))
do
    printf "%s " "$a"
    next=$(expr "$a" + "$b")
    a=$b
    b=$next
done

echo
