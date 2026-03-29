#思路，
# 1. 拿到页面源代码
# 2.编写正则，提取页面数据
# 3. 保存数据
import requests
import re

f = open("top250.csv",mode="w",encoding="utf-8")

url = "https://movie.douban.com/top250"

headers = {
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/146.0.0.0 Safari/537.36"
}
resp = requests.get(url,headers=headers)
#resp.encding = 'utf-8'   #解决乱码问题。
pageSource = resp.text
print(pageSource)

#编写正则表达式
#re.S 可以让正则中的.匹配换行符
obj = re.compile(r'<div class="item">.*?<span class="title">(?P<name>.*?)</sp'
                 r'an>.*?<p>.*?导演: (?P<dao>.*?)&nbsp;.*?<br>'
                 r'(?P<year>.*?)&nbsp;.*?<span class="rating_num" property="v:average">'
                 r'(?P<score>.*?)</span>.*?<span>(?P<num>.*?)人评价</span>',re.S)

#进行正则匹配
result = obj.finditer(pageSource)
for item in result:
     name = item.group("name")
     dao = item.group("dao")
     year = item.group("year").strip()  #去掉字符串左右两端的空白
     score = item.group("score")
     num = item.group("num")
     f.write(f"{name},{dao},{year},{score},{num}\n")    #如果觉得low，可以更换成csv模块，进行数据写入

f.close()
resp.close()
print("豆瓣TOP250提取完毕.")