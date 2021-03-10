namespace Tasks
{
    void task_4(int *mass, int size_mass, int n)
    {
        int mass_new[size_mass];
        
        for(int i = 0; i < size_mass; i++)
    {
        mass_new[i] = mass[i];
    }
    n=n-1;
        for(int i = 0; i < size_mass; i++)
    {
        mass[i] = mass_new[(i+n)%size_mass]; 
    }

        //mass = mass_new;
    }

}