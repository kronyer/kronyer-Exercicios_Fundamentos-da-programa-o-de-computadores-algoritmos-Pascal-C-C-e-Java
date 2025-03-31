int main (){
    int cursnado_logica[10] = {55, 60, 70, 80, 90, 100, 110, 120, 130, 140};
    int cursando_linguagens[10] = {54, 60, 72, 80, 94, 112, 115, 121, 131, 140};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (cursnado_logica[i] == cursando_linguagens[j])
            {
                printf("%d esta cursando ambas as disciplinas\n", cursnado_logica[i]);
                break;
            }
        }
    }
}