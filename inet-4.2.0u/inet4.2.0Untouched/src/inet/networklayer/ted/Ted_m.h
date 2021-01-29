//
// Generated file, do not edit! Created by nedtool 5.6 from ./inet/networklayer/ted/Ted.msg.
//

#ifndef __INET_TED_M_H
#define __INET_TED_M_H

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

struct TeLinkStateInfo;
class TedChangeInfo;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/networklayer/contract/ipv4/Ipv4Address_m.h" // import inet.networklayer.contract.ipv4.Ipv4Address


namespace inet {

// cplusplus {{
typedef std::vector<struct TeLinkStateInfo> TeLinkStateInfoVector;
// }}

/**
 * Struct generated from .\inet/networklayer/ted/Ted.msg:29 by nedtool.
 */
struct INET_API TeLinkStateInfo
{
    TeLinkStateInfo();
    Ipv4Address advrouter;
    Ipv4Address linkid;
    Ipv4Address local;
    Ipv4Address remote;
    double metric;
    double MaxBandwidth;
    double UnResvBandwidth[8];
    omnetpp::simtime_t timestamp;
    unsigned int sourceId;
    unsigned int messageId;
    bool state;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const TeLinkStateInfo& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, TeLinkStateInfo& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TeLinkStateInfo& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TeLinkStateInfo& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>.\inet/networklayer/ted/Ted.msg:51</tt> by nedtool.
 * <pre>
 * //
 * // Data structure supplied with NF_TED_CHANGE signal.
 * // This triggers the link state protocol to send out up-to-date link state info
 * // about the given links.
 * //
 * class TedChangeInfo extends cObject
 * {
 *     int tedLinkIndices[];
 * }
 * </pre>
 */
class INET_API TedChangeInfo : public ::omnetpp::cObject
{
  protected:
    int *tedLinkIndices = nullptr;
    size_t tedLinkIndices_arraysize = 0;

  private:
    void copy(const TedChangeInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TedChangeInfo&);

  public:
    TedChangeInfo();
    TedChangeInfo(const TedChangeInfo& other);
    virtual ~TedChangeInfo();
    TedChangeInfo& operator=(const TedChangeInfo& other);
    virtual TedChangeInfo *dup() const override {return new TedChangeInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setTedLinkIndicesArraySize(size_t size);
    virtual size_t getTedLinkIndicesArraySize() const;
    virtual int getTedLinkIndices(size_t k) const;
    virtual void setTedLinkIndices(size_t k, int tedLinkIndices);
    virtual void insertTedLinkIndices(int tedLinkIndices);
    virtual void insertTedLinkIndices(size_t k, int tedLinkIndices);
    virtual void eraseTedLinkIndices(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TedChangeInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TedChangeInfo& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_TED_M_H

