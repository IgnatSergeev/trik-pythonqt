#include <PythonQt.h>
#include <QNetworkCookie>
#include <QNetworkDatagram>
#include <QNetworkProxy>
#include <QObject>
#include <QSslCipher>
#include <QSslKey>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qdnslookup.h>
#include <qevent.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhstspolicy.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkconfigmanager.h>
#include <qnetworkcookiejar.h>
#include <qnetworkcookie.h>
#include <qnetworkproxy.h>
#include <qnetworkdiskcache.h>
#include <qnetworkdatagram.h>
#include <qnetworkreply.h>
#include <qnetworksession.h>
#include <qpair.h>
#include <qssl.h>
#include <qsslcipher.h>
#include <qsslkey.h>
#include <qsslerror.h>
#include <qsslsocket.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qurl.h>



class PythonQtShell_QAbstractNetworkCache : public QAbstractNetworkCache
{
public:
    PythonQtShell_QAbstractNetworkCache(QObject*  parent = nullptr):QAbstractNetworkCache(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractNetworkCache();

virtual qint64  cacheSize() const;
virtual void clear();
virtual QIODevice*  data(const QUrl&  url);
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractNetworkCache : public QAbstractNetworkCache
{ public:
inline qint64  py_q_cacheSize() const { return this->cacheSize(); }
inline void py_q_clear() { this->clear(); }
inline QIODevice*  py_q_data(const QUrl&  url) { return this->data(url); }
inline void py_q_insert(QIODevice*  device) { this->insert(device); }
inline QNetworkCacheMetaData  py_q_metaData(const QUrl&  url) { return this->metaData(url); }
inline QIODevice*  py_q_prepare(const QNetworkCacheMetaData&  metaData) { return this->prepare(metaData); }
inline bool  py_q_remove(const QUrl&  url) { return this->remove(url); }
inline void py_q_updateMetaData(const QNetworkCacheMetaData&  metaData) { this->updateMetaData(metaData); }
};

class PythonQtWrapper_QAbstractNetworkCache : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractNetworkCache* new_QAbstractNetworkCache(QObject*  parent = nullptr);
void delete_QAbstractNetworkCache(QAbstractNetworkCache* obj) { delete obj; } 
   qint64  cacheSize(QAbstractNetworkCache* theWrappedObject) const;
   qint64  py_q_cacheSize(QAbstractNetworkCache* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_cacheSize());}
   void py_q_clear(QAbstractNetworkCache* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_clear());}
   QIODevice*  data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   QIODevice*  py_q_data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_data(url));}
   void insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device);
   void py_q_insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_insert(device));}
   QNetworkCacheMetaData  metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   QNetworkCacheMetaData  py_q_metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_metaData(url));}
   QIODevice*  prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   QIODevice*  py_q_prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_prepare(metaData));}
   bool  remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   bool  py_q_remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_remove(url));}
   void updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   void py_q_updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_updateMetaData(metaData));}
};





class PythonQtShell_QAbstractSocket : public QAbstractSocket
{
public:
    PythonQtShell_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent):QAbstractSocket(socketType, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void disconnectFromHost();
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSocket : public QAbstractSocket
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setLocalAddress(const QHostAddress&  address) { this->setLocalAddress(address); }
inline void promoted_setLocalPort(unsigned short  port) { this->setLocalPort(port); }
inline void promoted_setPeerAddress(const QHostAddress&  address) { this->setPeerAddress(address); }
inline void promoted_setPeerName(const QString&  name) { this->setPeerName(name); }
inline void promoted_setPeerPort(unsigned short  port) { this->setPeerPort(port); }
inline void promoted_setSocketError(QAbstractSocket::SocketError  socketError) { this->setSocketError(socketError); }
inline void promoted_setSocketState(QAbstractSocket::SocketState  state) { this->setSocketState(state); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QAbstractSocket::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QAbstractSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QAbstractSocket::canReadLine(); }
inline void py_q_close() { QAbstractSocket::close(); }
inline void py_q_connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite) { QAbstractSocket::connectToHost(address, port, mode); }
inline void py_q_connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) { QAbstractSocket::connectToHost(hostName, port, mode, protocol); }
inline void py_q_disconnectFromHost() { QAbstractSocket::disconnectFromHost(); }
inline bool  py_q_isSequential() const { return QAbstractSocket::isSequential(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QAbstractSocket::readLineData(data, maxlen); }
inline void py_q_resume() { QAbstractSocket::resume(); }
inline void py_q_setReadBufferSize(qint64  size) { QAbstractSocket::setReadBufferSize(size); }
inline bool  py_q_setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite) { return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode); }
inline void py_q_setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) { QAbstractSocket::setSocketOption(option, value); }
inline qintptr  py_q_socketDescriptor() const { return QAbstractSocket::socketDescriptor(); }
inline QVariant  py_q_socketOption(QAbstractSocket::SocketOption  option) { return QAbstractSocket::socketOption(option); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForConnected(int  msecs = 30000) { return QAbstractSocket::waitForConnected(msecs); }
inline bool  py_q_waitForDisconnected(int  msecs = 30000) { return QAbstractSocket::waitForDisconnected(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QAbstractSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
};

class PythonQtWrapper_QAbstractSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindFlag PauseMode )
Q_FLAGS(BindMode PauseModes )
enum BindFlag{
  DefaultForPlatform = QAbstractSocket::DefaultForPlatform,   ShareAddress = QAbstractSocket::ShareAddress,   DontShareAddress = QAbstractSocket::DontShareAddress,   ReuseAddressHint = QAbstractSocket::ReuseAddressHint};
enum PauseMode{
  PauseNever = QAbstractSocket::PauseNever,   PauseOnSslErrors = QAbstractSocket::PauseOnSslErrors};
Q_DECLARE_FLAGS(BindMode, BindFlag)
Q_DECLARE_FLAGS(PauseModes, PauseMode)
public slots:
QAbstractSocket* new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent);
void delete_QAbstractSocket(QAbstractSocket* obj) { delete obj; } 
   void abort(QAbstractSocket* theWrappedObject);
   bool  py_q_atEnd(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_atEnd());}
   bool  bind(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   bool  bind(QAbstractSocket* theWrappedObject, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   qint64  py_q_bytesAvailable(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_bytesToWrite());}
   bool  py_q_canReadLine(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QAbstractSocket* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_close());}
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void py_q_connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_connectToHost(address, port, mode));}
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void py_q_connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_connectToHost(hostName, port, mode, protocol));}
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   void py_q_disconnectFromHost(QAbstractSocket* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_disconnectFromHost());}
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   bool  flush(QAbstractSocket* theWrappedObject);
   bool  py_q_isSequential(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_isSequential());}
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::PauseModes  pauseMode(QAbstractSocket* theWrappedObject) const;
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   QString  protocolTag(QAbstractSocket* theWrappedObject) const;
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   qint64  py_q_readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_readData(data, maxlen));}
   qint64  py_q_readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   void resume(QAbstractSocket* theWrappedObject);
   void py_q_resume(QAbstractSocket* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_resume());}
   void setLocalAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address);
   void setLocalPort(QAbstractSocket* theWrappedObject, unsigned short  port);
   void setPauseMode(QAbstractSocket* theWrappedObject, QAbstractSocket::PauseModes  pauseMode);
   void setPeerAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address);
   void setPeerName(QAbstractSocket* theWrappedObject, const QString&  name);
   void setPeerPort(QAbstractSocket* theWrappedObject, unsigned short  port);
   void setProtocolTag(QAbstractSocket* theWrappedObject, const QString&  tag);
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   void py_q_setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_setReadBufferSize(size));}
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  py_q_setSocketDescriptor(QAbstractSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_setSocketDescriptor(socketDescriptor, state, openMode));}
   void setSocketError(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketError  socketError);
   void setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value);
   void py_q_setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_setSocketOption(option, value));}
   void setSocketState(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketState  state);
   qintptr  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   qintptr  py_q_socketDescriptor(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_socketDescriptor());}
   QVariant  socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option);
   QVariant  py_q_socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_socketOption(option));}
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   bool  py_q_waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForConnected(msecs));}
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForDisconnected(msecs));}
   bool  py_q_waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_writeData(data, len));}
    bool __nonzero__(QAbstractSocket* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QAuthenticator* new_QAuthenticator();
QAuthenticator* new_QAuthenticator(const QAuthenticator&  other);
void delete_QAuthenticator(QAuthenticator* obj) { delete obj; } 
   bool  isNull(QAuthenticator* theWrappedObject) const;
   bool  __ne__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   bool  __eq__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   QVariant  option(QAuthenticator* theWrappedObject, const QString&  opt) const;
   QHash<QString , QVariant >  options(QAuthenticator* theWrappedObject) const;
   QString  password(QAuthenticator* theWrappedObject) const;
   QString  realm(QAuthenticator* theWrappedObject) const;
   void setOption(QAuthenticator* theWrappedObject, const QString&  opt, const QVariant&  value);
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   void setRealm(QAuthenticator* theWrappedObject, const QString&  realm);
   void setUser(QAuthenticator* theWrappedObject, const QString&  user);
   QString  user(QAuthenticator* theWrappedObject) const;
    bool __nonzero__(QAuthenticator* obj) { return !obj->isNull(); }
};





