echo Enter the number of rows:
read n 
for (( i=0; i<n; i++))
do 
	for (( j=n; j>i; j--))
	do
		echo -n "  "
	done
		for (( k=0; k<=i; k++))
		do
		echo -n " *"
	done 
	echo 
done	
