n=$1
let m=$((n/2))
for (( i=2; i<=$m; i++))
do
	if  [ $((n % i)) -eq 0 ]
	then 
	echo $n is not a  Prime Number 
	exit 0
	fi
done	
	echo $n is a Prime Number
	




