import random

DDSK = ["ドド","スコ"]
End = "ドドスコスコスコ" * 3
judge = ""
n = 0

while(True):
    t = random.randint(0,1) % 2
    print(DDSK[t])
    judge += DDSK[t]

    if len(judge) >= 24:
        if judge[2*n:] == End:
            break
        n += 1

print("ラブ注入❤︎")
