def main():
    fibonnaci()

def fibonnaci():
    f1,f2 = 5,11
    g = f1 + f2
    f1 = f2
    f2 = g
    print(f2)



main()