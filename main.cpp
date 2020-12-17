#include <QtWidgets>
#include "filebrowser.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    QSplitter spl(Qt::Horizontal);
//    QFileSystemModel model;

//    model.setRootPath(QDir::rootPath());

//    QTreeView* pTreeView = new QTreeView;
//    pTreeView->setModel(&model);

//    QObject::connect(pTreeView, SIGNAL(clicked(const QModelIndex&)),
//                     pTableView, SLOT(setRootIndex(const QModelIndex&)));

//    spl.addWidget(pTreeView);
//    spl.addWidget(pTableView);
//    spl.show();
    FileBrowser x;
    x.show();


    return app.exec();
}