class PythonQtShell_QDnsLookup : public QDnsLookup
{
public:
    PythonQtShell_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QObject*  parent = nullptr):QDnsLookup(type, name, parent),_wrapper(NULL) {};
    PythonQtShell_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, QObject*  parent = nullptr):QDnsLookup(type, name, nameserver, parent),_wrapper(NULL) {};
    PythonQtShell_QDnsLookup(QObject*  parent = nullptr):QDnsLookup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDnsLookup();


  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDnsLookup : public QObject
{ Q_OBJECT
public:
public slots:
QDnsLookup* new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QObject*  parent = nullptr);
QDnsLookup* new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, QObject*  parent = nullptr);
QDnsLookup* new_QDnsLookup(QObject*  parent = nullptr);
void delete_QDnsLookup(QDnsLookup* obj) { delete obj; } 
   QList<QDnsDomainNameRecord >  canonicalNameRecords(QDnsLookup* theWrappedObject) const;
   QDnsLookup::Error  error(QDnsLookup* theWrappedObject) const;
   QString  errorString(QDnsLookup* theWrappedObject) const;
   QList<QDnsHostAddressRecord >  hostAddressRecords(QDnsLookup* theWrappedObject) const;
   bool  isFinished(QDnsLookup* theWrappedObject) const;
   QList<QDnsMailExchangeRecord >  mailExchangeRecords(QDnsLookup* theWrappedObject) const;
   QString  name(QDnsLookup* theWrappedObject) const;
   QList<QDnsDomainNameRecord >  nameServerRecords(QDnsLookup* theWrappedObject) const;
   QHostAddress  nameserver(QDnsLookup* theWrappedObject) const;
   QList<QDnsDomainNameRecord >  pointerRecords(QDnsLookup* theWrappedObject) const;
   QList<QDnsServiceRecord >  serviceRecords(QDnsLookup* theWrappedObject) const;
   void setName(QDnsLookup* theWrappedObject, const QString&  name);
   void setNameserver(QDnsLookup* theWrappedObject, const QHostAddress&  nameserver);
   void setType(QDnsLookup* theWrappedObject, QDnsLookup::Type  arg__1);
   QList<QDnsTextRecord >  textRecords(QDnsLookup* theWrappedObject) const;
   QDnsLookup::Type  type(QDnsLookup* theWrappedObject) const;
};





class PythonQtWrapper_QHostInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HostInfoError )
enum HostInfoError{
  NoError = QHostInfo::NoError,   HostNotFound = QHostInfo::HostNotFound,   UnknownError = QHostInfo::UnknownError};
public slots:
QHostInfo* new_QHostInfo(const QHostInfo&  d);
QHostInfo* new_QHostInfo(int  lookupId = -1);
void delete_QHostInfo(QHostInfo* obj) { delete obj; } 
};





class PythonQtWrapper_QHstsPolicy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PolicyFlag )
enum PolicyFlag{
  IncludeSubDomains = QHstsPolicy::IncludeSubDomains};
public slots:
QHstsPolicy* new_QHstsPolicy();
QHstsPolicy* new_QHstsPolicy(const QHstsPolicy&  rhs);
void delete_QHstsPolicy(QHstsPolicy* obj) { delete obj; } 
   QHstsPolicy*  operator_assign(QHstsPolicy* theWrappedObject, const QHstsPolicy&  rhs);
   bool  __eq__(QHstsPolicy* theWrappedObject, const QHstsPolicy&  rhs);
};





class PythonQtWrapper_QHttpMultiPart : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ContentType )
enum ContentType{
  MixedType = QHttpMultiPart::MixedType,   RelatedType = QHttpMultiPart::RelatedType,   FormDataType = QHttpMultiPart::FormDataType,   AlternativeType = QHttpMultiPart::AlternativeType};
public slots:
void delete_QHttpMultiPart(QHttpMultiPart* obj) { delete obj; } 
   void append(QHttpMultiPart* theWrappedObject, const QHttpPart&  httpPart);
   QByteArray  boundary(QHttpMultiPart* theWrappedObject) const;
   void setBoundary(QHttpMultiPart* theWrappedObject, const QByteArray&  boundary);
   void setContentType(QHttpMultiPart* theWrappedObject, QHttpMultiPart::ContentType  contentType);
};





class PythonQtShell_QIPv6Address : public QIPv6Address
{
public:
    PythonQtShell_QIPv6Address():QIPv6Address(),_wrapper(NULL) {};

