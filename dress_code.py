# Similar Dress Code question from https://www.hackerrank.com/contests/third-year-w2/challenges

cases=int(input())
while cases:
    string=input()
    a,b=0,0
    for k in string:
        if k=='0':
            a+=1
        else:
            b+=1
    print(min(a,b))
    cases-=1