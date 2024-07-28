#include <cstdio>
#include <string>
#define MAX_PKT 4
using namespace std;
typedef enum
{
    dat,
    ack,
    nak
} frameKind;

typedef enum
{
    wait,
    frameArrival
} eventType;

typedef struct
{
    unsigned char data[MAX_PKT];
} packet;

typedef struct
{
    packet *info;
    frameKind kind;
    unsigned int seq;
    unsigned int ack;
} frame;
class Protocol
{
public:
    int sentSeq;
    int receivedSeq;
    packet dataPacket;
    frame senderFrame,
        receiverFrame;
    Protocol()
    {
        sentSeq = receivedSeq = -1;
    }
    int waitForEvent(eventType e)
    {
        return e == frameArrival;
    }
    string showkind(frameKind k)
    //display the event type
    {
        switch (k)
        {
        case dat:
            return "data";
            break;
        case ack:
            return "ack";
            break;
        case nak:
            return "nak";
            break;
        }
        return "";
    }
    void fromNetworkLayer(packet &i)
    {
        printf("\nEncapsulating Packet<data='%s'> ...", i.data);
        senderFrame.seq = ++sentSeq;
        senderFrame.kind = dat;
        senderFrame.info = &i;
    }
    void toPhysicalLayer(frame &f)
    {
        if (f.kind == dat)
            printf("\nSendingDataFrame<kind=%s, sequence=%i> to Physical Layer ...", showkind(f.kind).c_str(), f.seq);
        else
            printf("\nSendingControlFrame<kind=%s, ack=%i> to Physical Layer ...", showkind(f.kind).c_str(), f.ack);
    }
    void fromPhysicalLayer(frame &f)
    {
        printf("\nReceivedDataFrame<kind=%s, sequence=%i> from Physical Layer ...", showkind(f.kind).c_str(), f.seq);
        printf("\nValidating Sequence Number ... ");
        if (receivedSeq != f.seq)
            printf("\nDecapsulating Frame ...");
        else
        {
            printf("\nDuplicate Frame Encountered ...");
            printf("\nDiscarding Frame ...");
        }
    }
    void toNetworkLayer(packet &p)
    {
        printf("\nSending Packet<data='%s'> to Network Layer ...", p.data);
        receivedSeq = senderFrame.seq;
        receiverFrame.seq = 0;
        receiverFrame.kind = ack;
        receiverFrame.ack = senderFrame.seq + 1;
    }
};