   ~PythonQtShell_QIPv6Address();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIPv6Address : public QObject
{ Q_OBJECT
public:
public slots:
QIPv6Address* new_QIPv6Address();
QIPv6Address* new_QIPv6Address(const QIPv6Address& other) {
PythonQtShell_QIPv6Address* a = new PythonQtShell_QIPv6Address();
*((QIPv6Address*)a) = other;
return a; }
void delete_QIPv6Address(QIPv6Address* obj) { delete obj; } 
};





class PythonQtShell_QLocalServer : public QLocalServer
{
public:
    PythonQtShell_QLocalServer(QObject*  parent = nullptr):QLocalServer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLocalServer();

virtual bool  hasPendingConnections() const;
virtual void incomingConnection(quintptr  socketDescriptor);
virtual QLocalSocket*  nextPendingConnection();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalServer : public QLocalServer
{ public:
inline void promoted_incomingConnection(quintptr  socketDescriptor) { this->incomingConnection(socketDescriptor); }
inline bool  py_q_hasPendingConnections() const { return QLocalServer::hasPendingConnections(); }
inline void py_q_incomingConnection(quintptr  socketDescriptor) { QLocalServer::incomingConnection(socketDescriptor); }
inline QLocalSocket*  py_q_nextPendingConnection() { return QLocalServer::nextPendingConnection(); }
};

class PythonQtWrapper_QLocalServer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SocketOption )
Q_FLAGS(SocketOptions )
enum SocketOption{
  NoOptions = QLocalServer::NoOptions,   UserAccessOption = QLocalServer::UserAccessOption,   GroupAccessOption = QLocalServer::GroupAccessOption,   OtherAccessOption = QLocalServer::OtherAccessOption,   WorldAccessOption = QLocalServer::WorldAccessOption};
Q_DECLARE_FLAGS(SocketOptions, SocketOption)
public slots:
QLocalServer* new_QLocalServer(QObject*  parent = nullptr);
void delete_QLocalServer(QLocalServer* obj) { delete obj; } 
   void close(QLocalServer* theWrappedObject);
   QString  errorString(QLocalServer* theWrappedObject) const;
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   bool  py_q_hasPendingConnections(QLocalServer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->py_q_hasPendingConnections());}
   void incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor);
   void py_q_incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor){  (((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->py_q_incomingConnection(socketDescriptor));}
   bool  isListening(QLocalServer* theWrappedObject) const;
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
   bool  listen(QLocalServer* theWrappedObject, qintptr  socketDescriptor);
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   QLocalSocket*  py_q_nextPendingConnection(QLocalServer* theWrappedObject){  return (((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->py_q_nextPendingConnection());}
   bool  static_QLocalServer_removeServer(const QString&  name);
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   QString  serverName(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   void setSocketOptions(QLocalServer* theWrappedObject, QLocalServer::SocketOptions  options);
   qintptr  socketDescriptor(QLocalServer* theWrappedObject) const;
   QLocalServer::SocketOptions  socketOptions(QLocalServer* theWrappedObject) const;
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = nullptr);
};





class PythonQtShell_QLocalSocket : public QLocalSocket
{
public:
    PythonQtShell_QLocalSocket(QObject*  parent = nullptr):QLocalSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLocalSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual qint64  pos() const;
virtual qint64  readData(char*  arg__1, qint64  arg__2);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  arg__1, qint64  arg__2);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalSocket : public QLocalSocket
{ public:
inline qint64  promoted_readData(char*  arg__1, qint64  arg__2) { return this->readData(arg__1, arg__2); }
inline qint64  promoted_writeData(const char*  arg__1, qint64  arg__2) { return this->writeData(arg__1, arg__2); }
inline qint64  py_q_bytesAvailable() const { return QLocalSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QLocalSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QLocalSocket::canReadLine(); }
inline void py_q_close() { QLocalSocket::close(); }
inline bool  py_q_isSequential() const { return QLocalSocket::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  openMode = QIODevice::ReadWrite) { return QLocalSocket::open(openMode); }
inline qint64  py_q_readData(char*  arg__1, qint64  arg__2) { return QLocalSocket::readData(arg__1, arg__2); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QLocalSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QLocalSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  arg__1, qint64  arg__2) { return QLocalSocket::writeData(arg__1, arg__2); }
};

class PythonQtWrapper_QLocalSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocalSocketError LocalSocketState )
enum LocalSocketError{
  ConnectionRefusedError = QLocalSocket::ConnectionRefusedError,   PeerClosedError = QLocalSocket::PeerClosedError,   ServerNotFoundError = QLocalSocket::ServerNotFoundError,   SocketAccessError = QLocalSocket::SocketAccessError,   SocketResourceError = QLocalSocket::SocketResourceError,   SocketTimeoutError = QLocalSocket::SocketTimeoutError,   DatagramTooLargeError = QLocalSocket::DatagramTooLargeError,   ConnectionError = QLocalSocket::ConnectionError,   UnsupportedSocketOperationError = QLocalSocket::UnsupportedSocketOperationError,   UnknownSocketError = QLocalSocket::UnknownSocketError,   OperationError = QLocalSocket::OperationError};
enum LocalSocketState{
  UnconnectedState = QLocalSocket::UnconnectedState,   ConnectingState = QLocalSocket::ConnectingState,   ConnectedState = QLocalSocket::ConnectedState,   ClosingState = QLocalSocket::ClosingState};
public slots:
QLocalSocket* new_QLocalSocket(QObject*  parent = nullptr);
void delete_QLocalSocket(QLocalSocket* obj) { delete obj; } 
   void abort(QLocalSocket* theWrappedObject);
   qint64  py_q_bytesAvailable(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_bytesToWrite());}
   bool  py_q_canReadLine(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QLocalSocket* theWrappedObject){  (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_close());}
   void connectToServer(QLocalSocket* theWrappedObject, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   void connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   void disconnectFromServer(QLocalSocket* theWrappedObject);
   QLocalSocket::LocalSocketError  error(QLocalSocket* theWrappedObject) const;
   bool  flush(QLocalSocket* theWrappedObject);
   QString  fullServerName(QLocalSocket* theWrappedObject) const;
   bool  py_q_isSequential(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_isSequential());}
   bool  isValid(QLocalSocket* theWrappedObject) const;
   bool  py_q_open(QLocalSocket* theWrappedObject, QIODevice::OpenMode  openMode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_open(openMode));}
   qint64  readBufferSize(QLocalSocket* theWrappedObject) const;
   qint64  py_q_readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_readData(arg__1, arg__2));}
   QString  serverName(QLocalSocket* theWrappedObject) const;
   void setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size);
   void setServerName(QLocalSocket* theWrappedObject, const QString&  name);
   bool  setSocketDescriptor(QLocalSocket* theWrappedObject, qintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState = QLocalSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   qintptr  socketDescriptor(QLocalSocket* theWrappedObject) const;
   QLocalSocket::LocalSocketState  state(QLocalSocket* theWrappedObject) const;
   bool  py_q_waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForConnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_writeData(arg__1, arg__2));}
    bool __nonzero__(QLocalSocket* obj) { return obj->isValid(); }
};





