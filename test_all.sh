#!/bin/bash

for f in test/input/*.bf
do
    echo "Processing file $f..."
    ./cns $f > tmp_output
    diff tmp_output test/output/`basename $f`
    rm -rf tmp_output
done

