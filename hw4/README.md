原本有1000元，不斷存款1元、提款1元，共計1000次
===
# race.c
最終的Money會產生錯誤，有Race Condition
```
money=17800586
```

# norace
最終的Money是正確的，依然維持100000元，沒有Race Condition
```
money=1000
```
