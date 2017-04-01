#!/bin/bash

#set -eu

make -B

./exercise 1 "0123456789-"
echo "exit status: " ${?}
./exercise 1 ""
echo "exit status: " ${?}
./exercise 1 "1"
echo "exit status: " ${?}
./exercise 1 "123"
echo "exit status: " ${?}
./exercise 1 "2312323"
echo "exit status: " ${?}
./exercise 1 "123123"
echo "exit status: " ${?}

./exercise 2 "0123456789"
echo "exit status: " ${?}
./exercise 2 ""
echo "exit status: " ${?}
./exercise 2 "1"
echo "exit status: " ${?}
./exercise 2 "1111"
echo "exit status: " ${?}
./exercise 2 "01"
echo "exit status: " ${?}
./exercise 2 "10"
echo "exit status: " ${?}
./exercise 2 "11100"

./exercise 3 "abc0"
echo "exit status: " ${?}
./exercise 3 ""
echo "exit status: " ${?}
./exercise 3 "a"
echo "exit status: " ${?}
./exercise 3 "aaaa"
echo "exit status: " ${?}
./exercise 3 "aaBBBc"
echo "exit status: " ${?}
./exercise 3 "AAAbbAAA"
echo "exit status: " ${?}


# ./exercise 1 ""
# ./exercise 1 13556789
# ./exercise 1 13556789135
# ./exercise 1 135567891354567890
# ./exercise 1 999349989567
# ./exercise 1 123123123
# ./exercise 1 123123123234320000099999
# ./exercise 1 0
# ./exercise 1 9
# ./exercise 1 0009
# ./exercise 1 19198191932
# ./exercise 1 3245674789035789
# ./exercise 1 3321342169
# ./exercise 1 0123456789012234567890123456789


#./exercise 2 ""
# ./exercise 2 0000111100001111 # success
# ./exercise 2 000111000111 # success
# ./exercise 2 0011001100 # success
# ./exercise 2 1100110011 # success
# ./exercise 2 010101 # success
# ./exercise 2 0101011 # success
# ./exercise 2 1010100 # success
# ./exercise 2 01010111 # success
# ./exercise 2 01010111000 # success
# ./exercise 2 101010101010 # success
# ./exercise 2 11001100010101010111 # success
# ./exercise 2 100101010010110 # success
# ./exercise 2 1 # success
# ./exercise 2 0 # success
# ./exercise 2 0000000 # success
# ./exercise 2 0101000111 # success
# ./exercise 2 00110011010101011001100 # success


# ./exercise 3 "dfadheoiqnour,(fhlaheghe"
# ./exercise 3 ""
# ./exercise 3 a
# ./exercise 3 aabbjjkljjmioiioowqwwqopp # success
# ./exercise 3 hjkddlwllfifisslwsissikwlsiadkdd # success
# ./exercise 3 fhgjfhgjjfhfhdhffhdjfhhhdjfjfhhhfjdddjfjfjdhdhhhdhfhfjdhfjjfjfjjfhffhhddd # success
# ./exercise 3 HHGGGJFFHHFGGG # success
# ./exercise 3 HHGGGJFFHHKKK # success
# ./exercise 3 HHGGGJFKKK # success 
# ./exercise 3 HHGGGJFKKKa # success
# ./exercise 3 HHbaHHHHHabcaaadklllll # success
# ./exercise 3 ababbjljmmm # success
# ./exercise 3 aaaaabblmkkkkk # success
# ./exercise 3 aaabababaccc # success
# ./exercise 3 aaababccc # success
# ./exercise 3 aaabababccc # success
# ./exercise 3 aaabbbbjmmmbmmmm # success
# ./exercise 3 aaabbbbjmmbmmmmm # success
# ./exercise 3 aaabbbbjmjjjjjj # success
# ./exercise 3 aaabbbbjmccccccc # success


echo "exit status: " ${?}
