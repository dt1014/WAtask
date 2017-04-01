#!/bin/bash


package_name="codecheck"
obj="${package_name}/Args.java \
   ${package_name}/Solver.java \
   ${package_name}/Solver1.java \
   ${package_name}/Solver23.java \
   ${package_name}/App.java"
javac ${obj}

java codecheck.App 1 "0123456789-"
echo "exit status: " ${?}
java codecheck.App 1 ""
echo "exit status: " ${?}
java codecheck.App 1 "1"
echo "exit status: " ${?}
java codecheck.App 1 "123"
echo "exit status: " ${?}
java codecheck.App 1 "2312323"
echo "exit status: " ${?}
java codecheck.App 1 "123123"
echo "exit status: " ${?}

Java codecheck.App 2 "0123456789"
echo "exit status: " ${?}
java codecheck.App 2 ""
echo "exit status: " ${?}
java codecheck.App 2 "1"
echo "exit status: " ${?}
java codecheck.App 2 "1111"
echo "exit status: " ${?}
java codecheck.App 2 "01"
echo "exit status: " ${?}
java codecheck.App 2 "10"
echo "exit status: " ${?}
java codecheck.App 2 "11100"
echo "exit status: " ${?}

java codecheck.App 3 "abc0"
echo "exit status: " ${?}
java codecheck.App 3 ""
echo "exit status: " ${?}
java codecheck.App 3 "a"
echo "exit status: " ${?}
java codecheck.App 3 "aaaa"
echo "exit status: " ${?}
java codecheck.App 3 "aaBBBc"
echo "exit status: " ${?}
java codecheck.App 3 "AAAbbAAA"
echo "exit status: " ${?}


# java codecheck.App 3 aabbjjkljjmioiioowqwwqopp # success
# java codecheck.App 3 hjkddlwllfifisslwsissikwlsiadkdd # success
# java codecheck.App 3 fhgjfhgjjfhfhdhffhdjfhhhdjfjfhhhfjdddjfjfjdhdhhhdhfhfjdhfjjfjfjjfhffhhddd # success
# java codecheck.App 3 HHGGGJFFHHFGGG # success
# java codecheck.App 3 HHGGGJFFHHKKK # success
# java codecheck.App 3 HHGGGJFKKK # success 
# java codecheck.App 3 HHGGGJFKKKa # success
# java codecheck.App 3 HHbaHHHHHabcaaadklllll # success
# java codecheck.App 3 ababbjljmmm # success
# java codecheck.App 3 aaaaabblmkkkkk # success
# java codecheck.App 3 aaabababaccc # success
# java codecheck.App 3 aaababccc # success
# java codecheck.App 3 aaabababccc # success
# java codecheck.App 3 aaabbbbjmmmbmmmm # success
# java codecheck.App 3 aaabbbbjmmbmmmmm # success
# java codecheck.App 3 aaabbbbjmjjjjjj # success
# java codecheck.App 3 aaabbbbjmccccccc # success
