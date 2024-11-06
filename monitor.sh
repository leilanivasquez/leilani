#!/bin/bash

echo "Enter a directory you would like to detect the changes too: "

read direct

inotifywait -e create -e modify -e delete -e move -e access $direct
# using inotifywait to show whether anything was created, modified, deleted, moved, or accessed in the directory
# inotifywait, to put it simply, waits for something to happen (whatever you tell it to) then tells you that it happened
