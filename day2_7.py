j=4
for i in range(1,5):
    print(j*" ",end="")
    for k in range(i,0,-1):
        print(k,end="")
    for l in range(2,i+1):
        print(l,end='')
    j=j-1
    print(" ")
