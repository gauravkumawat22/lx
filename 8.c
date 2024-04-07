echo "enter a pattern"
read pattern

echo "enter a file to search"
read filename

if grep -q "$pattern" "$filename"; then
echo "pattern found in file"
else
echo "patten not found in file"
fi

