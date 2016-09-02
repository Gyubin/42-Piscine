ldapsearch -Q -LLL "(uid=z*)" | grep -i '^cn:' | sort -rf | cut -c 5-
