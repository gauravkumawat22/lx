echo "enter file_path"
read file_path
if [ -d "$file_path" ]; then
echo "file is a directory"
else
echo "file is not a directory"
fi
