#ifndef FILEBROWSER_H
#define FILEBROWSER_H

#include <QtWidgets>

class FileBrowser : public QWidget
{
    Q_OBJECT
private:
    QFileSystemModel fileModel;
    QTreeView pTreeView;
public:
    explicit FileBrowser(QWidget *parent = 0);

signals:

public slots:
    void show();
};

#endif // FILEBROWSER_H
