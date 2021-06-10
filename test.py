def computepay(r,t):
    if t<=40:
        c = r*t
        return c
    else:
        a = (r*40)+(7.023809524*r+(t-40))
        b = "{:.2f}".format(a)
        return b
t = int(input("enter the hour "))
r = float(input("enter the rate "))
print("Pay",computepay(r,t))