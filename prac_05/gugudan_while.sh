#!/bin/bash

dan=2
while [ "$dan" -le 9 ]
do
    echo "=== ${dan}단 ==="
    num=1
    while [ "$num" -le 9 ]
    do
        echo "$dan x $num = $((dan * num))"
        num=$((num + 1))
    done
    dan=$((dan + 1))
done
