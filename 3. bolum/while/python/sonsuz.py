def main():
    k = 1
    toplam = 0
    while (1):
        sayi = input("Sayi giriniz")

        if int(sayi) == -1:
            break
        k += 1
    ortalama = toplam / k
    print("%2d sayisinin ortalamasi = %2d \n" % (k, ortalama))


main()
