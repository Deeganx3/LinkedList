# LinkedList
### LinkedList implementation in C like vector or list in C++

This repository contain a `C Modular` implemantation of LinkedList in `C` like vector or list in `C++`

* Here we have the constructor of the `LinkedList` object.
	```C
	LinkedList *CreateLinkedList();
	```
    
* And here we have the list of methods associate to the `LinkedList` object.
	```C
	void	(*Free)(struct LinkedList *this);
	int		(*countLinkedList)(struct LinkedList *this);
	bool	(*addElemFront)(struct LinkedList *this, void *data);
	bool	(*addElemEnd)(struct LinkedList *this, void *data);
	bool	(*addElemAtPos)(struct LinkedList *this, int pos, void *data);
	bool	(*removeThisElem)(struct LinkedList *this, t_list *elem);
	bool	(*removeElemFront)(struct LinkedList *this);
	bool	(*removeElemEnd)(struct LinkedList *this);
	bool	(*removeElemAtPos)(struct LinkedList *this, int pos);
	bool	(*freeThisElem)(struct LinkedList *this, void (*freeFunc)(void *data), t_list *elem);
	bool	(*freeThisElemWithData)(struct LinkedList *this, void (*freeFunc)(void *elem), t_list *elem);
	bool	(*freeElemFront)(struct LinkedList *this, void (*freeFunc)(void *elem));
	bool	(*freeElemEnd)(struct LinkedList *this, void (*freeFunc)(void *elem));
	bool	(*freeElemAtPos)(struct LinkedList *this, int pos, void (*freeFunc)(void *elem));
	bool	(*freeAll)(struct LinkedList *this, void (*freeFunc)(void *elem));
	t_list	*(*getElementFirst)(struct LinkedList *this);
	t_list	*(*getElementEnd)(struct LinkedList *this);
	t_list	*(*getElementAtPos)(struct LinkedList *this, int pos);
	t_list	*(*firstElementFromPredicate)(struct LinkedList *this, bool (*predicate)(void *elem, void *userData), void *someData);
	void	(*forEachElements)(struct LinkedList *this, void (*forEachFunc)(void *element, void *userData), void *someData);
	void	(*forEachElementsReloadIterator)(struct LinkedList *this, bool (*forEachFunc)(void *element, void *userData), void *someData);
	```

* The LinkedList is simply compound like that :
	```C
    typedef struct		s_list
	{
	  void				*data;
	  struct s_list		*next;
	  struct s_list		*prev;
	} 					t_list;
    ```
    So you need to cast into `void *` your data to put it into the list 
  
  


    
#### TODO
* Describe all the methods 
