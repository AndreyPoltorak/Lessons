namespace Tasks
{
        void task_2(int *mass, int size_mass)
    {
        int value =1;
        for(int i = 0; i < size_mass; i++)
        {
            mass[i] = value;
            value+=3;
        }
    }
}