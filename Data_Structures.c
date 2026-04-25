#include<stdio.h>
#include<stdlib.h>

//defining globally for queue 
int qu[100],front_a=-1,rear_a=-1,c_qu[100],front_c=-1,rear_c=-1,n,ele_c;
struct node *front=NULL,*rear=NULL,*front_cLL=NULL,*rear_cLL=NULL;


//defining globally for stack using array
int stack[100],ele,top=-1,choice,size;

//for singly,circular linked list and stack,queue using linked list
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL,*top_LL=NULL;

//for doubly and doubly circular linked list
struct node1
{
    int data1;
    struct node1 *prev1,*next1;
};
struct node1 *start1=NULL;

//linked list
//singly linked list
void add_beg();
void add_specific();
void add_end();
void delete_beg();
void delete_specific();
void delete_end();
void display_SLL();

//circular linked list
void add_beg_cll();
void add_specific_cll();
void add_end_cll();
void delete_beg_cll();
void delete_specific_cll();
void delete_end_cll();
void display_cll();

//doubly linked list
void add_beg_dll();
void add_specific_dll();
void add_end_dll();
void delete_beg_dll();
void delete_specific_dll();
void delete_end_dll();
void display_dll();

//doubly circular linked list
void add_beg_dcll();
void add_specific_dcll();
void add_end_dcll();
void delete_beg_dcll();
void delete_specific_dcll();
void delete_end_dcll();
void display_dcll();

//stack
//stack using array
void push();
void pop();
void display_stack_array();

//stack using linked list
void push_stack_ll();
void pop_stack_ll();
void display_stack_ll();

//queue
//queue using array
void insertion_q();
void deletion_q();
void display_q();

//queue using linked list
void insert_qu_LL();
void delete_qu_LL();
void display_qu_LL();

//circular queue using array
void c_insert_queue();
void c_delete_queue();
void c_display_queue();

//circular queue using linked list
void insertion_cqueue_LL();
void deletion_cqueue_LL();
void display_cqueue_LL();

//searching
int linearSearch(int a[],int size,int key);
int binarySearch(int a[],int size,int key);

//sorting
void swap(int *a,int *b);
void bubblesort(int a[],int n);
void selectionsort(int a[],int n);
void insertionsort(int a[],int n);
//merge sort
void merge(int a[],int start,int mid,int end);
void mergesort(int a[],int start,int end);

//for quick sort
int partation(int a[],int lb,int ub);
void quicksort(int a[],int lb,int ub);

