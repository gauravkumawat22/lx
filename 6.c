echo "enter num"
read num

reverse=$(echo $num | rev)

if [ $num -eq $reverse ]; then 

echo "$num is palindrome"
else
echo "$num is not palindrome"
fi
