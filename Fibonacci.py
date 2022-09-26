end_num = int(input("enter last number of sequence : "))
n1 , n2 = 0,1;
count = 0;
while count <= end_num :

    print(n1)
    n3 = n1 + n2
    n1 = n2
    n2 = n3
    count += 1;


