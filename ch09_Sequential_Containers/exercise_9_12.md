> 练习9.12：对于接受一个容器创建其拷贝的构造函数，和接受两个迭代器创建拷贝的构造函数，解释它们的不同。

---

前者需要两个容器的类型相同，其元素的类型也相同。后者只需要迭代器指向的元素类型可以拷贝给容器的元素即可。