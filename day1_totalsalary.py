def total_salary(basic, grade):
    hra = basic * 0.20
    da = basic * 0.50
    if grade == 'A':
        allow = 1700
    elif grade == 'B':
        allow = 1500
    else:
        allow = 1300
    pf = basic * 0.11
    total = basic + hra + da + allow - pf
    return round(total)

basic = int(input("Enter basic salary: "))
grade = input("Enter grade: ")
print("Total salary: ", total_salary(basic, grade))
