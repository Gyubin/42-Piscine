cat /etc/passwd | grep : | sed -n "n;p" | cut -d ':' -f1 | rev | sort -r | awk -v start=$FT_LINE1 -v end=$FT_LINE2 'NR==start,NR==end' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
