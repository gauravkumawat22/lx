echo "enter two numbers"
read num1
read num2

sum=$((num1+num2))
diff=$((num1-num2))
product=$((num1*num2))
quotient=$((num1/num2))

echo "sum: $sum"
echo "diff: $diff"
echo "product: $product"
echo "quotient: $quotient"

echo "enter two strings"
read string1
read string2

concatenate_string="$string1$string2"
echo "concatenate_string: $concatenate_string"


