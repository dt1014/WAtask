#!/bin/bash

#!/bin/bash


python main.py 1 "0123456789-" 
echo "exit status: " ${?}
python main.py 1 ""
echo "exit status: " ${?}
python main.py 1 "1"
echo "exit status: " ${?}
python main.py 1 "123"
echo "exit status: " ${?}
python main.py 1 "2312323"
echo "exit status: " ${?}
python main.py 1 "123123"
echo "exit status: " ${?}

python main.py 2 "0123456789"
echo "exit status: " ${?}
python main.py 2 ""
echo "exit status: " ${?}
python main.py 2 "1"
echo "exit status: " ${?}
python main.py 2 "1111"
echo "exit status: " ${?}
python main.py 2 "01"
echo "exit status: " ${?}
python main.py 2 "10"
echo "exit status: " ${?}
python main.py 2 "11100"

python main.py 3 "abc0"
echo "exit status: " ${?}
python main.py 3 ""
echo "exit status: " ${?}
python main.py 3 "a"
echo "exit status: " ${?}
python main.py 3 "aaaa"
echo "exit status: " ${?}
python main.py 3 "aaBBBc"
echo "exit status: " ${?}
python main.py 3 "AAAbbAAA"
echo "exit status: " ${?}