int main()
{
    menu:
    printf("\n****CHOOSE THE DATA STRUCTURE****\n\n");
    printf("\n1.Linked List\n");
    printf("2.Stack\n");
    printf("3.Queue\n");
    printf("4.Searching\n");
    printf("5.Sorting\n");
    printf("6.Exit\n");

    while(1)
    {
        int choice;
        printf("\nEnter your Choice:");
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
            //for linked list
            case 1:
            {
                linkedlist:
                printf("\n****CHOOSE IN LINKED LIST****\n");
                printf("\n1.Singly Linked List\n");
                printf("2.Circular Linked List\n");
                printf("3.Doubly Linked List\n");
                printf("4.Doubly Circular Linked List\n");
                printf("5.Exit\n");
                printf("6.Return\n\n");
                

                while(1)
                {
                    int first;
                    printf("Enter Your Choice in Linked List:");
                    scanf("%d",&first);
                    
                    switch(first)
                    {
                        //for singly linked list
                        case 1:
                        {
                            printf("\n****CHOOSE THE OPERATION IN SINGLY LINKED LIST****\n");
                            printf("\n\n1.Insert at the beginning\n");
                            printf("2.Insert at specific position\n");
                            printf("3.Insert at the end\n");
                            printf("4.Delete from the beginning\n");
                            printf("5.Delete from the specific position\n");
                            printf("6.Delete from the end\n");
                            printf("7.Displaying linked list\n");
                            printf("8.Exit\n");
                            printf("9.Return\n\n");
                
                            while(2)
                            {
                            int choice;
                            printf("Enter your choice in singly linked list:");
                            scanf("%d",&choice);

                            switch(choice)
                                {
                                    case 1:
                                    {
                                    add_beg();
                                    break;
                                    }
                    
                                    case 2:
                                    {
                                    add_specific();
                                    break;
                                    }

                                    case 3:
                                    {
                                    add_end();
                                    break;
                                    }

                                    case 4:
                                    {
                                    delete_beg();
                                    break;
                                    }

                                    case 5:
                                    {
                                    delete_specific();
                                    break;
                                    }

                                    case 6:
                                    {
                                    delete_end();
                                    break;
                                    }

                                    case 7:
                                    {
                                    display_SLL();
                                    break;
                                    }

                
                                    case 8:
                                    {
                                        exit(1);
                                    }

                                    case 9:
                                    {
                                        goto linkedlist;
                                    }

                                    default:
                                    printf("Choice is wrong\n");
                                }
                            }
                        }

                        //for cicular liked list
                        case 2:
                        {
                            printf("\n****CHOOSE THE OPERATION IN CIRCULAR LINKED LIST****\n");
                            printf("\n\n1.Insert at the beginning\n");
                            printf("2.Insert at specific position\n");
                            printf("3.Insert at the end\n");
                            printf("4.Delete from the beginning\n");
                            printf("5.Delete from the specific position\n");
                            printf("6.Delete from the end\n");
                            printf("7.Displaying linked list\n");
                            printf("8.Exit\n");
                            printf("9.Return\n\n");
                            
                            while(1)
                            {
                            int choice;
                            printf("Enter your choice in Circular Linked List:");
                            scanf("%d",&choice);

                            switch(choice)
                            {
                                case 1:
                                {
                                add_beg_cll();
                                break;
                                }
                                
                                case 2:
                                {
                                add_specific_cll();
                                break;
                                }

                                case 3:
                                {
                                add_end_cll();
                                break;
                                }

                                case 4:
                                {
                                delete_beg_cll();
                                break;
                                }

                                case 5:
                                {
                                delete_specific_cll();
                                break;
                                }

                                case 6:
                                {
                                delete_end_cll();
                                break;
                                }

                                case 7:
                                {
                                display_cll();
                                break;
                                }

                                case 8:
                                {
                                    exit(1);
                                }

                                case 9:
                                {
                                    goto linkedlist;
                                }

                                default:
                                printf("Choice is wrong\n");
                            }
                        }
                        }

                        //for doubly linked list
                        case 3:
                        {
                                printf("\n****CHOOSE THE OPERATION IN DOUBLY LINKED LIST****\n");
                                printf("\n\n1.Insert at the beginning\n");
                                printf("2.Insert at specific position\n");
                                printf("3.Insert at the end\n");
                                printf("4.Delete from the beginning\n");
                                printf("5.Delete from the specific position\n");
                                printf("6.Delete from the end\n");
                                printf("7.Displaying linked list\n");
                                printf("8.Exit\n");
                                printf("9.Return\n\n");
                                
                                while(1)
                                {
                                int choice;
                                printf("Enter your choice in Doubly linked list:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    case 1:
                                    {
                                    add_beg_dll();
                                    break;
                                    }
                                    
                                    case 2:
                                    {
                                    add_specific_dll();
                                    break;
                                    }

                                    case 3:
                                    {
                                    add_end_dll();
                                    break;
                                    }

                                    case 4:
                                    {
                                    delete_beg_dll();
                                    break;
                                    }

                                    case 5:
                                    {
                                    delete_specific_dll();
                                    break;
                                    }

                                    case 6:
                                    {
                                    delete_end_dll();
                                    break;
                                    }

                                    case 7:
                                    {
                                    display_dll();
                                    break;
                                    }

                                    case 8:
                                    {
                                        exit(1);
                                    }

                                    case 9:
                                    {
                                        goto linkedlist;
                                    }

                                    default:
                                    printf("Choice is wrong\n");
                                }
                            }
                        }

                        //for doubly circular linked list
                        case 4:
                        {
                                printf("\n****CHOOSE THE OPERATION IN DOUBLY CIRCULAR LINKED LIST***\n");
                                printf("\n\n1.Insert at the beginning\n");
                                printf("2.Insert at specific position\n");
                                printf("3.Insert at the end\n");
                                printf("4.Delete from the beginning\n");
                                printf("5.Delete from the specific position\n");
                                printf("6.Delete from the end\n");
                                printf("7.Displaying linked list\n");
                                printf("8.Exit\n");
                                printf("9.Return\n\n");
                                
                                while(1)
                                {
                                int choice;
                                printf("Enter your choice in doubly circular linked list:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    case 1:
                                    {
                                        add_beg_dcll();
                                        break;
                                    }
                                    
                                    case 2:
                                    {
                                        add_specific_dcll();
                                        break;
                                    }

                                    case 3:
                                    {
                                        add_end_dcll();
                                        break;
                                    }

                                    case 4:
                                    {
                                        delete_beg_dcll();
                                        break;
                                    }

                                    case 5:
                                    {
                                        delete_specific_dcll();
                                        break;
                                    }

                                    case 6:
                                    {
                                        delete_end_dcll();
                                        break;
                                    }

                                    case 7:
                                    {
                                        display_dcll();
                                        break;
                                    }

                                    case 8:
                                    {
                                        exit(1);
                                    }

                                    case 9:
                                    {
                                        goto linkedlist;
                                    }

                                    default:
                                    printf("Choice is wrong\n");
                                }
                            }
                        }

                        case 5:
                        {
                            exit(1);
                        }

                        case 6:
                        {
                            goto menu;
                        }

                        default:
                        printf("Choice is wrong\n");
                    }      
                }
            }
            //for stack data structure
            case 2:
            {
                stack:
                printf("\n****CHOOSE IN STACK****\n\n");
                printf("\n1.Stack using array\n");
                printf("2.Stack using Linked list\n");
                printf("3.Exit\n");
                printf("4.Return\n\n");

                while(1)
                {
                    int choice;
                    printf("\nChoose the type of stack:");
                    scanf("%d",&choice);
                    
                    switch(choice)
                    {
                        //for stack using array
                        case 1:
                        {
                            printf("\nEnter the size of the stack:");
                            scanf("%d",&size);
                            printf("\n\n****CHOOSE YOUR OPERATION IN STACK USING ARRAY****");
                            printf("\n\n1.Push\n2.Pop\n3.Delete\n4.Exit\n5.Return\n\n");


                            while(1)
                            {
                                printf("\nEnter your choice in stack using array:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    case 1:
                                    {
                                        push();
                                        break;
                                    }

                                    case 2:
                                    {
                                        pop();
                                        break;
                                    }

                                    case 3:
                                    {
                                        display_stack_array();
                                        break;
                                    }

                                    case 4:
                                    {
                                        exit(1);
                                    }

                                    case 5:
                                    {
                                        goto stack;
                                    }

                                    default:
                                    printf("Choice is wrong\n");
                                }
                            }
                        }

                        //for stack using linked list
                        case 2:
                        {
                            printf("\n****CHOOSE YOUR OPERATION IN STACK USING LINKD LIST****\n");
                            printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n5.Return\n\n");
                            while(1)
                            {
                                int choice;
                                printf("Enter your choice in stack using linked list:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    case 1:
                                    {
                                        push_stack_ll();
                                        break;
                                    }

                                    case 2:
                                    {
                                        pop_stack_ll();
                                        break;
                                    }

                                    case 3:
                                    {
                                        display_stack_ll();
                                        break;
                                    }

                                    case 4:
                                    {
                                        exit(1);
                                    }

                                    case 5:
                                    {
                                        goto stack;
                                    }

                                    default:
                                    printf("Choice is wrong");
                                }
                            }
                        }

                        case 3:
                        {
                            exit(1);
                        }

                        case 4:
                        {
                            goto menu;
                        }

                        default:
                        {
                            printf("Choice is wrong\n");
                        }
                    }
                }
            }
            //for queue data structure
            case 3:
            {
                queue:
                printf("\n****CHOOSE IN QUEUE****\n\n");
                printf("\n1.Queue using array\n");
                printf("2.Queue using Linked list\n");
                printf("3.Circular Queue using array\n");
                printf("4.Circular Queue using linked list\n");
                printf("5.Exit\n");
                printf("6.Return\n\n");

                while(1)
                {
                    int choice;
                    printf("\nEnter your choice of Queue:");
                    scanf("%d",&choice);
    
                    switch(choice)
                    {
                        //Queue using array
                        case 1:
                        {
                            printf("\nEnter the size of the Queue:");
                            scanf("%d",&size);

                            printf("\n****CHOOSE YOUR OPERATION IN QUEUE USING ARRAY****\n\n");
                            printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n5.Return\n\n");

                            while(1)
                            {
                                int choice;
                                printf("\nEnter your choice:");
                                scanf("%d",&choice);

                                switch (choice)
                                {
                                    case 1:
                                    {
                                        insertion_q();
                                        break;
                                    }

                                    case 2:
                                    {
                                        deletion_q();
                                        break;
                                    }

                                    case 3:
                                    {
                                        display_q();
                                        break;
                                    }

                                    case 4:
                                    exit(1);

                                    case 5:
                                    goto queue;

                                    default:
                                    printf("Your choice is wrong\n");
                                }
                            }
                        }

                        //Queue using linked list
                        case 2:
                        {
                            printf("\n****CHOOSE IN OPERATION IN QUEUE USING LINKED LIST****\n\n");
                            printf("\n1.Insertion in Queue\n2.Deletion in Queue\n3.Displaying the Queue\n4.Exit\n5.Return\n\n");

                            while(1)
                            {
                                int choice;
                                printf("\nEnter your choice in Queue:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    case 1:
                                    {
                                        insert_qu_LL();
                                        break;
                                    }

                                    case 2:
                                    {
                                        delete_qu_LL();
                                        break;
                                    }

                                    case 3:
                                    {
                                        display_qu_LL();
                                        break;
                                    }

                                    case 4:
                                    {
                                        exit(1);
                                        break;
                                    }

                                    case 5:
                                    goto queue;

                                    default:
                                    printf("choice is wrong\n");
                                }
                            }
                        }

                        //Circular Queue using array
                        case 3:
                        {
                            printf("\nEnter the size of circular Queue:");
                            scanf("%d",&n);
                            printf("\n****CHOOSE YOUR OPERATION IN CIRCULAR QUEUE USING ARRAY****\n");
                            printf("\n1.Insert in circular queue\n2.Delete in circular queue\n3.Displaying circular queue\n4.Exit\n5.Return\n\n");

                            while(1)
                            {
                                int choice;
                                printf("Enter your choice in Circular Queue:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    case 1:
                                    {
                                        c_insert_queue();
                                        break;
                                    }

                                    case 2:
                                    {
                                        c_delete_queue();
                                        break;
                                    }

                                    case 3:
                                    {
                                        c_display_queue();
                                        break;
                                    }

                                    case 4:
                                    {
                                        exit(1);
                                    }

                                    case 5:
                                    goto queue;

                                    default:
                                    {
                                        printf("\nChoice is wrong\n");
                                    }
                                }
                            }
                        }

                        //circular queue using linked list
                        case 4:
                        {
                            printf("\n****CHOOSE YOUR OPERATION IN CIRCULAR QUEUE USING LINKED LIST****\n\n");
                            printf("1.Insertion in cicular queue\n");
                            printf("2.Deletion in cicular queue\n");
                            printf("3.Displaying the cicular queue\n");
                            printf("4.Exit\n");
                            printf("5.Return\n\n");

                            while(1)
                            {
                                int choice;
                                printf("\nEnter your choice in circular queue:");
                                scanf("%d",&choice);

                                switch(choice)
                                {
                                    //insertion in circular queue using linked list
                                    case 1:
                                    {
                                        insertion_cqueue_LL();
                                        break;
                                    }
                                    
                                    //deletion in circular queue using linked list
                                    case 2:
                                    {
                                        deletion_cqueue_LL();
                                        break;
                                    }

                                    //displaying the circular queue using linked list
                                    case 3:
                                    {
                                        display_cqueue_LL();
                                        break;
                                    }

                                    //exit
                                    case 4:
                                    {
                                        exit(1);
                                    }

                                    case 5:
                                    goto queue;

                                    default:
                                    printf("Choice is Wrong");
                                }
                            }
                        }

                        case 5:
                        {
                            exit(1);
                        }

                        case 6:
                        {
                            goto menu;
                        }

                        default:
                        printf("Choice is wrong");
                    }
                }
            }
            
            //for searching
            case 4:
            {
                
                printf("\n****CHOOSE YOUR SEARCHING METHOD****\n\n");
                printf("\n1.Linear Search\n2.Binary Search\n3.Exit\n4.Return\n\n");

                while(1)
                {
                    int choice;
                    printf("Enter your choice in searching:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                        //for linear search
                        case 1:
                        {
                            int arr[20],n,key,temp;
                            printf("Enter the size of the array:");
                            scanf("%d",&n);

                            printf("Enter the elements of array:");
                            for(int i=0;i<n;i++)
                            {
                                scanf("%d",&arr[i]);
                            }

                            printf("Enter the element you want to find:");
                            scanf("%d",&key);
                            
                            temp=linearSearch(arr,n,key);

                            if(linearSearch(arr,n,key))
                            {
                                printf("Element found at %d index\n",temp);
                            }
                            else
                            printf("Element not found\n");
                            break;
                        }

                        //for binary search
                        case 2:
                        {
                            int arr[20],n,key,temp;
                            printf("Enter the size of the array:");
                            scanf("%d",&n);

                            printf("Enter the elements of array:");
                            for(int i=0;i<n;i++)
                            {
                                scanf("%d",&arr[i]);
                            }

                            printf("Enter the element you want to find:");
                            scanf("%d",&key);
                            
                            temp=binarySearch(arr,n,key);

                            if(temp > -1)
                            {
                                printf("Element found at %d index\n",temp);
                            }
                            else
                            printf("Element not found\n");
                            break;
                        }

                        case 3:
                        {
                            exit(1);
                        }

                        case 4:
                        {
                            goto menu;
                        }

                        default:
                        printf("choice is wrong");
                    }
                }
            }
            
            //for sorting
            case 5:
            {
                printf("\n****CHOOSE YOUR SORTING METHOD****\n\n");
                printf("1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Merge Sort\n5.Quick Sort\n6.Exit\n7.Return\n\n");

                while(1)
                {
                    int choice;
                    printf("\nEnter your choice in Sorting:");
                    scanf("%d",&choice);
                    
                    switch(choice)
                    {
                        //for bubble sort
                        case 1:
                        {
                            int arr[20],n;
                            printf("Enter the size of array:");
                            scanf("%d",&n);

                            printf("Enter the elements of array:");
                            for(int i=0;i<n;i++)
                            {
                                scanf("%d",&arr[i]);
                            }

                            bubblesort(arr,n);
                            printf("The Sorted array is ");
                            for(int i=0;i<n;i++)
                            {
                                printf("%d ",arr[i]);
                            }
                            break;
                        }

                        //for selection sort
                        case 2:
                        {
                            int arr[20],n;
                            printf("Enter the size of array:");
                            scanf("%d",&n);

                            printf("Enter the elements of array:");
                            for(int i=0;i<n;i++)
                            {
                                scanf("%d",&arr[i]);
                            }

                            selectionsort(arr,n);
                            printf("The sorted array is ");
                            for(int i=0;i<n;i++)
                            {
                                printf("%d ",arr[i]);
                            }
                            break;
                        }
                        
                        //for insertion sort
                        case 3:
                        {
                            int arr[20],n;
                            printf("Enter the size of array:");
                            scanf("%d",&n);

                            printf("Enter the elements of array:");
                            for(int i=0;i<n;i++)
                            {
                                scanf("%d",&arr[i]);
                            }

                            insertionsort(arr,n);
                            printf("The sorted array is ");
                            for(int i=0;i<n;i++)
                            {
                                printf("%d ",arr[i]);
                            }
                            break;
                        }

                        //for merge sort
                        case 4:
                        {
                            int a[20],size;
                            printf("Enter the size of array:");
                            scanf("%d",&size);

                            printf("Enter the elements of array:");
                            for(int i=0;i<size;i++)
                            {
                                scanf("%d",&a[i]);
                            }

                            mergesort(a,0,size);
                            printf("The sorted array is ");
                            for(int i=0;i<size;i++)
                            {
                                printf("%d ",a[i]);
                            }
                            break;
                        }

                        //for quick sort
                        case 5:
                        {
                            int a[20],size;
                            printf("Enter the size of array:");
                            scanf("%d",&size);

                            printf("Enter the elements of array:");
                            for(int i=0;i<size;i++)
                            {
                                scanf("%d",&a[i]);
                            }

                            quicksort(a,0,size);
                            printf("The sorted array is ");
                            for(int i=0;i<size;i++)
                            {
                                printf("%d ",a[i]);
                            }
                            break;
                        }

                        case 6:
                        {
                            exit(1);
                        }

                        case 7:
                        {
                            goto menu;
                        }

                        default:
                        printf("choice is wrong");
                    }
                }
            }

            case 6:
            {
                exit(1);
            }

            default:
            printf("choice is wrong");
        }
    }
}


