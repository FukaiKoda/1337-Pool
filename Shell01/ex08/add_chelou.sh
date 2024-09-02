# !/bin/sh

NUM1=$(echo "$FT_NBR1" | tr "'" '0' | tr '\' '1' | tr '"' '2' | tr '?' '3'| tr "!" '4')
NUM2=$(echo "$FT_NBR2" | tr "m" '0' | tr 'r' '1' | tr 'd' '2' | tr 'o' '3'| tr "c" '4')
RES=$(echo "obase=13 ; ibase=5; $NUM1 + $NUM2" | bc)

echo $RES |tr '0123456789ABC' 'gtaio luSnemf'
