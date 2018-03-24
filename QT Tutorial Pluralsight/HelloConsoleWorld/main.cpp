#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    //    QCoreApplication a(argc, argv);
    QString msg ("Hi there this is Mike");
    qWarning() << "Hello Console"<<7<<"Mike";
    qWarning().nospace() << "Hello Console"<<7<<"Mike";
    qWarning() << msg;
    qWarning(msg.toStdString().c_str());
    qWarning(qPrintable(msg));

    QTextStream out_stream(stdout);
    out_stream.setFieldWidth(10);
    out_stream.setPadChar('*');
    out_stream << "QTextStream:\n" << msg << 7 << "\n";

    //    qWarning("Hello Console");
    //    return a.exec();
}
