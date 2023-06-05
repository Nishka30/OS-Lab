let rev=0
n=$1
for ((i=n ;i>0 ;i/=10 ))
do
rev=$((rev*10)) 
rev=$((rev+i%10))
done 
echo The orignal number is $n
echo The reverse of the number is $rev
