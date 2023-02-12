j=4
for i in range(1,5):
    print(j*" ",end="")
    for k in range(i,i+i):
        print('*',end="")
    for l in range(2,i+1):
        print('*',end='')
    j=j-1
    print(" ")
