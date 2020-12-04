trie
-----


>   也称前缀树或字典树，参考以下资料：

- [wikipedia](https://zh.wikipedia.org/wiki/Trie)
- [6天通吃树结构—— 第五天 Trie树](https://www.cnblogs.com/huangxincheng/archive/2012/11/25/2788268.html)
- [实现 Trie (前缀树)](https://leetcode-cn.com/problems/implement-trie-prefix-tree/solution/shi-xian-trie-qian-zhui-shu-by-leetcode/)

### L208 实现 Trie （前缀树）

实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。

示例:

```
Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // 返回 true
trie.search("app");     // 返回 false
trie.startsWith("app"); // 返回 true
trie.insert("app");   
trie.search("app");     // 返回 true
```

说明:

- 你可以假设所有的输入都是由小写字母 `a-z` 构成的。
- 保证所有输入均为非空字符串。


>
    来源：力扣（LeetCode）
    链接：https://leetcode-cn.com/problems/implement-trie-prefix-tree
    著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
