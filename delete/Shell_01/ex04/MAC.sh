ifconfig | sed -n '/ether/p' | sed -n 's/.*\([0-9a-fA-F:]\{17\}\).*/\1/p'
