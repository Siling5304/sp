# 說明
```
void DOWHILE() {
  // 为循环开始位置和结束位置获取唯一的标签号
  int whileBegin = nextLabel();
  int whileEnd = nextLabel();
  
  // 跳过关键字 "do"
  skip("do");
  
  // 发出循环开始的标签
  emit("(L%d)\n", whileBegin);
  
  // 解析并执行循环体内的语句
  STMT();
  
  // 跳过关键字 "while"
  skip("while");
  
  // 跳过左括号 "("
  skip("(");
  
  // 解析条件表达式，并将结果存储在变量 e 中
  int e = E();
  
  // 发出条件跳转指令，如果条件为假，则跳转到循环结束位置
  emit("if not T%d goto L%d\n", e, whileEnd);
  
  // 跳过右括号 ")"
  skip(")");
  
  // 跳过分号 ";"
  skip(";");
  
  // 发出无条件跳转指令，跳转到循环开始位置，实现循环
  emit("goto L%d\n", whileBegin);
}
```