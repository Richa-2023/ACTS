#!/bin/bash
echo "Enter String"
read string
if [[ $string =~ ^[A-Z]+$ ]];then
echo "The input string is in all uppercase."
elif [[ $string =~ ^[a-z]+$ ]];then
echo "The string is in all lower case."
elif [[ $string =~ ^[a-zA-Z]+$ ]];then
echo " The input is in mixed case."
else
echo "invalid input"
fi
