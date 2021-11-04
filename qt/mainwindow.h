#pragma once

#include <QtWebEngineWidgets>

class WebEnginePage: public QWebEnginePage{
    Q_OBJECT
public:
    using QWebEnginePage::QWebEnginePage;
protected:
    QWebEnginePage *createWindow(WebWindowType ){
        WebEnginePage *page = new WebEnginePage(this);
        connect(page, &QWebEnginePage::urlChanged, this, &WebEnginePage::onUrlChanged);
        return page;
    }
private Q_SLOTS:
    void onUrlChanged(const QUrl & url){
        if(WebEnginePage *page = qobject_cast<WebEnginePage *>(sender())){
            setUrl(url);
            page->deleteLater();
        }
    }
};

class MainWindow : public QWebEngineView
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

