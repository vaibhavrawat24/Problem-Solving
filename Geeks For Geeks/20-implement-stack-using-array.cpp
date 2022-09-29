//Implement stack using array
//Problem Link: https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1?page=2&category[]=Arrays&sortBy=difficulty

//Time Complexity:
//Space Complexity:

//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    if(top==999)
    {
      return;
    }

     top++;
     arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1)
    {
        return -1;
    }

    int res=arr[top];
    top--;

    return res;  
}
