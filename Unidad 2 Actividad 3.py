def iteracion():
 print("en forma de iteracion:")
 for i in range(11):

 print (i)
iteracion()
print(" ")
print("de forma recursiva:")
i=0
def recursiva(i):
 print(i)
 if i == 10:
 pass
 else:
 return recursiva(i+1)
recursiva(i)
