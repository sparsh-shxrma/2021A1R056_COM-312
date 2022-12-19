echo -n "Enter file name: "
read filename
if [ ! -f $filename]
then 
echo "Filename $filename does not exists"
exit 1
fi
tr '[a-z]' '[A-Z]' <$filename
