#!/bin/bash
echo"What is the day of the week?:"
select a in mon tue wed thu fri sat sun;
do
echo "You selected $a"
break
done
