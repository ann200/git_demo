#!/bin/bash
echo "scientific calculator"
c=0
s1="y"
echo "enter the first number"
read num1
echo "enter the second number"
read num2
while [ $s1 = "y" ]
do

	echo "1:addition"
	echo "2:subtraction"
	echo "3:multiplication"
	echo "4:division"
	echo "5:modulus"
	echo "enter your choice"
	read ch

		case $ch in
			1) 
				
				c=$(( $num1+$num2 ))
				echo "$c"
				;;
			2)
				
				c=$(( $num1-$num2 ))
				echo "$c"
				;;
			3)
				c=$(( $num1*$num2 ))
				echo "$c"
				;;
			4)
				c=$(( $num1/$num2 ))
				echo "$c"
				;;
			5)
				c=$(( $num1%$num2 ))
				echo "$c"
				;;
			*)
				echo "INVALID ENTRY"
				;;
		esac
	echo "enter y to continue"
	read s1
done

				