class PythonQtShell_QNetworkAccessManager : public QNetworkAccessManager
{
public:
    PythonQtShell_QNetworkAccessManager(QObject*  parent = nullptr):QNetworkAccessManager(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkAccessManager();

virtual QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = nullptr);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkAccessManager : public QNetworkAccessManager
{ public:
inline QNetworkReply*  promoted_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = nullptr) { return this->createRequest(op, request, outgoingData); }
inline QStringList  promoted_supportedSchemesImplementation() const { return this->supportedSchemesImplementation(); }
inline QNetworkReply*  py_q_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = nullptr) { return QNetworkAccessManager::createRequest(op, request, outgoingData); }
};

class PythonQtWrapper_QNetworkAccessManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Operation )
enum Operation{
  HeadOperation = QNetworkAccessManager::HeadOperation,   GetOperation = QNetworkAccessManager::GetOperation,   PutOperation = QNetworkAccessManager::PutOperation,   PostOperation = QNetworkAccessManager::PostOperation,   DeleteOperation = QNetworkAccessManager::DeleteOperation,   CustomOperation = QNetworkAccessManager::CustomOperation,   UnknownOperation = QNetworkAccessManager::UnknownOperation};
public slots:
QNetworkAccessManager* new_QNetworkAccessManager(QObject*  parent = nullptr);
void delete_QNetworkAccessManager(QNetworkAccessManager* obj) { delete obj; } 
   QNetworkConfiguration  activeConfiguration(QNetworkAccessManager* theWrappedObject) const;
   void addStrictTransportSecurityHosts(QNetworkAccessManager* theWrappedObject, const QVector<QHstsPolicy >&  knownHosts);
   bool  autoDeleteReplies(QNetworkAccessManager* theWrappedObject) const;
   QAbstractNetworkCache*  cache(QNetworkAccessManager* theWrappedObject) const;
   void clearAccessCache(QNetworkAccessManager* theWrappedObject);
   void clearConnectionCache(QNetworkAccessManager* theWrappedObject);
   QNetworkConfiguration  configuration(QNetworkAccessManager* theWrappedObject) const;
   void connectToHost(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port = 80);
   void connectToHostEncrypted(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port = 443, const QSslConfiguration&  sslConfiguration = QSslConfiguration::defaultConfiguration());
   void connectToHostEncrypted(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port, const QSslConfiguration&  sslConfiguration, const QString&  peerName);
   QNetworkCookieJar*  cookieJar(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = nullptr);
   QNetworkReply*  py_q_createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = nullptr){  return (((PythonQtPublicPromoter_QNetworkAccessManager*)theWrappedObject)->py_q_createRequest(op, request, outgoingData));}
   QNetworkReply*  deleteResource(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   void enableStrictTransportSecurityStore(QNetworkAccessManager* theWrappedObject, bool  enabled, const QString&  storeDir = QString());
   QNetworkReply*  get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   bool  isStrictTransportSecurityEnabled(QNetworkAccessManager* theWrappedObject) const;
   bool  isStrictTransportSecurityStoreEnabled(QNetworkAccessManager* theWrappedObject) const;
   QNetworkAccessManager::NetworkAccessibility  networkAccessible(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkProxy  proxy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkProxyFactory*  proxyFactory(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkRequest::RedirectPolicy  redirectPolicy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QHttpMultiPart*  multiPart);
   QNetworkReply*  sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QIODevice*  data = nullptr);
   QNetworkReply*  sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, const QByteArray&  data);
   void setAutoDeleteReplies(QNetworkAccessManager* theWrappedObject, bool  autoDelete);
   void setCache(QNetworkAccessManager* theWrappedObject, QAbstractNetworkCache*  cache);
   void setConfiguration(QNetworkAccessManager* theWrappedObject, const QNetworkConfiguration&  config);
   void setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar);
   void setNetworkAccessible(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::NetworkAccessibility  accessible);
   void setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy);
   void setProxyFactory(QNetworkAccessManager* theWrappedObject, QNetworkProxyFactory*  factory);
   void setRedirectPolicy(QNetworkAccessManager* theWrappedObject, QNetworkRequest::RedirectPolicy  policy);
   void setStrictTransportSecurityEnabled(QNetworkAccessManager* theWrappedObject, bool  enabled);
   void setTransferTimeout(QNetworkAccessManager* theWrappedObject, int  timeout = QNetworkRequest::DefaultTransferTimeoutConstant);
   QVector<QHstsPolicy >  strictTransportSecurityHosts(QNetworkAccessManager* theWrappedObject) const;
   QStringList  supportedSchemes(QNetworkAccessManager* theWrappedObject) const;
   int  transferTimeout(QNetworkAccessManager* theWrappedObject) const;
};





class PythonQtShell_QNetworkConfigurationManager : public QNetworkConfigurationManager
{
public:
    PythonQtShell_QNetworkConfigurationManager(QObject*  parent = nullptr):QNetworkConfigurationManager(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkConfigurationManager();


  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNetworkConfigurationManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanStartAndStopInterfaces = QNetworkConfigurationManager::CanStartAndStopInterfaces,   DirectConnectionRouting = QNetworkConfigurationManager::DirectConnectionRouting,   SystemSessionSupport = QNetworkConfigurationManager::SystemSessionSupport,   ApplicationLevelRoaming = QNetworkConfigurationManager::ApplicationLevelRoaming,   ForcedRoaming = QNetworkConfigurationManager::ForcedRoaming,   DataStatistics = QNetworkConfigurationManager::DataStatistics,   NetworkSessionRequired = QNetworkConfigurationManager::NetworkSessionRequired};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QNetworkConfigurationManager* new_QNetworkConfigurationManager(QObject*  parent = nullptr);
void delete_QNetworkConfigurationManager(QNetworkConfigurationManager* obj) { delete obj; } 
   QList<QNetworkConfiguration >  allConfigurations(QNetworkConfigurationManager* theWrappedObject, QNetworkConfiguration::StateFlags  flags = QNetworkConfiguration::StateFlags()) const;
   QNetworkConfigurationManager::Capabilities  capabilities(QNetworkConfigurationManager* theWrappedObject) const;
   QNetworkConfiguration  configurationFromIdentifier(QNetworkConfigurationManager* theWrappedObject, const QString&  identifier) const;
   QNetworkConfiguration  defaultConfiguration(QNetworkConfigurationManager* theWrappedObject) const;
   bool  isOnline(QNetworkConfigurationManager* theWrappedObject) const;
};





class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = nullptr):QNetworkCookieJar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkCookieJar();

virtual QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const;
virtual bool  deleteCookie(const QNetworkCookie&  cookie);
virtual bool  insertCookie(const QNetworkCookie&  cookie);
virtual bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
virtual bool  updateCookie(const QNetworkCookie&  cookie);
virtual bool  validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkCookieJar : public QNetworkCookieJar
{ public:
inline QList<QNetworkCookie >  promoted_allCookies() const { return this->allCookies(); }
inline void promoted_setAllCookies(const QList<QNetworkCookie >&  cookieList) { this->setAllCookies(cookieList); }
inline bool  promoted_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return this->validateCookie(cookie, url); }
inline QList<QNetworkCookie >  py_q_cookiesForUrl(const QUrl&  url) const { return QNetworkCookieJar::cookiesForUrl(url); }
inline bool  py_q_deleteCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::deleteCookie(cookie); }
inline bool  py_q_insertCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::insertCookie(cookie); }
inline bool  py_q_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) { return QNetworkCookieJar::setCookiesFromUrl(cookieList, url); }
inline bool  py_q_updateCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::updateCookie(cookie); }
inline bool  py_q_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return QNetworkCookieJar::validateCookie(cookie, url); }
};

