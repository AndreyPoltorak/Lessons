namespace Tasks
{
    void task_1(int *mass, int size_mass)
    {
        for(int i = 0; i < size_mass; i++)
        {
            mass[i] = mass[i]^0x01;
        }

    } 
}