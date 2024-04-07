"enter in lowercase"
read inputstring

uppercase_string=$(echo "$inputstring1" | tr '[:lower:]' '[:upper:]')
echo "uppercase version:$uppercase_string"
