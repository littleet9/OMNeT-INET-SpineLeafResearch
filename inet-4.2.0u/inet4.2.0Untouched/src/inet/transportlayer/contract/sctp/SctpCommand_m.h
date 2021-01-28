//
// Generated file, do not edit! Created by nedtool 5.6 from inet/transportlayer/contract/sctp/SctpCommand.msg.
//

#ifndef __INET_SCTPCOMMAND_M_H
#define __INET_SCTPCOMMAND_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class SctpSimpleMessage;
class SctpCommandReq;
class SctpSendReq;
class SctpOpenReq;
class SctpAvailableReq;
class SctpConnectReq;
class SctpRcvReq;
class SctpStatusReq;
class SctpResetReq;
class SctpInfoReq;
class SctpPathInfoReq;
class SctpRtoReq;
class SctpSendQueueAbatedReq;
class SctpPathInfo;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/common/packet/Packet_m.h" // import inet.common.packet.Packet

#include "inet/networklayer/common/IpProtocolId_m.h" // import inet.networklayer.common.IpProtocolId

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address

#include "inet/common/TagBase_m.h" // import inet.common.TagBase

// cplusplus {{
#include <vector>
#include "inet/transportlayer/contract/sctp/SctpCommand.h"
// }}


namespace inet {

// cplusplus {{
typedef std::vector<L3Address> AddressVector;
// }}

/**
 * Enum generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:45</tt> by nedtool.
 * <pre>
 * //
 * // Currently not in use.
 * //
 * enum SctpErrorCode
 * {
 * }
 * </pre>
 */
enum SctpErrorCode {
};

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:52</tt> by nedtool.
 * <pre>
 * class SctpSimpleMessage extends cPacket
 * {
 *     uint32 dataLen;     //TODO remove it, use set/getDataArraySize() functions only
 *     uint8_t data[];
 *     simtime_t creationTime = 0;
 *     bool encaps = false;
 * }
 * </pre>
 */
class INET_API SctpSimpleMessage : public ::omnetpp::cPacket
{
  protected:
    uint32_t dataLen = 0;
    uint8_t *data = nullptr;
    size_t data_arraysize = 0;
    omnetpp::simtime_t creationTime = 0;
    bool encaps = false;

  private:
    void copy(const SctpSimpleMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpSimpleMessage&);

