def main():
    para = 1000
    ay = 0
    while para < 5000:
        para += para * 0.08
        ay += 1
    print("Paraniz %2d ay sonra %2f tl olur" % (ay, para))


main()