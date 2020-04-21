#!/bin/bash
# findName.sh 
# 215 Final Project Bradley Grose

#Checks for Input
if [ $# -ne 1 ]; then
	echo "Command line arguments are not equal to 1"
	exit 1
fi

#Searches for Student
studentusername=$1
input="/acct/common/CSCE215"
while IFS="," read -r line a b c #Line reader
do
	if [ $1 == $c ]; then  #Checks for the ID
		echo "$line $a $b" #found
		exit 0
	fi

done < "$input"
echo "Sorry that person is not in CSCE215 this semester" #Not found
