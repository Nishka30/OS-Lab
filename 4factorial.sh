echo enter the number
read n
let p=1
for((i=n;i>=2;i--))
do
  let p=p*i
done
echo factorial using for= $p
let p=1
while [ $n -ge 2 ]
do
  let p=p*n
  let n=n-1
done
echo factorial using while = $p
