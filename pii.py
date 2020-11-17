import time
t0 = time.time() * 1000000


class calcpi:
    def __init__(self,i):
       self.getpivalue(i)
    def getpivalue(self, n):
        self.result = str(int(22/7))              #get integer part
        self.result += "."                        #add decimal 
        self.carry = str(22%7)                    #get first decimal part   
        for i in range(n):                        #iterate to get specified decimal number of spaces                          
            self.temp = int(self.carry+"0")
            self.carry=str(self.temp%7)
            self.temp1=str(int(self.temp/7))
            self.result+=self.temp1;
        print("Pi value is:\n{}".format(self.result)) #print results


d = calcpi(20)

#print time required for execution
print("--- %s microseconds ---" % ((time.time()*1000000) - t0))
        



            
