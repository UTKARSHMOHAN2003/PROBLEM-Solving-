c=0
j=1
for i in range(1,5):
    if(c!=j):
        for j in range(i,i+i):
            print(j,end="")
            c=j
            j=j+1   
    print(" ") 
