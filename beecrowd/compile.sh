#!/bin/bash

read -p "lang: " LANG

read -p "problem / dir: " DIR

if [ $LANG = "c" ] ; then
    gcc $DIR/main.c -std=c99 -O2 -lm -Werror -Wall -Wextra -Wpedantic && \
    echo done! && \
    ./a.out
fi

if [ $LANG = "go" ] ; then
    go run $DIR/main.go
fi
