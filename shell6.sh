
echo "enter name"
read name
cat employee | grep "$name"
id=`cat employee | grep "$name" | cut -d" " -f1`
comp=`cat employee | grep "$name" | cut -d" " -f3`

echo "enter your marks in linux"
read marks1

echo "enter your marks in tools"
read marks2
 
echo "enter your marks in firmware"
read marks3

c=`expr $marks1 + $marks2 + $marks3`
p=`expr $c / 3`
cat employee|grep -v "$name">employ

echo "$id $name $comp $marks1 $marks2 $marks3 $c $p">>employ


