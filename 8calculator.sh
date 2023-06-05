while [ 1 ]
do


	echo "Press 1 to add two numbers"
	echo "Press 2 to subtract two numbers"
	echo "Press 3 to multiply two numbers"
	echo "Press 4 to divide two numbers"
	echo "Press 5 to exit"
	echo "Enter your choice(1-5):"
	read ch
	if [ $ch -ne 5 ]
	then 
		echo "enter first number"
		read a
		echo "enter second number"
		read b
	fi
	case $ch in
	1)echo "sum=`expr $a + $b`";;
	2)echo "difference=`expr $a - $b`";;
	3)echo "product=`expr $a \* $b`";;
	4)if [ $b -ne 0 ]
		then ans=$(echo "scale=3; $a/$b;" | bc)
		echo "qoutient = $ans"
	else 
		echo "cannot divide by zero"
		fi;;
	5)exit;;
	*)echo "wrong Choice"
	esac
	
	
done
	

