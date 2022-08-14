def main():
    sayi = int(input("Lütfen bir sayı giriniz : "))
    k = sayi % 2
    if k == 0:
        print("Çift sayı")
    else:
        print("Tek sayı")

main()