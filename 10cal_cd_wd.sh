echo Press 1 to print the content of the current folder
echo Press 2 to show the present working directory
echo Press 3 to show the calender
echo Press 4 to exit
read ch
until [ $ch -eq  0 ]
do
case $ch in
1)ls;;
2)pwd;;
3)cal;;
4) echo exiting 
exit;;
*)echo "WRONG COICE"
esac 
read -p "enter your choice" ch
done
