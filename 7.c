echo "enter a  num"
read num
is_prime=true

if [ $num -lt 2 ]; then
is_prime=false

fi

for((i=2;i*i<=num;i++)); do
if [ $((num % i)) -eq 0 ]; then
is_prime=false
break
fi
done

if $is_prime; then
echo "$num is a prime number"
else
echo "$num is not a prime number"
fi
