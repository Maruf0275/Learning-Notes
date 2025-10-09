#include <iostream>
using namespace std;

class Hero{
    private:
    int Health;
    public:
    char Level;

    int getHealth(){
        return Health;
    }
    void setHealth(int h){
        Health=h;
    }
};

int main()
{
    Hero maruf;
    cout<<"Size of Maruf is : "<<sizeof(maruf)<<endl;
    maruf.Level='A';
    maruf.setHealth(100);
    cout<<"Level is : "<<maruf.Level<<endl;
    cout<<"Health is : "<<maruf.getHealth()<<endl;
    return 0;
}



/*

class hero(){
    int a;
    char name;
}

hero h1;
why sizeof h1 is 8 instead of 5??


ans:
The size of the hero class instance h1 is not 5 because of padding added by the compiler for alignment purposes. 
In your hero class, you have an int member (a) which typically requires alignment to 4 bytes (on most systems), and a char member (name).
On many systems, the size of a char is 1 byte, and the size of an int is typically 4 bytes. However, the compiler often adds padding between members of a class or 
structure to ensure that each member is aligned to an address that is a multiple of its size. This is done for efficiency reasons, as accessing properly aligned memory can be more efficient on some architectures.
So, in your case, even though you might expect the size to be 5 bytes (1 byte for char + 4 bytes for int), the compiler adds 3 bytes of padding after the char name member to ensure that the int a member is properly aligned. 
Hence, the total size becomes 8 bytes.
*/


/*
greedy alignment:
struct Example {
    char a;
    int b;
};

In this case, char typically requires alignment of 1 byte, while int usually requires alignment of 4 bytes (on many systems). 
A greedy alignment strategy would align the int member on a boundary that satisfies its alignment requirement, even if it means leaving unused space after the char member.

So, the structure might be laid out like this:
| a | unused | b | b | b | b |
Here, a is aligned on a 1-byte boundary, and b starts at an address that is a multiple of 4 bytes, satisfying the alignment requirement for int.

Greedy alignment can lead to less memory-efficient data structures, as it may introduce padding between members to ensure proper alignment. However, it's often used for performance reasons, 
as accessing properly aligned data can be more efficient, especially on some architectures.
*/