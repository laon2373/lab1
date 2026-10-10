#!/bin/bash

count=$(ls -l | grep '^-' | wc -l)
echo "파일 개수: $count"
