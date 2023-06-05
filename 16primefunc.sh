echo Enter a number
read n
d=$(echo "sqrt($n)"|bc)
let flag=0
for((i=2;i<=d;i++))
do
  if [ `expr $n % $i` -eq 0 ]
  then 
    let flag=1
    break
  fi
done
if [ $flag -eq 1 ]
then
  echo $n is not a Prime Number
else
  echo $n is a Prime Number
fi
