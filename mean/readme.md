# 语义分析器

- 构造符号表和四元式序列
- 将符号表和四元式序列翻译成对应的汇编代码


## 符号表
使用stl的unordered_map<pair<string, int>, Symbol>
其中pair<string, int>的string是符号的名称，int是当前嵌套的层数
Symbol就是其对应的符号表中的一项，一项里面包含了名称，类型，值等


