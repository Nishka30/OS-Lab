echo Enter three numbers:
read a
read b
read c
let s=$((a+b+c))

if [ $a -gt $b -a $a -gt $c ] || [ $a -lt $b  -a  $a -lt $c ]
then
  s=$((s-a))
fi

if [ $b -gt $a -a $b -gt $c ] || [ $b -lt $a -a $b -lt $c ]
then
 s=$((s-b))
fi

if [ $c -gt $a -a $c -gt $b ] || [ $c -lt $a -a $c -lt $b ]
then
 s=$((s-c))
fi
echo The second largest is : $s
