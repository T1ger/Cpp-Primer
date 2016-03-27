#include <iostream>
#include <memory>
#include <string>

int main() {
    int ix = 1024, *pi = &ix, *pi2 = new int(2048); 
    typedef std::unique_ptr<int> IntP;
    
    // IntP p0(ix);
    // error: no matching constructor for initialization of 'IntP' (aka 'unique_ptr<int>')
    
    // IntP p1(pi);
    //malloc: *** error for object 0x7fff5de108a8: pointer being freed was not allocated
    
    // IntP p2(pi2);
    
    // IntP p3(&ix);
    // malloc: *** error for object 0x7fff5397d8a8: pointer being freed was not allocated
    
    IntP p4(new int(2048));
    
    IntP p5(p2.get());
    
    return 0;
}