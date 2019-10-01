#loops
#while

Ans="y"
while [ $Ans = "y" ]
do
#clear

echo "enter your idno"
read idno

echo "enter your name"
read name

echo "enter your company"
read company


echo "do you want to continue?"
read Ans

done

#for loop
for i in 1 2 3 4 5 
do
echo $i
done

echo "enter which table"
read n

for i in `seq 10`
do
echo "$n*$i= `expr $n \* $i`"
done

