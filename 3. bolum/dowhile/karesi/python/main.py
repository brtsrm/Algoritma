def main():
    while True:
        sayi = int(input("Lütfen bir sayı giriniz"))
        karesi = sayi * sayi
        print("%2d sayisinin karesi %2d" % (sayi, karesi))
        if (sayi <= 0):
            break
    print("Programdan çıkıldı")

main()
