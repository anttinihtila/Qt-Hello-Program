#include <QApplication>
#include <QLabel>
#include <QFont>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QLabel myLabel;
    myLabel.setWindowTitle("Hello");
    QFont serifFont("Times", 20, QFont::Bold);
    myLabel.setFont(serifFont);
    myLabel.setText("Hello!<br/>Programming by Qt is fun.");
    myLabel.setAlignment(Qt::AlignCenter);
    myLabel.setStyleSheet("color: blue; background-color:gray;");
    myLabel.resize(400, 175);
    myLabel.show();
    return app.exec();
}
