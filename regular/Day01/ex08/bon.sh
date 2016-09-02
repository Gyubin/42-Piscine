ldapsearch -x "(cn=*son*)" | grep cn: | wc -l | tr -d ' '
