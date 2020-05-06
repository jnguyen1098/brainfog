#!/bin/bash

for f in test/input/*.bf
do
    rm -rf tmp_output
    echo "Processing file $f..."
    ./fog $f tmp_output
    cmp tmp_output test/output/`basename $f`
done

