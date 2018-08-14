import java.io.*;
import java.util.*;
public class Queues{
    int queue[] = new int[100];
        int size;
        int front;
        int rear;
         public void enqueue(int data)
        {
            queue[rear]=data;
            rear=rear+1;
            size=size+1;
        }
        public void dequeue()
        {
            int data=queue[front];
            front++;
            size=size-1;    
        }
         public void show()
        {
            for(int i=0;i<size;i++)
            {
                System.out.println(queue[front+i]);
            }
        }
    public static void main(String args[])
    {
        Queues obj = new Queues();
        obj.enqueue(5);
        obj.enqueue(7);
        obj.enqueue(9);
        obj.dequeue();
        obj.show();
    }
}
//output:
5 7 9 
//after dequeue
7 9
