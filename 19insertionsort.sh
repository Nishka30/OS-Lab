read -p "Enter the number of terms:" n
echo Enter the Array
for ((i=0 ;i<n ;i++ ))
  do
    read arr[i]
  done
echo "array before Sorting"
for ((i=0 ;i<n ;i++ ))
  do
    echo -n ${arr[i]} ","
  done
echo
for ((i=0 ;i<$n ;i++ ))
do
  temp=${arr[i]}
  for ((j=i-1 ;$j>=0 && $temp<${arr[$j]} ;j--)) 
  do
    arr[j+1]=${arr[j]}
  done
  arr[j+1]=$temp
done
echo "array after Sorting"
for ((i=0 ;i<n ;i++ ))
  do
    echo -n ${arr[i]} ","
  done
echo		
