def main():
    sayi = int(input("Sayi giriniz : "))
    faktoriyel = 1
    for x in range(1,sayi):
        faktoriyel = faktoriyel * x
    print("%2d hesaplana \n" % (faktoriyel))
main()