class PythonQtWrapper_QNetworkCookieJar : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCookieJar* new_QNetworkCookieJar(QObject*  parent = nullptr);
void delete_QNetworkCookieJar(QNetworkCookieJar* obj) { delete obj; } 
   QList<QNetworkCookie >  allCookies(QNetworkCookieJar* theWrappedObject) const;
   QList<QNetworkCookie >  cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const;
   QList<QNetworkCookie >  py_q_cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const{  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_cookiesForUrl(url));}
   bool  deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_deleteCookie(cookie));}
   bool  insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_insertCookie(cookie));}
   void setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList);
   bool  setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
   bool  py_q_setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_setCookiesFromUrl(cookieList, url));}
   bool  updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_updateCookie(cookie));}
   bool  validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const;
   bool  py_q_validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const{  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_validateCookie(cookie, url));}
};





class PythonQtShell_QNetworkDiskCache : public QNetworkDiskCache
{
public:
    PythonQtShell_QNetworkDiskCache(QObject*  parent = nullptr):QNetworkDiskCache(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkDiskCache();

virtual qint64  cacheSize() const;
virtual void clear();
virtual QIODevice*  data(const QUrl&  url);
virtual qint64  expire();
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkDiskCache : public QNetworkDiskCache
{ public:
inline qint64  promoted_expire() { return this->expire(); }
inline qint64  py_q_cacheSize() const { return QNetworkDiskCache::cacheSize(); }
inline void py_q_clear() { QNetworkDiskCache::clear(); }
inline QIODevice*  py_q_data(const QUrl&  url) { return QNetworkDiskCache::data(url); }
inline qint64  py_q_expire() { return QNetworkDiskCache::expire(); }
inline void py_q_insert(QIODevice*  device) { QNetworkDiskCache::insert(device); }
inline QNetworkCacheMetaData  py_q_metaData(const QUrl&  url) { return QNetworkDiskCache::metaData(url); }
inline QIODevice*  py_q_prepare(const QNetworkCacheMetaData&  metaData) { return QNetworkDiskCache::prepare(metaData); }
inline bool  py_q_remove(const QUrl&  url) { return QNetworkDiskCache::remove(url); }
inline void py_q_updateMetaData(const QNetworkCacheMetaData&  metaData) { QNetworkDiskCache::updateMetaData(metaData); }
};

class PythonQtWrapper_QNetworkDiskCache : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkDiskCache* new_QNetworkDiskCache(QObject*  parent = nullptr);
void delete_QNetworkDiskCache(QNetworkDiskCache* obj) { delete obj; } 
   QString  cacheDirectory(QNetworkDiskCache* theWrappedObject) const;
   qint64  py_q_cacheSize(QNetworkDiskCache* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_cacheSize());}
   void py_q_clear(QNetworkDiskCache* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_clear());}
   QIODevice*  py_q_data(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_data(url));}
   qint64  expire(QNetworkDiskCache* theWrappedObject);
   qint64  py_q_expire(QNetworkDiskCache* theWrappedObject){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_expire());}
   QNetworkCacheMetaData  fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const;
   void py_q_insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_insert(device));}
   qint64  maximumCacheSize(QNetworkDiskCache* theWrappedObject) const;
   QNetworkCacheMetaData  py_q_metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_metaData(url));}
   QIODevice*  py_q_prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_prepare(metaData));}
   bool  py_q_remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_remove(url));}
   void setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir);
   void setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size);
   void py_q_updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_updateMetaData(metaData));}
};





class PythonQtShell_QNetworkReply : public QNetworkReply
{
public:
    PythonQtShell_QNetworkReply(QObject*  parent = nullptr):QNetworkReply(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkReply();

virtual void abort();
virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual void ignoreSslErrors();
virtual void ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual void setSslConfigurationImplementation(const QSslConfiguration&  arg__1);
virtual qint64  size() const;
virtual void sslConfigurationImplementation(QSslConfiguration&  arg__1) const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkReply : public QNetworkReply
{ public:
inline void promoted_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { this->ignoreSslErrorsImplementation(arg__1); }
inline void promoted_setAttribute(QNetworkRequest::Attribute  code, const QVariant&  value) { this->setAttribute(code, value); }
inline void promoted_setError(QNetworkReply::NetworkError  errorCode, const QString&  errorString) { this->setError(errorCode, errorString); }
inline void promoted_setFinished(bool  arg__1) { this->setFinished(arg__1); }
inline void promoted_setHeader(QNetworkRequest::KnownHeaders  header, const QVariant&  value) { this->setHeader(header, value); }
inline void promoted_setOperation(QNetworkAccessManager::Operation  operation) { this->setOperation(operation); }
inline void promoted_setRawHeader(const QByteArray&  headerName, const QByteArray&  value) { this->setRawHeader(headerName, value); }
inline void promoted_setRequest(const QNetworkRequest&  request) { this->setRequest(request); }
inline void promoted_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { this->setSslConfigurationImplementation(arg__1); }
inline void promoted_setUrl(const QUrl&  url) { this->setUrl(url); }
inline void promoted_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { this->sslConfigurationImplementation(arg__1); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline void py_q_abort() { this->abort(); }
inline void py_q_close() { QNetworkReply::close(); }
inline void py_q_ignoreSslErrors() { QNetworkReply::ignoreSslErrors(); }
inline void py_q_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { QNetworkReply::ignoreSslErrorsImplementation(arg__1); }
inline bool  py_q_isSequential() const { return QNetworkReply::isSequential(); }
inline void py_q_setReadBufferSize(qint64  size) { QNetworkReply::setReadBufferSize(size); }
inline void py_q_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { QNetworkReply::setSslConfigurationImplementation(arg__1); }
inline void py_q_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { QNetworkReply::sslConfigurationImplementation(arg__1); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QNetworkReply::writeData(data, len); }
};

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkReply* new_QNetworkReply(QObject*  parent = nullptr);
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; } 
   void py_q_abort(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_abort());}
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
   void py_q_close(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_close());}
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   bool  hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   void py_q_ignoreSslErrors(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_ignoreSslErrors());}
   void ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1);
   void py_q_ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_ignoreSslErrorsImplementation(arg__1));}
   bool  isFinished(QNetworkReply* theWrappedObject) const;
   bool  isRunning(QNetworkReply* theWrappedObject) const;
   bool  py_q_isSequential(QNetworkReply* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_isSequential());}
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   const QList<QPair<QByteArray , QByteArray >  >*  rawHeaderPairs(QNetworkReply* theWrappedObject) const;
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   void setAttribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setError(QNetworkReply* theWrappedObject, QNetworkReply::NetworkError  errorCode, const QString&  errorString);
   void setFinished(QNetworkReply* theWrappedObject, bool  arg__1);
   void setHeader(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setOperation(QNetworkReply* theWrappedObject, QNetworkAccessManager::Operation  operation);
   void setRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   void py_q_setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_setReadBufferSize(size));}
   void setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request);
   void setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1);
   void py_q_setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_setSslConfigurationImplementation(arg__1));}
   void setUrl(QNetworkReply* theWrappedObject, const QUrl&  url);
   void sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const;
   void py_q_sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const{  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_sslConfigurationImplementation(arg__1));}
   QUrl  url(QNetworkReply* theWrappedObject) const;
   qint64  py_q_writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtShell_QNetworkSession : public QNetworkSession
{
public:
    PythonQtShell_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent = nullptr):QNetworkSession(connConfig, parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkSession();

virtual void connectNotify(const QMetaMethod&  signal);
virtual void disconnectNotify(const QMetaMethod&  signal);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkSession : public QNetworkSession
{ public:
inline void promoted_connectNotify(const QMetaMethod&  signal) { this->connectNotify(signal); }
inline void promoted_disconnectNotify(const QMetaMethod&  signal) { this->disconnectNotify(signal); }
inline void py_q_connectNotify(const QMetaMethod&  signal) { QNetworkSession::connectNotify(signal); }
inline void py_q_disconnectNotify(const QMetaMethod&  signal) { QNetworkSession::disconnectNotify(signal); }
};

class PythonQtWrapper_QNetworkSession : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SessionError State UsagePolicy )
Q_FLAGS(UsagePolicies )
enum SessionError{
  UnknownSessionError = QNetworkSession::UnknownSessionError,   SessionAbortedError = QNetworkSession::SessionAbortedError,   RoamingError = QNetworkSession::RoamingError,   OperationNotSupportedError = QNetworkSession::OperationNotSupportedError,   InvalidConfigurationError = QNetworkSession::InvalidConfigurationError};
