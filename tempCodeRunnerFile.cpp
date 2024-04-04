    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (d[i] < d[j])
            {
                tam = d[i];
                d[i] = d[j];
                d[j] = tam;
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
                tam = b[i];
                b[i] = b[j];
                b[j] = tam;
                tam = c[i];
                c[i] = c[j];
                c[j] = tam;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";;
    }