sum=0
n=$1
n1=$n
while [ $n -ne 0 ]
do
mod=`expr $n % 10`
sum=`expr $sum + $mod`
n=`expr $n / 10`
done 
echo the sum of the digits of $n1 is $sum
