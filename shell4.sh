echo "enter 2 numbers"
read num1 
read num2

while [ 1 ]
do
echo "enter your choice 1)add 2)sub 3)div 4)mul 5)exit "
read choice

case $choice in
	1)echo "sum is `expr $num1 + $num2`";;
	
	
	2)echo "diff is `expr $num1 - $num2`";;
	

	3)
	echo "division is `expr $num1 / $num2`";;

	
	4)echo "product is `expr $num1 \* $num2`";;
	
	
	*)exit;;
esac
done