  public:
    SctpSimpleMessage(const char *name=nullptr);
    SctpSimpleMessage(const SctpSimpleMessage& other);
    virtual ~SctpSimpleMessage();
    SctpSimpleMessage& operator=(const SctpSimpleMessage& other);
    virtual SctpSimpleMessage *dup() const override {return new SctpSimpleMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getDataLen() const;
    virtual void setDataLen(uint32_t dataLen);
    virtual void setDataArraySize(size_t size);
    virtual size_t getDataArraySize() const;
    virtual uint8_t getData(size_t k) const;
    virtual void setData(size_t k, uint8_t data);
    virtual void insertData(uint8_t data);
    virtual void insertData(size_t k, uint8_t data);
    virtual void eraseData(size_t k);
    virtual omnetpp::simtime_t getCreationTime() const;
    virtual void setCreationTime(omnetpp::simtime_t creationTime);
    virtual bool getEncaps() const;
    virtual void setEncaps(bool encaps);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpSimpleMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpSimpleMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:60</tt> by nedtool.
 * <pre>
 * class SctpCommandReq extends TagBase
 * {
 *     int socketId = -1;   // identifies the socket within the application
 *     int sid = -1;
 *     int numMsgs = 1;
 *     int ssn = -1;
 *     unsigned short sendUnordered = false;
 *     double prValue = 0;
 *     L3Address localAddr;
 *     L3Address remoteAddr;
 *     int localPort = -1;
 *     int remotePort = -1;
 *     int gate = -1;
 *     int fd = -1;
 * }
 * </pre>
 */
class INET_API SctpCommandReq : public ::inet::TagBase
{
  protected:
    int socketId = -1;
    int sid = -1;
    int numMsgs = 1;
    int ssn = -1;
    unsigned short sendUnordered = false;
    double prValue = 0;
    L3Address localAddr;
    L3Address remoteAddr;
    int localPort = -1;
    int remotePort = -1;
    int gate = -1;
    int fd = -1;

  private:
    void copy(const SctpCommandReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpCommandReq&);

  public:
    SctpCommandReq();
    SctpCommandReq(const SctpCommandReq& other);
    virtual ~SctpCommandReq();
    SctpCommandReq& operator=(const SctpCommandReq& other);
    virtual SctpCommandReq *dup() const override {return new SctpCommandReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSocketId() const;
    virtual void setSocketId(int socketId);
    virtual int getSid() const;
    virtual void setSid(int sid);
    virtual int getNumMsgs() const;
    virtual void setNumMsgs(int numMsgs);
    virtual int getSsn() const;
    virtual void setSsn(int ssn);
    virtual unsigned short getSendUnordered() const;
    virtual void setSendUnordered(unsigned short sendUnordered);
    virtual double getPrValue() const;
    virtual void setPrValue(double prValue);
    virtual const L3Address& getLocalAddr() const;
    virtual L3Address& getLocalAddrForUpdate() { return const_cast<L3Address&>(const_cast<SctpCommandReq*>(this)->getLocalAddr());}
    virtual void setLocalAddr(const L3Address& localAddr);
    virtual const L3Address& getRemoteAddr() const;
    virtual L3Address& getRemoteAddrForUpdate() { return const_cast<L3Address&>(const_cast<SctpCommandReq*>(this)->getRemoteAddr());}
    virtual void setRemoteAddr(const L3Address& remoteAddr);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort);
    virtual int getGate() const;
    virtual void setGate(int gate);
    virtual int getFd() const;
    virtual void setFd(int fd);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpCommandReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpCommandReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:76</tt> by nedtool.
 * <pre>
 * class SctpSendReq extends SctpCommandReq
 * {
 *     unsigned int prMethod;
 *     bool last;
 *     unsigned int ppid = 0;
 *     bool primary = true;
 *     bool sackNow = false;
 * }
 * </pre>
 */
class INET_API SctpSendReq : public ::inet::SctpCommandReq
{
  protected:
    unsigned int prMethod = 0;
    bool last = false;
    unsigned int ppid = 0;
    bool primary = true;
    bool sackNow = false;

  private:
    void copy(const SctpSendReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpSendReq&);

  public:
    SctpSendReq();
    SctpSendReq(const SctpSendReq& other);
    virtual ~SctpSendReq();
    SctpSendReq& operator=(const SctpSendReq& other);
    virtual SctpSendReq *dup() const override {return new SctpSendReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getPrMethod() const;
    virtual void setPrMethod(unsigned int prMethod);
    virtual bool getLast() const;
    virtual void setLast(bool last);
    virtual unsigned int getPpid() const;
    virtual void setPpid(unsigned int ppid);
    virtual bool getPrimary() const;
    virtual void setPrimary(bool primary);
    virtual bool getSackNow() const;
    virtual void setSackNow(bool sackNow);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpSendReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpSendReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:85</tt> by nedtool.
 * <pre>
 * class SctpOpenReq extends SctpCommandReq
 * {
 *     AddressVector localAddresses;
 *     AddressVector remoteAddresses;
 *     bool fork = false;               // used only for passive open
 *     string queueClass = "SctpQueue"; // may be left empty
 *     string sctpAlgorithmClass;       // may be left empty
 *     uint32 inboundStreams;
 *     uint32 outboundStreams;
 *     bool streamReset;
 *     bool appLimited;
 *     int prMethod;
 *     uint32 numRequests;
 *     uint32 messagesToPush;
 * }
 * </pre>
 */
class INET_API SctpOpenReq : public ::inet::SctpCommandReq
{
  protected:
    AddressVector localAddresses;
    AddressVector remoteAddresses;
    bool fork = false;
    omnetpp::opp_string queueClass = "SctpQueue";
    omnetpp::opp_string sctpAlgorithmClass;
    uint32_t inboundStreams = 0;
    uint32_t outboundStreams = 0;
    bool streamReset = false;
    bool appLimited = false;
    int prMethod = 0;
    uint32_t numRequests = 0;
    uint32_t messagesToPush = 0;

  private:
    void copy(const SctpOpenReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpOpenReq&);

  public:
    SctpOpenReq();
    SctpOpenReq(const SctpOpenReq& other);
    virtual ~SctpOpenReq();
    SctpOpenReq& operator=(const SctpOpenReq& other);
    virtual SctpOpenReq *dup() const override {return new SctpOpenReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const AddressVector& getLocalAddresses() const;
    virtual AddressVector& getLocalAddressesForUpdate() { return const_cast<AddressVector&>(const_cast<SctpOpenReq*>(this)->getLocalAddresses());}
    virtual void setLocalAddresses(const AddressVector& localAddresses);
    virtual const AddressVector& getRemoteAddresses() const;
    virtual AddressVector& getRemoteAddressesForUpdate() { return const_cast<AddressVector&>(const_cast<SctpOpenReq*>(this)->getRemoteAddresses());}
    virtual void setRemoteAddresses(const AddressVector& remoteAddresses);
    virtual bool getFork() const;
    virtual void setFork(bool fork);
    virtual const char * getQueueClass() const;
    virtual void setQueueClass(const char * queueClass);
    virtual const char * getSctpAlgorithmClass() const;
    virtual void setSctpAlgorithmClass(const char * sctpAlgorithmClass);
    virtual uint32_t getInboundStreams() const;
    virtual void setInboundStreams(uint32_t inboundStreams);
    virtual uint32_t getOutboundStreams() const;
    virtual void setOutboundStreams(uint32_t outboundStreams);
    virtual bool getStreamReset() const;
    virtual void setStreamReset(bool streamReset);
    virtual bool getAppLimited() const;
    virtual void setAppLimited(bool appLimited);
    virtual int getPrMethod() const;
    virtual void setPrMethod(int prMethod);
    virtual uint32_t getNumRequests() const;
    virtual void setNumRequests(uint32_t numRequests);
    virtual uint32_t getMessagesToPush() const;
    virtual void setMessagesToPush(uint32_t messagesToPush);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpOpenReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpOpenReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:101</tt> by nedtool.
 * <pre>
 * class SctpAvailableReq extends SctpCommandReq
 * {
 *     int newSocketId;
 * }
 * </pre>
 */
class INET_API SctpAvailableReq : public ::inet::SctpCommandReq
{
  protected:
    int newSocketId = 0;

  private:
    void copy(const SctpAvailableReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpAvailableReq&);

  public:
    SctpAvailableReq();
    SctpAvailableReq(const SctpAvailableReq& other);
    virtual ~SctpAvailableReq();
    SctpAvailableReq& operator=(const SctpAvailableReq& other);
    virtual SctpAvailableReq *dup() const override {return new SctpAvailableReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getNewSocketId() const;
    virtual void setNewSocketId(int newSocketId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpAvailableReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpAvailableReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:106</tt> by nedtool.
 * <pre>
 * class SctpConnectReq extends SctpCommandReq
 * {
 *     AddressVector remoteAddresses;
 *     int status;
 *     int inboundStreams;
 *     int outboundStreams;
 * }
 * </pre>
 */
class INET_API SctpConnectReq : public ::inet::SctpCommandReq
{
  protected:
    AddressVector remoteAddresses;
    int status = 0;
    int inboundStreams = 0;
    int outboundStreams = 0;

  private:
    void copy(const SctpConnectReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpConnectReq&);

  public:
    SctpConnectReq();
    SctpConnectReq(const SctpConnectReq& other);
    virtual ~SctpConnectReq();
    SctpConnectReq& operator=(const SctpConnectReq& other);
    virtual SctpConnectReq *dup() const override {return new SctpConnectReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const AddressVector& getRemoteAddresses() const;
    virtual AddressVector& getRemoteAddressesForUpdate() { return const_cast<AddressVector&>(const_cast<SctpConnectReq*>(this)->getRemoteAddresses());}
    virtual void setRemoteAddresses(const AddressVector& remoteAddresses);
    virtual int getStatus() const;
    virtual void setStatus(int status);
    virtual int getInboundStreams() const;
    virtual void setInboundStreams(int inboundStreams);
    virtual int getOutboundStreams() const;
    virtual void setOutboundStreams(int outboundStreams);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpConnectReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpConnectReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:114</tt> by nedtool.
 * <pre>
 * class SctpRcvReq extends SctpCommandReq
 * {
 *     uint32 ppid;
 *     uint32 tsn;
 *     uint32 cumTsn;
 * }
 * </pre>
 */
class INET_API SctpRcvReq : public ::inet::SctpCommandReq
{
  protected:
    uint32_t ppid = 0;
    uint32_t tsn = 0;
    uint32_t cumTsn = 0;

  private:
    void copy(const SctpRcvReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpRcvReq&);

  public:
    SctpRcvReq();
    SctpRcvReq(const SctpRcvReq& other);
    virtual ~SctpRcvReq();
    SctpRcvReq& operator=(const SctpRcvReq& other);
    virtual SctpRcvReq *dup() const override {return new SctpRcvReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getPpid() const;
    virtual void setPpid(uint32_t ppid);
    virtual uint32_t getTsn() const;
    virtual void setTsn(uint32_t tsn);
    virtual uint32_t getCumTsn() const;
    virtual void setCumTsn(uint32_t cumTsn);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpRcvReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpRcvReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:121</tt> by nedtool.
 * <pre>
 * class SctpStatusReq extends SctpCommandReq
 * {
 *     int state;
 *     string stateName;
 *     L3Address pathId;
 *     bool active;
 * }
 * </pre>
 */
class INET_API SctpStatusReq : public ::inet::SctpCommandReq
{
  protected:
    int state = 0;
    omnetpp::opp_string stateName;
    L3Address pathId;
    bool active = false;

  private:
    void copy(const SctpStatusReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpStatusReq&);

  public:
    SctpStatusReq();
    SctpStatusReq(const SctpStatusReq& other);
    virtual ~SctpStatusReq();
    SctpStatusReq& operator=(const SctpStatusReq& other);
    virtual SctpStatusReq *dup() const override {return new SctpStatusReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getState() const;
    virtual void setState(int state);
    virtual const char * getStateName() const;
    virtual void setStateName(const char * stateName);
    virtual const L3Address& getPathId() const;
    virtual L3Address& getPathIdForUpdate() { return const_cast<L3Address&>(const_cast<SctpStatusReq*>(this)->getPathId());}
    virtual void setPathId(const L3Address& pathId);
    virtual bool getActive() const;
    virtual void setActive(bool active);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpStatusReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpStatusReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:129</tt> by nedtool.
 * <pre>
 * class SctpResetReq extends SctpCommandReq
 * {
 *     unsigned short requestType = 0;
 *     uint16 instreams = 0;
 *     uint16 outstreams = 0;
 *     uint16 streams[];
 * }
 * </pre>
 */
class INET_API SctpResetReq : public ::inet::SctpCommandReq
{
  protected:
    unsigned short requestType = 0;
    uint16_t instreams = 0;
    uint16_t outstreams = 0;
    uint16_t *streams = nullptr;
    size_t streams_arraysize = 0;

  private:
    void copy(const SctpResetReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpResetReq&);

  public:
    SctpResetReq();
    SctpResetReq(const SctpResetReq& other);
    virtual ~SctpResetReq();
    SctpResetReq& operator=(const SctpResetReq& other);
    virtual SctpResetReq *dup() const override {return new SctpResetReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getRequestType() const;
    virtual void setRequestType(unsigned short requestType);
    virtual uint16_t getInstreams() const;
    virtual void setInstreams(uint16_t instreams);
    virtual uint16_t getOutstreams() const;
    virtual void setOutstreams(uint16_t outstreams);
    virtual void setStreamsArraySize(size_t size);
    virtual size_t getStreamsArraySize() const;
    virtual uint16_t getStreams(size_t k) const;
    virtual void setStreams(size_t k, uint16_t streams);
    virtual void insertStreams(uint16_t streams);
    virtual void insertStreams(size_t k, uint16_t streams);
    virtual void eraseStreams(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpResetReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpResetReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:137</tt> by nedtool.
 * <pre>
 * class SctpInfoReq extends SctpCommandReq
 * {
 *     int text = 0;
 * }
 * </pre>
 */
class INET_API SctpInfoReq : public ::inet::SctpCommandReq
{
  protected:
    int text = 0;

  private:
    void copy(const SctpInfoReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpInfoReq&);

  public:
    SctpInfoReq();
    SctpInfoReq(const SctpInfoReq& other);
    virtual ~SctpInfoReq();
    SctpInfoReq& operator=(const SctpInfoReq& other);
    virtual SctpInfoReq *dup() const override {return new SctpInfoReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getText() const;
    virtual void setText(int text);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpInfoReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpInfoReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:142</tt> by nedtool.
 * <pre>
 * class SctpPathInfoReq extends SctpCommandReq
 * {
 *     L3Address remoteAddress;
 * }
 * </pre>
 */
class INET_API SctpPathInfoReq : public ::inet::SctpCommandReq
{
  protected:
    L3Address remoteAddress;

  private:
    void copy(const SctpPathInfoReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpPathInfoReq&);

  public:
    SctpPathInfoReq();
    SctpPathInfoReq(const SctpPathInfoReq& other);
    virtual ~SctpPathInfoReq();
    SctpPathInfoReq& operator=(const SctpPathInfoReq& other);
    virtual SctpPathInfoReq *dup() const override {return new SctpPathInfoReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getRemoteAddress() const;
    virtual L3Address& getRemoteAddressForUpdate() { return const_cast<L3Address&>(const_cast<SctpPathInfoReq*>(this)->getRemoteAddress());}
    virtual void setRemoteAddress(const L3Address& remoteAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpPathInfoReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpPathInfoReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:147</tt> by nedtool.
 * <pre>
 * class SctpRtoReq extends SctpCommandReq
 * {
 *     double rtoInitial;
 *     double rtoMin;
 *     double rtoMax;
 * }
 * </pre>
 */
class INET_API SctpRtoReq : public ::inet::SctpCommandReq
{
  protected:
    double rtoInitial = 0;
    double rtoMin = 0;
    double rtoMax = 0;

  private:
    void copy(const SctpRtoReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpRtoReq&);

  public:
    SctpRtoReq();
    SctpRtoReq(const SctpRtoReq& other);
    virtual ~SctpRtoReq();
    SctpRtoReq& operator=(const SctpRtoReq& other);
    virtual SctpRtoReq *dup() const override {return new SctpRtoReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual double getRtoInitial() const;
    virtual void setRtoInitial(double rtoInitial);
    virtual double getRtoMin() const;
    virtual void setRtoMin(double rtoMin);
    virtual double getRtoMax() const;
    virtual void setRtoMax(double rtoMax);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpRtoReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpRtoReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:154</tt> by nedtool.
 * <pre>
 * class SctpSendQueueAbatedReq extends SctpCommandReq
 * {
 *     uint64 bytesAvailable;
 *     uint64 bytesQueued;
 *     uint64 bytesLimit;
 *     uint64 queuedForStream[];
 * }
 * </pre>
 */
class INET_API SctpSendQueueAbatedReq : public ::inet::SctpCommandReq
{
  protected:
    uint64_t bytesAvailable = 0;
    uint64_t bytesQueued = 0;
    uint64_t bytesLimit = 0;
    uint64_t *queuedForStream = nullptr;
    size_t queuedForStream_arraysize = 0;

  private:
    void copy(const SctpSendQueueAbatedReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpSendQueueAbatedReq&);

  public:
    SctpSendQueueAbatedReq();
    SctpSendQueueAbatedReq(const SctpSendQueueAbatedReq& other);
    virtual ~SctpSendQueueAbatedReq();
    SctpSendQueueAbatedReq& operator=(const SctpSendQueueAbatedReq& other);
    virtual SctpSendQueueAbatedReq *dup() const override {return new SctpSendQueueAbatedReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint64_t getBytesAvailable() const;
    virtual void setBytesAvailable(uint64_t bytesAvailable);
    virtual uint64_t getBytesQueued() const;
    virtual void setBytesQueued(uint64_t bytesQueued);
    virtual uint64_t getBytesLimit() const;
    virtual void setBytesLimit(uint64_t bytesLimit);
    virtual void setQueuedForStreamArraySize(size_t size);
    virtual size_t getQueuedForStreamArraySize() const;
    virtual uint64_t getQueuedForStream(size_t k) const;
    virtual void setQueuedForStream(size_t k, uint64_t queuedForStream);
    virtual void insertQueuedForStream(uint64_t queuedForStream);
    virtual void insertQueuedForStream(size_t k, uint64_t queuedForStream);
    virtual void eraseQueuedForStream(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpSendQueueAbatedReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpSendQueueAbatedReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/sctp/SctpCommand.msg:162</tt> by nedtool.
 * <pre>
 * class SctpPathInfo extends cNamedObject
 * {
 *     L3Address remoteAddress;
 * }
 * </pre>
 */
class INET_API SctpPathInfo : public ::omnetpp::cNamedObject
{
  protected:
    L3Address remoteAddress;

  private:
    void copy(const SctpPathInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SctpPathInfo&);

  public:
    SctpPathInfo(const char *name=nullptr);
    SctpPathInfo(const SctpPathInfo& other);
    virtual ~SctpPathInfo();
    SctpPathInfo& operator=(const SctpPathInfo& other);
    virtual SctpPathInfo *dup() const override {return new SctpPathInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getRemoteAddress() const;
    virtual L3Address& getRemoteAddressForUpdate() { return const_cast<L3Address&>(const_cast<SctpPathInfo*>(this)->getRemoteAddress());}
    virtual void setRemoteAddress(const L3Address& remoteAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SctpPathInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SctpPathInfo& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_SCTPCOMMAND_M_H

