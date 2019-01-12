# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
""" 

f=open("E:\work\jtag\hello.txt","r")
f2=open("E:\work\jtag\dest.txt","w")
data_line = []

print("begin analyse  input file ......") 
for line in f:
    sample_ = line.split(' ', line.count(' '))
    list=sample_
    
    for txt in list:
        if  txt=='IN' or txt=='OUT':
            if txt=='OUT':
                data_line.append('OUT')
                i = list.index('OUT')
            else:
                data_line.append('IN')
                i = list.index('IN')
                
            numOfdata = list[i-2]
            y = int(numOfdata)%8
            z = int(numOfdata)//8
            #print("y = %x" %y)  #yushu
            #print("z = %x" %z)  #hang
            #print("i = %x" %i)  #weizhi
            
            if z!=0:
                for ieter in range(0,9):       #yi hang
                        #print("ieter1 =%x" %ieter)  
                        data_line.append(' ')
                        data_line.append(list[ieter + i + 5])
                        data_line.append(' ')
                data_line.append('\n')
                for mm in range(0,z-1):  #ruo ganhang 
                    nextLine = next(f)
                    #print("mm=%d"%(mm))
                    sample_1 = nextLine.split(' ', nextLine.count(' '))
                    #print(sample_1)
                    data_line.append('---')
                    for ieter in range(0,9): 
                        #print("ieter2 =%x data= %s" %(ieter,sample_1[ieter + 46]))  #hang
                        data_line.append(' ')
                        data_line.append(sample_1[ieter + 46])
                        #print("fd = %s "%list[ieter + i + 5])
                        data_line.append(' ')
                    data_line.append('\n')
                #last 
                nextLine = next(f)
                sample_1 = nextLine.split(' ', nextLine.count(' '))
                #print(sample_1)
                data_line.append('---')
                for ieter in range(0,y+1):
                    #print("ieter3 =%x" %ieter)  #hang
                    #print("ieter2 =%x data= %s" %(ieter,sample_1[ieter + 46]))  #hang
                    data_line.append(' ')
                    data_line.append(sample_1[ieter + 46])
                    data_line.append(' ')
                data_line.append('\n')
                
            #print(list)
            if z==0 and y > 0:  #yushu > 0
                for ieter in range(0,y+1):
                    #print("ieter4 =%x" %ieter)  #hang
                    data_line.append(' ')
                    data_line.append(list[ieter + i + 5])
                    data_line.append(' ')
                data_line.append('\n')
print("writing to dest file ......")                 
test_str =" ".join(data_line)
#print(test_str)
f2.write(test_str)
f2.write('\n')
print("done!!!") 
f2.close
f.close