//Function for singly linked list
//insertion at beginning for singly linked list
void add_beg()
{
   struct node *newnode,*temp;
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("Enter the data part of the node:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;

       if(start==NULL)
       {
        start=temp=newnode;
       }
       else
       {
        temp=start;
        start=newnode;
        start->next=temp;
       }
}
//insertion at specific location for singly linked list
void add_specific()
{
    struct node *newnode,*temp,*elder;
    int pos,i,j;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data part of the node:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    
    printf("Enter the position in which you want to add new node:");
    scanf("%d",&pos);
    
    if(start==NULL)
    {
        start=newnode;
    }
    
    else
    {
    temp=start;
    elder=start;
    for(i=1;i!=pos;i++)
    {
        elder=elder->next;
    }
    for(j=1;j<pos-1;j++)
    {
       temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=elder;
    }
}

//insertion at the end for singly linked list
void add_end()
{
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data part of the node:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   
   if(start==NULL)
   {
    start=newnode;
   }
   else
   {
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   }

}

//deletion at beginning for singly linked list
void delete_beg()
{
   struct node *temp;
   temp=start;
   if(start==NULL)
   {
       printf("List is empty\n");
   }
   else if(start->next==NULL)
   {
        printf("Deleted element is %d\n",temp->data);
        free(temp);
        start=NULL;
   }
   else
   {
        printf("Deleted element is %d\n",temp->data);
        start=start->next;
        free(temp);
   }
}

//delection at specific position for singly linked list
void delete_specific()
{
   struct node *temp,*t;
   temp=start;
   t=start;
   int pos,i=1;
   if(start==NULL)
   {
    printf("list is empty\n");
   }
   else if(start->next==NULL)
   {
        printf("Deleted element is %d\n",temp->data);
        free(temp);
        start=NULL;
   }
   else
   {
    printf("Enter the position of the node you want to delete:");
    scanf("%d",&pos);
    while(i<pos)
    {
        t=temp;
        temp=temp->next;
        i++;
    }
    t->next=temp->next;
    printf("Deleted element is %d\n",temp->data);
    free(temp);
   }
}

//deletion at the end for singly linked list
void delete_end()
{
   struct node *temp,*t;
   temp=start;
   if(start==NULL)
   {
    printf("List is empty\n");
   }
   else if(start->next==NULL)
   {
        printf("Deleted element is %d\n",temp->data);
        free(temp);
        start=NULL;
   }
   else
   {
    while(temp->next!=NULL)
    {
        t=temp;
        temp=temp->next;
    }
    t->next=NULL;
    printf("Deleted element is %d\n",temp->data);
    free(temp);
   }
}

//displaying for singly linked list
void display_SLL()
{
    struct node *temp;
    temp=start;
    if(temp==NULL)
    {
        printf("The list is empty");
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

//Functions for circular linked list
//inserting the node at beginning for circular linked list
void add_beg_cll()
{
    struct node *newnode,*temp,*t;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(start==NULL)
    {
        start=newnode;
        start->next=newnode;
    }

    else
    {
        t=start;
        while(t->next!=start)
        {
            t=t->next;
        }
        newnode->next=start;
        start=newnode;
        t->next=start;
    }
}

//insertion at specific position for circular linked list
void add_specific_cll()
{
   struct node *newnode,*t,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;

   if(start==NULL)
   {
      start=newnode;
      start->next=start;
   }
   else
   {
    int pos,i,j;
    printf("Enter the position of the node:");
    scanf("%d",&pos);
    temp=start;
    t=start;
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    for(j=1;j<pos-1;j++)
    {
        t=t->next;
    }
    newnode->next=temp;
    t->next=newnode;
   }

}

//insertion at the end for circular linked list
void add_end_cll()
{
    struct node *newnode,*t;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(start==NULL)
    {
        start=newnode;
        start->next=start;
    }
    else
    {
        t=start;
        while(t->next!=start)
        {
            t=t->next;
        }
        t->next=newnode;
        t->next->next=start;
    }

}

//deletion at beginning for circular linked list
void delete_beg_cll()
{
    struct node *temp,*t;
    temp=start;
    t=start;
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else if(start->next==start)
   {
        printf("Deleted element is %d\n",t->data);
        free(t);
        start=NULL;
   }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        start=t->next;
        temp->next=start;
        printf("Deleted element is %d\n",t->data);
        free(t);
    }
}

//delection at specific position for circular linked list
void delete_specific_cll()
{
    int i=1,pos;
    struct node *temp,*t;
    temp=start;
    t=start;
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else if(start->next==start)
   {
        printf("Deleted element is %d\n",temp->data);
        free(temp);
        start=NULL;
   }
    else
    {
        printf("Enter the position of node that you want to delete:");
        scanf("%d",&pos);
        while(i<pos)
        {
            t=temp;
            temp=temp->next;
            i++;
        }
        t->next=temp->next;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}

//deletion at the end for circular linked list
void delete_end_cll()
{
    struct node *temp,*t;
    temp=start;
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else if(start->next==start)
   {
        printf("Deleted element is %d\n",temp->data);
        free(temp);
        start=NULL;
   }
    else
    {
        while(temp->next!=start)
        {
            t=temp;
            temp=temp->next;
        }
        t->next=start;
        printf("Deleted element is %d\n",temp->data);
        free(temp);
    }
}

//displaying for circular linked list
void display_cll()
{
    struct node *t;
    t=start;
    if(t==NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        do
        {
        printf("%d->",t->data);
        t=t->next;
        }
        
    while(t!=start);
    printf("\n");
    }
}

//functions of doubly linked list
//insertion at beginning for doubly linked list
void add_beg_dll()
{
   struct node1 *newnode,*temp;
   newnode=(struct node1*)malloc(sizeof(struct node1));
   printf("Enter the Data:");
   scanf("%d",&newnode->data1);
   newnode->next1=NULL;
   newnode->prev1=NULL;

   if(start1==NULL)
   {
    start1=newnode;
   }
   else
   {
    temp=start1;
    start1=newnode;
    start1->next1=temp;
   }
}

//insertion at specific position for doubly linked list
void add_specific_dll()
{
   struct node1 *newnode,*temp,*t;
   newnode=(struct node1*)malloc(sizeof(struct node1));
   printf("Enter the data:");
   scanf("%d",&newnode->data1);
   newnode->next1=NULL;
   newnode->prev1=NULL;
   
   if(start1==NULL)
   {
      start1=newnode;
   }
   else
   {
      int pos,i,j;
      printf("Enter the position of the new node:");
      scanf("%d",&pos);
      temp=start1;
      t=start1;
      for(i=1;i<pos;i++)
      {
        temp=temp->next1;
      }
      for(j=1;j<pos-1;j++)
      {
        t=t->next1;
      }
      t->next1=newnode;
      newnode->prev1=t;
      newnode->next1=temp;
      temp->prev1=newnode;
   }
}

//insertion at the end for doubly linked list
void add_end_dll()
{
   struct node1 *newnode,*temp;
   newnode=(struct node1*)malloc(sizeof(struct node1));
   printf("Enter the data:");
   scanf("%d",&newnode->data1);
   newnode->next1=NULL;
   newnode->prev1=NULL;

   if(start1==NULL)
   {
      start1=newnode;
   }
   else
   {
      temp=start1;
      while(temp->next1!=NULL)
      {
         temp=temp->next1;
      }
      temp->next1=newnode;
      newnode->prev1=temp;
   }

}

//deletion at beginning for doubly linked list
void delete_beg_dll()
{
   struct node1 *temp;
   temp=start1;
   if(start1==NULL)
   {
      printf("list is empty\n");
   }
   else if(start1->next1==NULL)
   {
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
        start1=NULL;
   }
   else
   {
      start1=temp->next1;
      start1->prev1=NULL;
      printf("Deleted element is %d\n",temp->data1);
      free(temp);
   }
}

//deletion at specific position for doubly linked list
void delete_specific_dll()
{
   struct node1 *temp,*t;
   temp=start1;
    t=start1;
   int i=1,pos;
   if(start1==NULL)
   {
      printf("list is empty\n");
   }
   else if(start1->next1==NULL)
   {
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
        start1=NULL;
   }
   else
   {
      printf("Enter the position of node that you want to delete:");
      scanf("%d",&pos);
      while(i<pos)
      {
         t=temp;
         temp=temp->next1;
         i++;
      }
      t->next1=temp->next1;
      temp->next1->prev1=t;
      printf("Deleted element is %d\n",temp->data1);
      free(temp);
   }
}

//deletion at the end for doubly linked list
void delete_end_dll()
{
    struct node1 *temp,*t;
    temp=start1;
    t=start1;
    if(start1==NULL)
    {
        printf("list is empty\n");
    }
    else if(start1->next1==NULL)
   {
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
        start1=NULL;
   }
    else
    {
        while(temp->next1!=NULL)
        {
            t=temp;
            temp=temp->next1;
        }
        t->next1=NULL;
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
    }
}

//displaying for doubly linked list
void display_dll()
{
   struct node1 *temp;
   temp=start1;
   if(temp==NULL)
   {
    printf("list is empty\n");
   }
   else
   {
    while(temp!=NULL)
    {
        printf("%d->",temp->data1);
        temp=temp->next1;
    }
    printf("\n");
   }
}


//functions for doubly circular linked list
//insertion at beginning for doubly circular linked list
void add_beg_dcll()
{
   struct node1 *newnode,*temp,*t;
   newnode=(struct node1*)malloc(sizeof(struct node1));
   printf("Enter the data:");
   scanf("%d",&newnode->data1);
   newnode->next1=NULL;
   newnode->prev1=NULL;

   if(start1==NULL)
   {
      start1=newnode;
      start1->next1=start1;
   }
   else
   {
      t=start1;
      while(t->next1!=start1)
      {
        t=t->next1;
      }
      temp=start1;
      start1=newnode;
      start1->next1=temp;
      temp->prev1=start1;
      t->next1=start1;
   }
}

//for the displaying for doubly circular linked list
void display_dcll()
{
   struct node1 *dis;
   dis=start1;
   if(dis==NULL)
   {
      printf("list is empty\n");
   }
   else
   {
      do
      {
         printf("%d->",dis->data1);
         dis=dis->next1;
      }
      while(dis!=start1);
      printf("\n");
   }
}

//insertion at specific position for doubly circular linked list
void add_specific_dcll()
{
   struct node1 *newnode,*temp,*t;
   newnode=(struct node1*)malloc(sizeof(struct node1));
   printf("Enter the data:");
   scanf("%d",&newnode->data1);
   newnode->next1=NULL;
   newnode->prev1=NULL;

   if(start1==NULL)
   {
      start1=newnode;
      start1->next1=start1;
   }
   else
   {
      int pos,i,j;
      printf("Enter the position you want to add the node:");
      scanf("%d",&pos);
      struct node1 *temp,*t;
      temp=start1;
      t=start1;
      for(i=1;i<pos-1;i++)
      {
         temp=temp->next1;
      }
      for(j=1;j<pos;j++)
      {
         t=t->next1;
      }
      temp->next1=newnode;
      newnode->prev1=temp;
      newnode->next1=t;
      t->prev1=newnode;
   }
}

//insertion at the end for doubly circular linked list
void add_end_dcll()
{
   struct node1 *newnode,*temp;
   newnode=(struct node1*)malloc(sizeof(struct node1));
   printf("Enter the data:");
   scanf("%d",&newnode->data1);
   newnode->next1=NULL;
   newnode->prev1=NULL;

   if(start1==NULL)
   {
      start1=newnode;
      start1->next1=start1;
   }
   else
   {
      temp=start1;
      while(temp->next1!=start1)
      {
         temp=temp->next1;
      }
      temp->next1=newnode;
      newnode->prev1=temp;
      newnode->next1=start1;
   }
}

//deletion at the beginning for doubly circular linked list
void delete_beg_dcll()
{
   struct node1 *temp,*t;
   temp=start1;
    t=start1;
   if(start1==NULL)
   {
      printf("List is empty\n");
   }
   else if(start1->next1==start1)
   {
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
        start1=NULL;
   }
   else
   {
      while(t->next1!=start1)
      {
        t=t->next1;
      }
      start1=start1->next1;
      start1->prev1=NULL;
      t->next1=start1;
      printf("Deleted element is %d\n",temp->data1);
      free(temp);
   }
}

//deletion at the specific position for doubly circular linked list
void delete_specific_dcll()
{
   struct node1 *temp,*t;
   temp=start1;
      t=start1;
   int i=1,pos;
   if(start1==NULL)
   {
      printf("List is empty\n");
   }
   else if(start1->next1==start1)
   {
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
        start1=NULL;
   }
   else
   {
      printf("Enter the position of the node that you want to delete:");
      scanf("%d",&pos);
      while(i<pos)
      {
         t=temp;
         temp=temp->next1;
         i++;
      }
      t->next1=temp->next1;
      temp->next1->prev1=t;
      printf("Deleted element is %d\n",temp->data1);
      free(temp);
   }
}

//deletion at the end for doubly circular linked list
void delete_end_dcll()
{
   struct node1 *temp,*t;
   temp=start1;
   if(start1==NULL)
   {
      printf("List is empty\n");
   }
   else if(start1->next1==start1)
   {
        printf("Deleted element is %d\n",temp->data1);
        free(temp);
        start1=NULL;
   }
   else
   {
      while (temp->next1!=start1)
      {
         t=temp;
         temp=temp->next1;
      }
      t->next1=start1;
      printf("Deleted element is %d\n",temp->data1);
      free(temp);
      
   }
}

//functions for stack using array
//to delete from the stack uisng array
void pop()
{
    if(top==-1)
    {
        printf("Stack will underflow");
    }
    else
    {
        printf("The deleted element is %d",stack[top]);
        top--;
    }
}

//to add on the stack using array
void push()
{
    if(top==size-1)
    {
        printf("Stack will overflow");
    }    

    else
    {
        printf("Enter the element you want to add in stack:");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }

}

//to display the stack using array
void display_stack_array()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The elements in stack are \n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

//function for stack using linked list
//for push operation using linked list
void push_stack_ll()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be pushed:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(top_LL==NULL)
    {
        top_LL=newnode;
    }
    else
    {
        newnode->next=top_LL;
        top_LL=newnode;
    }
}

//for pop operation using linked list
void pop_stack_ll()
{
    struct node *temp;
    if(top_LL==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        temp=top_LL;
        printf("The deleted data is %d\n",temp->data);
        top_LL=top_LL->next;
        free(temp);
    }
}

//for displaying stack using linked list
void display_stack_ll()
{
    struct node *dis;
    if(top_LL==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        dis=top_LL;
        while(dis!=NULL)
        {
            printf("%d\n",dis->data);
            dis=dis->next;
        }
    }
}

//functions of queue using array
//insertion in queue using array
void insertion_q()
{
    if(front_a==-1)
    {
        front_a++;
    }

    if(rear_a==size-1)
    {
        printf("Overflow\n");
    }

    else
    {
    printf("Enter the element you want to insert:");
    scanf("%d",&ele);
    rear_a++;
    qu[rear_a]=ele;
    }
}

//deletion in queue using array
void deletion_q()
{
    if(front_a==-1 || front_a>rear_a)
    {
        printf("Underflow\n");
    }
    printf("The deleted element is %d",qu[front_a]);
    front_a++;
}

//displaying the queue using array
void display_q()
{
    if(front_a==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
    for(int i=front_a;i<=rear_a;i++)
    {
        printf("%d\n",qu[i]);
    }
    }
}

//functions for queue using linked list
//insertion in queue using linked list
void insert_qu_LL()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data in Queue:");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}

//deletion in queue using linked list
void delete_qu_LL()
{
    struct node *t;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        t=front;
        front=front->next;
        free(t);
    }
}

//displaying the queue using linked list
void display_qu_LL()
{
    struct node *dis;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        dis=front;
        while(dis!=NULL)
        {
            printf("%d->",dis->data);
            dis=dis->next;
        }
    }
}

//functions for circular queue using array
//insertion for circular queue using array
void c_insert_queue()
{
    
    if((rear_c+1)%n==front_c)
    {
        printf("Circular queue is full\n");
    }
    else
    {
        printf("Enter the element you want to insert:");
        scanf("%d",&ele_c);
        rear_c=(rear_c+1)%n;
        c_qu[rear_c]=ele_c;
    }
    
    if(front_c==-1)
    {
        front_c++;
    }
}

//deletion for circular queue using array
void c_delete_queue()
{
    if(front_c==-1 && rear_c==-1)
    {
        printf("Circular Queue is empty\n");
    }

    else if(front_c==rear_c)
    {
        printf("The Deleted element is %d\n",c_qu[front_c]);
        front_c=rear_c=-1;
    }

    else
    {
        printf("The Deleted element is %d\n",c_qu[front_c]);
        front_c=(front_c+1)%n;
    }
}

//displaying for circular queue using array
void c_display_queue()
{
    int i=front_c;
    if(front_c==-1 && rear_c==-1)
    {
        printf("Circular Queue is empty\n");
    }
    else
    {
        printf("The elements of circular Queue is \n");
        while(i!=rear_c)
        {
            printf("%d ",c_qu[i]);
            i=(i+1)%n;
        }
        printf("%d\n",c_qu[i]);
    }
}

//function for circular queue using linked list
//insertion in circular queue using linked list
void insertion_cqueue_LL()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in circular queue:");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(front_cLL==NULL && rear_cLL==NULL)
    {
        front_cLL=rear_cLL=temp;
        rear_cLL->next=temp;
    }

    else
    {
        rear_cLL->next=temp;
        rear_cLL=temp;
        rear_cLL->next=front_cLL;
    }
}

