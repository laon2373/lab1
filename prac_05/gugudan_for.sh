#!/bin/bash

for ((dan=2; dan<=9; dan++))
do
    echo "=== ${dan}단 ==="
    for ((num=1; num<=9; num++))
    do
        echo "$dan x $num = $((dan * num))"
    done
done
