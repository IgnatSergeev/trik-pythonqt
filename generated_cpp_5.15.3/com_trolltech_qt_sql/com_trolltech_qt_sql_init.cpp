#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_sql0.h"



void PythonQt_init_QtSql(PyObject* module) {
PythonQt::priv()->registerCPPClass("QSql", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSql>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QSqlDatabase", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDatabase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlDatabase>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QSqlDriver::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDriver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlDriver>, module, 0);
PythonQt::priv()->registerCPPClass("QSqlDriverCreatorBase", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDriverCreatorBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlDriverCreatorBase>, module, 0);
PythonQt::priv()->registerCPPClass("QSqlField", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlField>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QSqlIndex", "QSqlRecord", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlIndex>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QSqlQuery", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlQuery>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QSqlQueryModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlQueryModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlQueryModel>, module, 0);
PythonQt::priv()->registerCPPClass("QSqlRecord", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRecord>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QSqlRelationalTableModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRelationalTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlRelationalTableModel>, module, 0);
PythonQt::priv()->registerCPPClass("QSqlResult", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlResult>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlResult>, module, 0);
PythonQt::priv()->registerClass(&QSqlTableModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlTableModel>, module, 0);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPersistentModelIndex);
}
