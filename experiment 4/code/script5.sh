echo "Enter the file name: "
read filename
echo "Enter the starting line number: "
read s
echo "Enter the ending line number: "
read n
sed -n $s,$n\p $filename | cat > new.txt
cat new.txt
