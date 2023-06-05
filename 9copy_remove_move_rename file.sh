echo Enter 1 to copy a file
echo Enter 2 to remove a file
echo Enter 3 to move a file 
echo Enter 4 to remane a file
read ch
case $ch in
1)pwd
  ls
  echo enter src file
  read a
  echo enter target directory
  read b
  cp $a $b
  echo $a "Copied to " $b
  cd $b
  ;;
2)pwd
  ls
  echo enter src file
  read a b
  cd $b
  rm $a
  echo remove done
  echo inside $b
  ls
  cd ..
  ;;
3)pwd
  ls
  echo enter src file
  read a 
  echo enter target directory
  read b
  mv $a $b
  echo $a "moved to " $b
  cd $b
  ls
  cd ..
  ;;
4)pwd
  echo enter src file
  read a
  echo enter new name
  read b
  mv $a $b
 
  ls
 
  ;;
*)
  echo "Wrong Choice!!"
  ;;
esac
