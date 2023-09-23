#!/bin/bash
read -p "String1: " str1
read -p "String2: " str2

if [[ "${str1^^}" == "${str2^^}" ]];then
echo "Strings are EQUAL"
else
echo "Strings Are NOT EQUAL"



fi