enum State{
  Invalid = QNetworkSession::Invalid,   NotAvailable = QNetworkSession::NotAvailable,   Connecting = QNetworkSession::Connecting,   Connected = QNetworkSession::Connected,   Closing = QNetworkSession::Closing,   Disconnected = QNetworkSession::Disconnected,   Roaming = QNetworkSession::Roaming};
enum UsagePolicy{
  NoPolicy = QNetworkSession::NoPolicy,   NoBackgroundTrafficPolicy = QNetworkSession::NoBackgroundTrafficPolicy};
Q_DECLARE_FLAGS(UsagePolicies, UsagePolicy)
public slots:
QNetworkSession* new_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent = nullptr);
void delete_QNetworkSession(QNetworkSession* obj) { delete obj; } 
   quint64  activeTime(QNetworkSession* theWrappedObject) const;
   quint64  bytesReceived(QNetworkSession* theWrappedObject) const;
   quint64  bytesWritten(QNetworkSession* theWrappedObject) const;
   QNetworkConfiguration  configuration(QNetworkSession* theWrappedObject) const;
   void connectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal);
   void py_q_connectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal){  (((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->py_q_connectNotify(signal));}
   void disconnectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal);
   void py_q_disconnectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal){  (((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->py_q_disconnectNotify(signal));}
   QNetworkSession::SessionError  error(QNetworkSession* theWrappedObject) const;
   QString  errorString(QNetworkSession* theWrappedObject) const;
   QNetworkInterface  interface(QNetworkSession* theWrappedObject) const;
   bool  isOpen(QNetworkSession* theWrappedObject) const;
   QVariant  sessionProperty(QNetworkSession* theWrappedObject, const QString&  key) const;
   void setSessionProperty(QNetworkSession* theWrappedObject, const QString&  key, const QVariant&  value);
   QNetworkSession::State  state(QNetworkSession* theWrappedObject) const;
   QNetworkSession::UsagePolicies  usagePolicies(QNetworkSession* theWrappedObject) const;
   bool  waitForOpened(QNetworkSession* theWrappedObject, int  msecs = 30000);
};





#ifndef QT_NO_SSL
class PythonQtWrapper_QSsl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlternativeNameEntryType EncodingFormat KeyAlgorithm KeyType SslOption SslProtocol )
Q_FLAGS(SslOptions )
enum AlternativeNameEntryType{
  EmailEntry = QSsl::EmailEntry,   DnsEntry = QSsl::DnsEntry,   IpAddressEntry = QSsl::IpAddressEntry};
enum EncodingFormat{
  Pem = QSsl::Pem,   Der = QSsl::Der};
enum KeyAlgorithm{
  Opaque = QSsl::Opaque,   Rsa = QSsl::Rsa,   Dsa = QSsl::Dsa,   Ec = QSsl::Ec,   Dh = QSsl::Dh};
enum KeyType{
  PrivateKey = QSsl::PrivateKey,   PublicKey = QSsl::PublicKey};
enum SslOption{
  SslOptionDisableEmptyFragments = QSsl::SslOptionDisableEmptyFragments,   SslOptionDisableSessionTickets = QSsl::SslOptionDisableSessionTickets,   SslOptionDisableCompression = QSsl::SslOptionDisableCompression,   SslOptionDisableServerNameIndication = QSsl::SslOptionDisableServerNameIndication,   SslOptionDisableLegacyRenegotiation = QSsl::SslOptionDisableLegacyRenegotiation,   SslOptionDisableSessionSharing = QSsl::SslOptionDisableSessionSharing,   SslOptionDisableSessionPersistence = QSsl::SslOptionDisableSessionPersistence,   SslOptionDisableServerCipherPreference = QSsl::SslOptionDisableServerCipherPreference};
enum SslProtocol{
  SslV3 = QSsl::SslV3,   SslV2 = QSsl::SslV2,   TlsV1_0 = QSsl::TlsV1_0,   TlsV1_1 = QSsl::TlsV1_1,   TlsV1_2 = QSsl::TlsV1_2,   AnyProtocol = QSsl::AnyProtocol,   TlsV1SslV3 = QSsl::TlsV1SslV3,   SecureProtocols = QSsl::SecureProtocols,   TlsV1_0OrLater = QSsl::TlsV1_0OrLater,   TlsV1_1OrLater = QSsl::TlsV1_1OrLater,   TlsV1_2OrLater = QSsl::TlsV1_2OrLater,   DtlsV1_0 = QSsl::DtlsV1_0,   DtlsV1_0OrLater = QSsl::DtlsV1_0OrLater,   DtlsV1_2 = QSsl::DtlsV1_2,   DtlsV1_2OrLater = QSsl::DtlsV1_2OrLater,   TlsV1_3 = QSsl::TlsV1_3,   TlsV1_3OrLater = QSsl::TlsV1_3OrLater,   UnknownProtocol = QSsl::UnknownProtocol};
