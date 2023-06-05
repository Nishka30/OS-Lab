echo Enter a String 
read str
uc=0
lc=0
v=0
d=0
s=0
len=`expr length "$str"`
for ((i=0 ;i<len ;i++ ))
do
  ch=`expr substr "$str" $i 1`
  case $ch in
  A|E|I|O|U|a|e|i|o|u)v=$((v+1))
  esac
  case $ch in
  [A-Z])uc=$((uc+1));;
  [a-z])lc=$((lc+1));;
  [0-9])d=$((d+1));;
  *)s=$((s+1))
  esac
done
echo Length of the String is $len
echo No. of Vowels is $v
echo No. of Upper Case is $uc
echo No. of Lower Case is $lc
echo No. of Digits is $d
echo No. of Special Charecter is $s
