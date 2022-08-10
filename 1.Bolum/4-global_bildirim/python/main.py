m = 0
n = 0

def main():
    global m
    m = 7
    ikikat()
    print("%2d nin iki kati %d dir"% (m,n))


def ikikat():
    global n
    n = m * 2
    
main()