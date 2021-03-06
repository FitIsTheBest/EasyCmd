﻿#ifndef ICMDEDITOR_H
#define ICMDEDITOR_H

/*******************************************************************************
** 编辑器基类。
** 编辑器设计原则：
** 1.编辑器不可使用对话框，否则会频繁弹出重复的信息，而且不能持续显示。
** 2.多使用QGroupBox，此控件自带选中功能
** 3.出现错误也要继续，不然后面的配置会不显示
** 4.选项即使没有值，也属于有此选项，所以需要用QCheckBox显式指定每个选项，虽然多了一步点击。
**  但是更清楚，不隐晦。列表除外。
** 5.采用通知->查询的方式进行更新。
********************************************************************************/

#include <QString>
#include <QWidget>
#include "Global.h"

class ICmdEditor : public QWidget
{
    Q_OBJECT
public:
    explicit ICmdEditor(QWidget *parent = NULL);

    /**
     * @brief isModified
     *  暂时不用
     * @return
     */
    virtual bool isModified() const = 0;

    /**
     * @brief getCmdName
     *  获取命令名称，在编辑器初始化后作为初始命令显示。
     * @return
     */
    virtual QString getCmdName();

    /**
     * @brief getCmdString
     *  获取完整命令，包括命令名称、参数、可选择项，可以进行校验，对用户进行提示。
     * @return
     */
    virtual QString getCmdString() = 0;

signals:
    void sigModified();/*更新命令*/
    void sigExecute();/*立即执行命令*/
};

#endif // ICMDEDITOR_H
