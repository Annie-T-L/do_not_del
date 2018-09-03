#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void findSome(int n1, int n2, int n3)
    {
        for(int i1=0;i1<n3;i1++)
        {
            for(int i2=0;i2<n3;i2++)
            {
                if (n1*i1+n2*i2 == n3)
                {   qDebug() << n3 << n1<< n2 << " ---- " << i1 << i2;  }
            }
        }
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.findSome(3,2,100);

    for(int i1=1;i1<100;i1++)
    {
//        int n1=qrand()%100;
//        int n2=qrand()%90;
    }
    return a.exec();
}
