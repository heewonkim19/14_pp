typedef struct linknode{
	int data;
	
	void* next;
}ln_t;

static ln_t *list;

int create_node(int value)
{
	ln_t *ptr;
	ln_t *ptrTrav;
	int cnt=0;
	
	ptr = (ln_t*)malloc(sizeof(in_t))//(ln_t*)는 안넣어도 됨. 
	if (ptr == NULL)
	{
		printf("메모리 부족");
		return -1;
	}
	
	ptr -> data = value;
	ptr -> next = NULL; 
	
	if (list == NULL)
	{
		list = ptr;
	}
	else 
	{
		ptrTrav = list;
		cnt++;
		while(ptrTrav -> next != NULL)
		{
			ptrTrav = ptrTrav -> next;
			cnt++;
		}
		
		ptrTrav -> next = ptr;
	}
	return cnt;
}
