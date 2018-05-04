这是最简单的实现方法，不是循环队列，当数据量超过数组大小限制的时候，就会出现假溢出的状况~
实现中遇到一个问题，dequeue中有return时，front和currentSize不会改变；而当用void dequeue(),没有返回值再另写一个frontValue()时，问题解决了~