Q_DECLARE_FLAGS(SslOptions, SslOption)
public slots:
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslError )
enum SslError{
  NoError = QSslError::NoError,   UnableToGetIssuerCertificate = QSslError::UnableToGetIssuerCertificate,   UnableToDecryptCertificateSignature = QSslError::UnableToDecryptCertificateSignature,   UnableToDecodeIssuerPublicKey = QSslError::UnableToDecodeIssuerPublicKey,   CertificateSignatureFailed = QSslError::CertificateSignatureFailed,   CertificateNotYetValid = QSslError::CertificateNotYetValid,   CertificateExpired = QSslError::CertificateExpired,   InvalidNotBeforeField = QSslError::InvalidNotBeforeField,   InvalidNotAfterField = QSslError::InvalidNotAfterField,   SelfSignedCertificate = QSslError::SelfSignedCertificate,   SelfSignedCertificateInChain = QSslError::SelfSignedCertificateInChain,   UnableToGetLocalIssuerCertificate = QSslError::UnableToGetLocalIssuerCertificate,   UnableToVerifyFirstCertificate = QSslError::UnableToVerifyFirstCertificate,   CertificateRevoked = QSslError::CertificateRevoked,   InvalidCaCertificate = QSslError::InvalidCaCertificate,   PathLengthExceeded = QSslError::PathLengthExceeded,   InvalidPurpose = QSslError::InvalidPurpose,   CertificateUntrusted = QSslError::CertificateUntrusted,   CertificateRejected = QSslError::CertificateRejected,   SubjectIssuerMismatch = QSslError::SubjectIssuerMismatch,   AuthorityIssuerSerialNumberMismatch = QSslError::AuthorityIssuerSerialNumberMismatch,   NoPeerCertificate = QSslError::NoPeerCertificate,   HostNameMismatch = QSslError::HostNameMismatch,   NoSslSupport = QSslError::NoSslSupport,   CertificateBlacklisted = QSslError::CertificateBlacklisted,   CertificateStatusUnknown = QSslError::CertificateStatusUnknown,   OcspNoResponseFound = QSslError::OcspNoResponseFound,   OcspMalformedRequest = QSslError::OcspMalformedRequest,   OcspMalformedResponse = QSslError::OcspMalformedResponse,   OcspInternalError = QSslError::OcspInternalError,   OcspTryLater = QSslError::OcspTryLater,   OcspSigRequred = QSslError::OcspSigRequred,   OcspUnauthorized = QSslError::OcspUnauthorized,   OcspResponseCannotBeTrusted = QSslError::OcspResponseCannotBeTrusted,   OcspResponseCertIdUnknown = QSslError::OcspResponseCertIdUnknown,   OcspResponseExpired = QSslError::OcspResponseExpired,   OcspStatusUnknown = QSslError::OcspStatusUnknown,   UnspecifiedError = QSslError::UnspecifiedError};
public slots:
QSslError* new_QSslError();
QSslError* new_QSslError(QSslError::SslError  error);
QSslError* new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate);
QSslError* new_QSslError(const QSslError&  other);
void delete_QSslError(QSslError* obj) { delete obj; } 
    QString py_toString(QSslError*);
};

#endif





#ifndef QT_NO_SSL
class PythonQtShell_QSslSocket : public QSslSocket
{
public:
    PythonQtShell_QSslSocket(QObject*  parent = nullptr):QSslSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSslSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  openMode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void disconnectFromHost();
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSslSocket : public QSslSocket
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QSslSocket::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QSslSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QSslSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QSslSocket::canReadLine(); }
inline void py_q_close() { QSslSocket::close(); }
inline void py_q_connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  openMode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) { QSslSocket::connectToHost(hostName, port, openMode, protocol); }
inline void py_q_disconnectFromHost() { QSslSocket::disconnectFromHost(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QSslSocket::readData(data, maxlen); }
inline void py_q_resume() { QSslSocket::resume(); }
inline void py_q_setReadBufferSize(qint64  size) { QSslSocket::setReadBufferSize(size); }
inline bool  py_q_setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite) { return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode); }
inline void py_q_setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) { QSslSocket::setSocketOption(option, value); }
inline QVariant  py_q_socketOption(QAbstractSocket::SocketOption  option) { return QSslSocket::socketOption(option); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QSslSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForConnected(int  msecs = 30000) { return QSslSocket::waitForConnected(msecs); }
inline bool  py_q_waitForDisconnected(int  msecs = 30000) { return QSslSocket::waitForDisconnected(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QSslSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QSslSocket::writeData(data, len); }
};

class PythonQtWrapper_QSslSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PeerVerifyMode SslMode )
enum PeerVerifyMode{
  VerifyNone = QSslSocket::VerifyNone,   QueryPeer = QSslSocket::QueryPeer,   VerifyPeer = QSslSocket::VerifyPeer,   AutoVerifyPeer = QSslSocket::AutoVerifyPeer};
enum SslMode{
  UnencryptedMode = QSslSocket::UnencryptedMode,   SslClientMode = QSslSocket::SslClientMode,   SslServerMode = QSslSocket::SslServerMode};
