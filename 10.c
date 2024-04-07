if [ $# -eq 0 ];then
echo "no arguments"
exit 1
fi

for ((i=$#;i>0;i--)); do
echo "${!i}"
done
