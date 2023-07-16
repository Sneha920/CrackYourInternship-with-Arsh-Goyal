class Solution:
    def intToRoman(self, num: int) -> str:
        x = ""
        while num!=0:
            print(num)
            if num>= 1000:
                x+='M'
                num-=1000
            elif num>= 900:
                x+='CM'
                num-=900
            elif num>= 500:
                x+='D'
                num-= 500
            elif num>= 400: 
                x+='CD' 
                num-= 400
            elif num>= 100:
                x+='C'
                num-=100
            elif num>= 90:
                x+='XC' 
                num-=90
            elif num>= 50:
                x+='L' 
                num-=50
            elif num>= 40:
                x+='XL' 
                num-=40
            elif num>= 10:
                x+='X' 
                num-=10
            elif num>= 9:
                x+='IX' 
                num-=9
            elif num>= 5:
                x+='V' 
                num-=5
            elif num>= 4:
                x+='IV' 
                num-=4
            else:
                x+='I'
                num-=1
        return x
