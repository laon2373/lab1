#!/bin/bash

dan=2
until [ "$dan" -gt 9 ]
do
    echo "=== ${dan}단 ==="
    num=1
    until [ "$num" -gt 9 ]
    do
        echo "$dan x $num = $((dan * num))"
        num=$((num + 1))
    done
    dan=$((dan + 1))
done