public slots:
QSslSocket* new_QSslSocket(QObject*  parent = nullptr);
void delete_QSslSocket(QSslSocket* obj) { delete obj; } 
   void abort(QSslSocket* theWrappedObject);
   void addCaCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void addCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   bool  addCaCertificates(QSslSocket* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   void static_QSslSocket_addDefaultCaCertificate(const QSslCertificate&  certificate);
   void static_QSslSocket_addDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   bool  static_QSslSocket_addDefaultCaCertificates(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   bool  py_q_atEnd(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_atEnd());}
   qint64  py_q_bytesAvailable(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_bytesToWrite());}
   QList<QSslCertificate >  caCertificates(QSslSocket* theWrappedObject) const;
   bool  py_q_canReadLine(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_canReadLine());}
   QList<QSslCipher >  ciphers(QSslSocket* theWrappedObject) const;
   void py_q_close(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_close());}
   void py_q_connectToHost(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  openMode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_connectToHost(hostName, port, openMode, protocol));}
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   QList<QSslCertificate >  static_QSslSocket_defaultCaCertificates();
   QList<QSslCipher >  static_QSslSocket_defaultCiphers();
   void py_q_disconnectFromHost(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_disconnectFromHost());}
   qint64  encryptedBytesAvailable(QSslSocket* theWrappedObject) const;
   qint64  encryptedBytesToWrite(QSslSocket* theWrappedObject) const;
   bool  flush(QSslSocket* theWrappedObject);
   void ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors);
   bool  isEncrypted(QSslSocket* theWrappedObject) const;
   QSslCertificate  localCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  localCertificateChain(QSslSocket* theWrappedObject) const;
   QSslSocket::SslMode  mode(QSslSocket* theWrappedObject) const;
   QSslCertificate  peerCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslSocket* theWrappedObject) const;
   int  peerVerifyDepth(QSslSocket* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslSocket* theWrappedObject) const;
   QString  peerVerifyName(QSslSocket* theWrappedObject) const;
   QSslKey  privateKey(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslSocket* theWrappedObject) const;
   qint64  py_q_readData(QSslSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_readData(data, maxlen));}
   void py_q_resume(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_resume());}
   QSslCipher  sessionCipher(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  sessionProtocol(QSslSocket* theWrappedObject) const;
   void setCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   void setCiphers(QSslSocket* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void setCiphers(QSslSocket* theWrappedObject, const QString&  ciphers);
   void static_QSslSocket_setDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   void static_QSslSocket_setDefaultCiphers(const QList<QSslCipher >&  ciphers);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format = QSsl::Pem);
   void setLocalCertificateChain(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  localChain);
   void setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth);
   void setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPeerVerifyName(QSslSocket* theWrappedObject, const QString&  hostName);
   void setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key);
   void setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm = QSsl::Rsa, QSsl::EncodingFormat  format = QSsl::Pem, const QByteArray&  passPhrase = QByteArray());
   void setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol);
   void py_q_setReadBufferSize(QSslSocket* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setReadBufferSize(size));}
   bool  py_q_setSocketDescriptor(QSslSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setSocketDescriptor(socketDescriptor, state, openMode));}
   void py_q_setSocketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setSocketOption(option, value));}
   void setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config);
   QVariant  py_q_socketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_socketOption(option));}
   QSslConfiguration  sslConfiguration(QSslSocket* theWrappedObject) const;
   QList<QSslError >  sslErrors(QSslSocket* theWrappedObject) const;
   QList<QSslError >  sslHandshakeErrors(QSslSocket* theWrappedObject) const;
   long  static_QSslSocket_sslLibraryBuildVersionNumber();
   QString  static_QSslSocket_sslLibraryBuildVersionString();
   long  static_QSslSocket_sslLibraryVersionNumber();
   QString  static_QSslSocket_sslLibraryVersionString();
   QList<QSslCipher >  static_QSslSocket_supportedCiphers();
   bool  static_QSslSocket_supportsSsl();
   QList<QSslCertificate >  static_QSslSocket_systemCaCertificates();
   bool  py_q_waitForBytesWritten(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  py_q_waitForConnected(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForConnected(msecs));}
   bool  py_q_waitForDisconnected(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForDisconnected(msecs));}
   bool  waitForEncrypted(QSslSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QSslSocket* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_writeData(data, len));}
    bool __nonzero__(QSslSocket* obj) { return obj->isValid(); }
};

#endif





class PythonQtShell_QTcpServer : public QTcpServer
{
public:
    PythonQtShell_QTcpServer(QObject*  parent = nullptr):QTcpServer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTcpServer();

virtual bool  hasPendingConnections() const;
virtual void incomingConnection(qintptr  handle);
virtual QTcpSocket*  nextPendingConnection();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTcpServer : public QTcpServer
{ public:
inline void promoted_addPendingConnection(QTcpSocket*  socket) { this->addPendingConnection(socket); }
inline void promoted_incomingConnection(qintptr  handle) { this->incomingConnection(handle); }
inline bool  py_q_hasPendingConnections() const { return QTcpServer::hasPendingConnections(); }
inline void py_q_incomingConnection(qintptr  handle) { QTcpServer::incomingConnection(handle); }
inline QTcpSocket*  py_q_nextPendingConnection() { return QTcpServer::nextPendingConnection(); }
};

class PythonQtWrapper_QTcpServer : public QObject
{ Q_OBJECT
public:
public slots:
QTcpServer* new_QTcpServer(QObject*  parent = nullptr);
void delete_QTcpServer(QTcpServer* obj) { delete obj; } 
   void addPendingConnection(QTcpServer* theWrappedObject, QTcpSocket*  socket);
   void close(QTcpServer* theWrappedObject);
   QString  errorString(QTcpServer* theWrappedObject) const;
   bool  hasPendingConnections(QTcpServer* theWrappedObject) const;
   bool  py_q_hasPendingConnections(QTcpServer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_hasPendingConnections());}
   void incomingConnection(QTcpServer* theWrappedObject, qintptr  handle);
   void py_q_incomingConnection(QTcpServer* theWrappedObject, qintptr  handle){  (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_incomingConnection(handle));}
   bool  isListening(QTcpServer* theWrappedObject) const;
   bool  listen(QTcpServer* theWrappedObject, const QHostAddress&  address = QHostAddress::Any, unsigned short  port = 0);
   int  maxPendingConnections(QTcpServer* theWrappedObject) const;
   QTcpSocket*  nextPendingConnection(QTcpServer* theWrappedObject);
   QTcpSocket*  py_q_nextPendingConnection(QTcpServer* theWrappedObject){  return (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_nextPendingConnection());}
   void pauseAccepting(QTcpServer* theWrappedObject);
   QNetworkProxy  proxy(QTcpServer* theWrappedObject) const;
   void resumeAccepting(QTcpServer* theWrappedObject);
   QHostAddress  serverAddress(QTcpServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QTcpServer* theWrappedObject) const;
   unsigned short  serverPort(QTcpServer* theWrappedObject) const;
   void setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections);
   void setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy);
   bool  setSocketDescriptor(QTcpServer* theWrappedObject, qintptr  socketDescriptor);
   qintptr  socketDescriptor(QTcpServer* theWrappedObject) const;
   bool  waitForNewConnection(QTcpServer* theWrappedObject, int  msec = 0, bool*  timedOut = nullptr);
};





class PythonQtShell_QTcpSocket : public QTcpSocket
{
public:
    PythonQtShell_QTcpSocket(QObject*  parent = nullptr):QTcpSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTcpSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void disconnectFromHost();
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTcpSocket : public QObject
{ Q_OBJECT
public:
public slots:
QTcpSocket* new_QTcpSocket(QObject*  parent = nullptr);
void delete_QTcpSocket(QTcpSocket* obj) { delete obj; } 
    bool __nonzero__(QTcpSocket* obj) { return obj->isValid(); }
};





class PythonQtShell_QUdpSocket : public QUdpSocket
{
public:
    PythonQtShell_QUdpSocket(QObject*  parent = nullptr):QUdpSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QUdpSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void disconnectFromHost();
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUdpSocket : public QObject
{ Q_OBJECT
public:
public slots:
QUdpSocket* new_QUdpSocket(QObject*  parent = nullptr);
void delete_QUdpSocket(QUdpSocket* obj) { delete obj; } 
   bool  hasPendingDatagrams(QUdpSocket* theWrappedObject) const;
   bool  joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress);
   bool  joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface);
   bool  leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress);
   bool  leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface);
   QNetworkInterface  multicastInterface(QUdpSocket* theWrappedObject) const;
   qint64  pendingDatagramSize(QUdpSocket* theWrappedObject) const;
   qint64  readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host = nullptr, unsigned short*  port = nullptr);
   QNetworkDatagram  receiveDatagram(QUdpSocket* theWrappedObject, qint64  maxSize = -1);
   void setMulticastInterface(QUdpSocket* theWrappedObject, const QNetworkInterface&  iface);
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port);
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QNetworkDatagram&  datagram);
    bool __nonzero__(QUdpSocket* obj) { return obj->isValid(); }
};


