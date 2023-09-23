#!/bin/bash
read -p "String1: " str1
read -p "String2: " str2

lower_case1=$( echo "$str1" | tr'[:upper:]' '[:lower:]' )
lower_case2=$( echo "$str2" | tr'[:upper:]' '[:lower:]' )


if [[ "$lower_case1" == "$lower_case2" ]];then
echo "Strings are EQUAL"
else
echo "Strings Are NOT EQUAL"

fi
