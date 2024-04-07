echo "enter username"
read username

echo "enter password"
read password

valid_username="user"
valid_password="password"

if [ "$username" == "$valid_username" ] && [ "$password" == "$valid_password" ]; then
echo "login success"
else
echo "login unsuccess"
fi
