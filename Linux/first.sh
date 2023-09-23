#!/bin/bash

read -p "Enter Value of first integer:" a
read -p "Enter Value of second integer:" b
if [ $a -eq $b ]
then 
echo "a is equal to b"
fi
if [ $a -ne $b ]
then 
echo "a is not equal to b"
fi
