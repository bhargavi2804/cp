
#!/bin/bash
#To store information
#created by bhargavi
# created 1/10/2019

Ans="y"
while [ $Ans = "y" ]
do

echo "enter your idno"
read idno

echo "enter your name"
read name

echo "enter your company"
read company

echo "enter your marks in linux"
read marks1

echo "enter your marks in tools"
read marks2
 
echo "enter your marks in firmware"
read marks3

c=`expr $marks1 + $marks2 + $marks3`
p=`expr $c / 3`

if [ $p -gt 75 ]
then
echo "distinction"

elif [ $p -lt 75 -a $p -gt 65 ]
then
echo "first class"

elif [ $p -lt 65 -a $p -gt 55 ]
then
echo "second class"

elif [ $p -lt 55 -a $p -gt 45 ]
then
echo "third class"

else
echo "fail"
fi

echo "$idno $name $company $marks1 $marks2 $marks3 $c $p ">>employee


echo "enter the name you want to delete"
read name1
cat employee|grep -v "$name1">employ

echo "do you want to continue?"
read Ans

done



