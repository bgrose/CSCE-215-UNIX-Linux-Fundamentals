#!/bin/bash
# findName.sh 
# 215 Final Project Bradley Grose

#Checks for Input
if [ $# -ne 1 ]; then
	echo "Error. This must be 1 argument"
	exit 1
fi

studentusername=$1
input="/acct/common/CSCE215"
while IFS="," read -r line a b c d 
do
	if [ $1 == $c ]; then
		echo "$line $a $b"
		exit 0
	fi

done < "$input"
echo "Sorry that person is not in CSCE215 this semester"
