function reverse ()
{

while [ $n -ne 0 ]
do
 r=$((n%10))
 rev=$(((rev*10)+r))
 n=$((n/10))
done
echo Reverse No:$rev
}

n=$1
reverse $n
