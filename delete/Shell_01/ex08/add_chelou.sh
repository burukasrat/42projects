echo "$(echo $FT_NBR1 | tr "'\"?\!" 0234 | tr '\\' 1) + $(echo $FT_NBR2 | tr "mrdoc" 01234 )" | xargs echo "ibase=5; obase=23;" | bc | tr 0123456789ABC "gatio luSnemf"
