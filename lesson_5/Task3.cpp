namespace Tasks
{
        bool task_3(int mass[],int size_mass)
    {
        for(int i = 1 ; i < size_mass; i++ )
        {
            int summ_l = 0;
            for(int j = 0; j<i; j++)
            {
                summ_l+=mass[j];
            }

            int summ_r = 0;
            for(int j = i; j<size_mass; j++)
            {
                summ_r+=mass[j];
            }
            if(summ_l == summ_r)
            {
                return true;
            }

        }
        return false;
    }
}