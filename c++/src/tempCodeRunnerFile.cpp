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