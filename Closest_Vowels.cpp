#include<bits/stdc++.h>
#define size 10
 typedef long long ll;
using namespace std;
class Node
{
    public:
    ll phone;
    string name;
    Node *next;
    Node()
    {
        phone=0;
        name=" ";
        next=NULL;
    }
    friend class Hashing;     

};
class Hashing
{   
    public:  
    Node *HashTable[size];
    Hashing(){
        for(int i=0;i<10;i++)
        {
            HashTable[i]=NULL;
        }
    }
    int Hash_func(ll phn)
    {
        return phn%size;
    }
    void insert(ll phn,string nam)
    {
        int key=Hash_func(phn);
        Node *newnode= new Node;
        newnode->phone=phn;
        newnode->name=nam;
        bool flag=false;
        if(HashTable[key]==NULL)
        {
            HashTable[key]=newnode;
        }
        else
        {
            Node*ptr=HashTable[key];
            while(ptr->next!=NULL)
            {
                if(ptr->phone=phn)
                {
                    flag=true;
                }
                ptr=ptr->next;
            }
            if(!flag)
            {
                ptr->next=newnode;
            }
            else
            {
                cout<<"Duplicate elements not allowed"<<endl;
            }

        }
        




    }
    void search(ll phn)
    {
        int key=Hash_func(phn);
        Node *ptr=HashTable[key];
        if(HashTable[key]==NULL)
        {
            cout<<"Data not found"<<endl;
        }
        else
        {
            while(ptr->phone!=phn)
            {
                ptr=ptr->next;
            }
            if(ptr->next==NULL)
            {
                cout<<"Data not found"<<endl;
            }
            else
            {
                cout<<"Data Found"<<endl;
                cout<<ptr->phone<<"-->"<<ptr->name<<endl;
            }
        }
    }
};
int main (){
    
    return 0;
}