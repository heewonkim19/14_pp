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
	
	ptr = (ln_t*)malloc(sizeof(in_t))//(ln_t*)�� �ȳ־ ��. 
	if (ptr == NULL)
	{
		printf("�޸� ����");
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
