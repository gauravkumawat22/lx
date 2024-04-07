echo "enter 1st num"
read n1
echo "enter 2nd num"
read n2
m=$n1
n=$n2
r=$n2
while [ $r - ne 0 ]; do
r=$((n1%n2))
if [ $r -eq 0 ]; then
break
else
((n1=$n2))
((n2=$r))
fi 

done
echo "gcd of %d and %d is %d/n" $m $n $n
echo "lcm of %d and %d is %d/n" $m $n $((($m*$n)/$n2))



