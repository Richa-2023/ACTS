#!/bin/bash
echo "Enter the upper limit: "
read num
if [ $num -lt 1 ] || [ $num -gt 100 ]
then
echo "input number is out of range"
else
echo " PID of the current script: $$"
for (( i=$num; i>=1; i-- ))
do
echo $i
done
fi
