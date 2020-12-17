#include "filebrowser.h"

FileBrowser::FileBrowser(QWidget *parent) : QWidget(parent)
{
    fileModel.setRootPath(QDir::rootPath());
    pTreeView.setModel(&fileModel);
}

void FileBrowser::show()
{
    pTreeView.show();
}
