from PIL import Image

im = Image.open('holi.jpg') 
pix = im.load()
length,breadth=im.size
threshold=50
brightThreshold=20
typea=typeb=0
for i in range(length):
    for j in range(breadth):
        if pix[i,j][0]>=threshold and pix[i,j][1]>=threshold and pix[i,j][2]>=threshold:
            typea+=1
        else: 
            typeb+=1
        if ((0.21*pix[i,j][0]+0.72*pix[i,j][1]+0.07*pix[i,j][2])/3 ) > brightThreshold:
            pix[i,j]=(0,0,0)
        else:
            pix[i,j]=(255,255,255)
print((typea/(typea+typeb))*100,(typeb/(typea+typeb))*100)   
im.save('updated.jpg') 