//deletion in circular queue using linked list
void deletion_cqueue_LL()
{
    struct node *t=front_cLL;
    if(front_cLL==NULL && rear_cLL==NULL)
    {
        printf("Circular Queue is empty");
    }

    else if(front_cLL==rear_cLL)
    {
        printf("The deleted element is %d",front_cLL->data);
        front_cLL=rear_cLL=NULL;
        free(t);
    }

    else
    {
        printf("The deleted element is %d",front_cLL->data);
        front_cLL=front_cLL->next;
        rear_cLL->next=front_cLL;
        free(t);
    }
}

//displaying the circular queue using linked list
void display_cqueue_LL()
{
    struct node *dis=front_cLL;
    if(front_cLL==NULL && rear_cLL==NULL)
    {
        printf("Circular queue is empty");
    }
    else
    {
        do
        {
            printf("%d->",dis->data);
            dis=dis->next;
        } 
        while (dis!=front_cLL);
        
    }
}

//for searching
//for linear searching
int linearSearch(int a[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return 0;
}

//for binary search
int binarySearch(int a[],int size,int key)
{
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}

//for sorting
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

//for bubble sort
void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

//for selection sort
void selectionsort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        temp=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[temp])
            {
                temp=j;
            }
        }
        
        if(temp!=i)
        {
            swap(&a[temp],&a[i]);
        }
    }
}

//for insertion sort
void insertionsort(int a[],int n)
{
    int temp,j;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

//for merge sort
void merge(int a[],int start,int mid,int end)
{
    int temp[end-start+1];
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else{
            temp[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }

    while(j<=end)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    k=0;
    for(int i=start;i<=end;i++)
    {
        a[i]=temp[k];
        k++;
    }
}

void mergesort(int a[],int start,int end)
{
    int mid=(start+end)/2;
    if(start<end)
    {
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
//for quick sort
int partation(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        start++;

        while(a[end]>pivot)
        end--;

        if(start<end)
        swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    return end;
}

void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partation(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}