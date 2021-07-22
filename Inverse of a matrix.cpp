

    //TO FIND INVERSE OF A MATRIX
    #include<iostream>
    using namespace std;
    #include<conio.h>
    #include<math.h>



    float A[3][3],B[3][3];
    int i,j,k,l,m,n,e,f,g,h;
    float det =0;
    int main()
    {

    cout<<"Enter the 3x3 matrix :"<<endl;//Enters the matrix
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    cin>>A[i][j];
    //To find cofactor and determinant
    for(i=0,k=1,m=2,e=-1,g=2;i<3;i++,e++,g--,k-=g,m-=e)
    {
    for(j=0,l=1,n=2,f=-1,h=2;j<3;j++,f++,h--,l-=h,n-=f)
    {
    B[i][j]=pow(-1,(i+j))*((A[k][l]*A[m][n])-(A[m][l]*A[k][n]));
    if(i==0)
    {
    det+=A[i][j]*B[i][j];
    }
    }
    }
    cout<<"The determinant of the matrix is "<<det;
    cout<<"\nCofactor of the matrix is :\n";
    for(i=0;i<3;i++)
    {
    cout<<"\n";
    for(j=0;j<3;j++)
    cout  <<B[i][j]<<"\t";
    }
    //To find adjoint
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    A[i][j]=B[j][i];
    cout<<"\nAdjoint of the matrix is :\n";
    for(i=0;i<3;i++)
    {
    cout<<"\n";
    for(j=0;j<3;j++)
    cout <<A[i][j]<<"\t";
    }
    //To find inverse
    for(i=0;i<=2;i++)
    {
    for(j=0;j<3;j++)
    A[i][j]*=(1/det);
    }
    cout<<"\nInverse of the matrix is :\n";
    for(i=0;i<3;i++)
    {
    cout<<"\n";
    for(j=0;j<3;j++)
    {
    cout <<A[i][j]<<"\t"<<"\t";
    }
    }
    getch();
    }
