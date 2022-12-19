echo "Enter File"
read str 
if test -f $str
then echo "File Exists and is an Ordinary File"
elif test -d $str
then echo "It is a Directory File"
else
echo "File doesn't exists"
fi
