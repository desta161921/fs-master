#!/bin/sh

# Script to run the fsReplay feature
# To test, run
#     ./replayTrace.sh fsReplay/dumbell.tr

if [ $# -eq 0 ]
then
    echo "Usage: ./replayTrace.sh <TRACE_FILE>"
    exit
fi

echo "Starting fsReplay for file: $1"
./fsReplay/fsReplay $1
