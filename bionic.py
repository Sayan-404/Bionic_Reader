import pdfkit

pdfkit.from_file('test.html', 'out.pdf')

def convert(words):

    list = words.split()

    for i in list:
        size = len(i)

        if(size<=2):
         midpoint=1
        elif(size%2==0):
            midpoint = size/2
        else:
            midpoint = (size+1) / 2
        bolded = i[0:int(midpoint)]
        others = i[int(midpoint):size]


f = open("example.txt","r")
for line in f:
    convert(line)
