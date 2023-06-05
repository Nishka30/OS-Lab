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
for ((i=0 ;i<$((n-1)) ;i++ ))
do
  for ((j=0;j<$((n-i-1)) ;j++ ))
  do
    if [ ${arr[j]} -gt ${arr[$j+1]} ]
    then
      temp=${arr[j]}
      arr[j]=${arr[j+1]}
      arr[j+1]=$temp
    fi
  done
done
echo "array after Sorting"
for ((i=0 ;i<n ;i++ ))
  do
    echo -n ${arr[i]} ","
  done
echo
