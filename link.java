import java.util.*;
class link
{
    node head;
    public class node{
        int data;
        node next;

        node(int d)
        {
            data=d;
            next=null;
        }
    }

    public void  push(int new_data)
    {
        //idula na new_node nu ona allocate pani aduku new data assign pandran
        node new_node = new node(new_data);
        //new node oda next value head aganum eg:1,2 na ans:2,1
        new_node.next=head;
        //move the head point to new_node
        head= new_node;
    }

    public void printList(){
        node n = head;
        while(n!=null)
        {
            System.out.print(n.data+" ");
            n = n.next;
        }
    }

    public static void main(String args[])
    {
        LinkedList links = new LinkedList();
        links.push(1);
        links.push(2);
        links.printList();
    }
}