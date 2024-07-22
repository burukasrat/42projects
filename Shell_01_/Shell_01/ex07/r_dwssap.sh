cat /etc/passwd | sed -n '1~2p' | sed -e 's/:.*//' | rev | sort -r | sed -n '$FT_LINE1,$FT_LINE2 p' | tr '\n' ', ' | rev | sed 's/^,/./' | rev
