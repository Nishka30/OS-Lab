function sum()
{
  while [ $n -ne 0 ]
  do
    let r=$((n%10))
    let s=$((s+r))
    let n=$((n/10))
  done
    echo The sum is :$s
    }
n=$1
sum $n
