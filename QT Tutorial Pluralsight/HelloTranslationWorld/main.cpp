#include <QCoreApplication>
#include <QObject>
#include <QTextStream>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTranslator translator;
    bool result = translator.load("trans_fr");
    if(!result)
    {
        out_stream << "Error: Failed to load the translation files";
    }

    QString msg1 = QObject::tr("Hello my friend.");
    QString msg2 (QObject::tr("Goodbye"));

    QTextStream out_stream(stdout);

    out_stream << msg1 << '\n' << msg2 << endl;

    return a.exec();
}
