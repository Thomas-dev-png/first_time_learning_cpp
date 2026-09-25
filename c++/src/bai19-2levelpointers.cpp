#include <iostream>

void swap(int **first,int**second){
    int*temp = *first;
    *first = *second;
    *second = temp;
}

// int main() {
//     int sword = 50;
//     int bow = 30;
//     int* p1 = &sword;
//     int* p2 = &bow;
//    std::cout << p1 << " " <<p2;
//     std::cout << std::endl;
//     swap(&p1,&p2);
//     std::cout << p1 << " " <<p2;

//     return 0;
// }

// void spawnArray(int** ptr) {
//     *ptr = new int[5];
// }

// int main() {
//     int* myArray = nullptr;
//     spawnArray(&myArray); 
//     // int a = 5;
//     // int *pa = &a;
//     // std::cout << &pa<<std::endl;
//     // int **ppa = &pa;
//     // std::cout << *ppa;
// }

// void upgradeLevel(int * &p,int newsize){
//     delete[] p;
//     p = new int[newsize];

// }

// int main() {
//     // The player is currently playing a small level
//     int* currentLevel = new int[10]; 
    
//     // Transition portal hit! Upgrade the level.
//     upgradeLevel(currentLevel, 1000);
// }
namespace GameSystem
{
    void resizeInventory(int * &p,int newsize){
        delete[] p;
        p = new int[newsize];
    }
} // namespace name


int main(){
    int current_size = 3;
    int *playerInventory = new int[current_size]{101,102,103};
    std::cout << "Original inventory size: " << current_size << std::endl;

    int newSize = 10;
    GameSystem::resizeInventory(playerInventory,newSize);

    std::cout << "Inventory resized to " << newSize << " successfully!" << std::endl;

    delete[] playerInventory;
    return 0;
}