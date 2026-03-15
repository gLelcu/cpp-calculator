#include "gelato.h" // qt
#include "ui_gelato.h" //qt

MainWindow::MainWindow(QWidget *parent) //constructor din MainWindow si trimite la parent
    : QMainWindow(parent)   //qt gen
    , ui(new Ui::gelato2calc) //gt gen
{
    ui->setupUi(this);


    ///conectez toate buttoanele cifra la ac functie - digit_pressed() -
    connect(ui->pushButton_0, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_00,&QPushButton::clicked, this, &MainWindow::digit_pressed);

    ///conectez virgula la ac functie
    connect(ui->pushButton_virgula, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    /// si clear la  - clear_pressed() -
    connect(ui->pushButton_clear, &QPushButton::clicked, this, &MainWindow::clear_pressed);

    ///conectam oparanzii
    connect(ui->pushButton_adunare, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_scadere, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_inmultire, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_impartire, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_mod, &QPushButton::clicked, this, &MainWindow::operator_pressed);

    connect(ui->pushButton_equal, &QPushButton::clicked, this, &MainWindow::equal_pressed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

   /// afisare cifrei apasate pe "ecran"
void MainWindow::digit_pressed()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender()); /// trimite textul de pe buton
    if (!button)
        return;

    QString currentText = ui->plainTextEdit_result->toPlainText(); ///pune in currentText rezultatul


    /// daca cifra e 0 sau am citit un nr?
    if( currentText == "0" or wait_sec_num )
    {
        currentText = "";
        wait_sec_num = false;
    }

    QString buttonText = button->text();

    ui->plainTextEdit_result->setPlainText(currentText + buttonText); ///lipeste cifrele intre ele ex: daca avem "1" "1" face "11"
    ///** ulterior voi face din "11" in double (n am chef sa construiesc nr in puteri ale lui 10)
};

void MainWindow::clear_pressed()
{
    ui->plainTextEdit_result->setPlainText(""); /// C scrie sirul vid in plain text
    first_num = 0;
    ooperator = "";
    wait_sec_num = false;
};

void MainWindow::operator_pressed()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button)
        return;

    QString currentText = ui->plainTextEdit_result->toPlainText();
    first_num = currentText.toDouble(); //transformam primul nr in nr real

    ooperator = button->text();  //extragem oparatoru
    wait_sec_num = true;

}

///functie pt a verifica daca un nr este real pt modulo
bool isDouble(double n){
    return n != ceil(n);
}

void MainWindow::equal_pressed()
{
    QString currentText = ui->plainTextEdit_result->toPlainText(); ///ecranaul
    double secondNumber = currentText.toDouble(); ///al doilea nr
    double result = 0;


    if (ooperator == "+")
        if(first_num == 6 and secondNumber == 9) result = 69;
            else result = first_num + secondNumber;
    else if (ooperator == "-")
        result = first_num - secondNumber;
    else if (ooperator == "X")
        result = first_num * secondNumber;
    else if (ooperator == "/")
    {
        if (secondNumber == 0) ///impartirea la 0
        {
            ui->plainTextEdit_result->setPlainText("∄ ℝ boule");
            ooperator = "";
            wait_sec_num = false;
            return;
        }

        result = first_num / secondNumber;
    }
    else if (ooperator == "%"){
        if(isDouble(first_num) or isDouble(secondNumber)) { ///verificam daca nr e double
            ui->plainTextEdit_result->setPlainText("err: can only mod int numbers"); //mod int
            ooperator = "";
            wait_sec_num = false;
            return;
        }
        else result = int(first_num) % int(secondNumber); ///chiar daca nr sunt int, calculatorul le vede tot ca double

    }

    ui->plainTextEdit_result->setPlainText(QString::number(result)); ///afisam rezultat
    ooperator = "";
    wait_sec_num = false;
}





