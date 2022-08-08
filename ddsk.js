const DDSK = ["ドド","スコ"]
let result = 0

while(0x777 != (result & 0x777)){
    let LSD = Math.floor(Math.random() * 2)
    result <<= 1
    result = LSD|(result&~1)
    console.log(DDSK[LSD])
}

console.log("ラブ注入❤︎")
