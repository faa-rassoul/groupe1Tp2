float moyenne( float tab[n], const n=10){
    float m,s;
    int i;    
    s=0;
    for (int i=0; i<n; i++){
    s=s+tab[i];
    }
    m=s/n;
    return m;
}