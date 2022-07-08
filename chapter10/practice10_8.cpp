/*
Exercise 10.8: We said that algorithms do not change the size of the containers 
over which they operate. Why doesn’t the use of back_inserter invalidate this claim?
*/
//因为没有封装在算法中，change the size并没有发生在算法内部，而是发生在迭代器函数中。