/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSData;

@interface GKMatchPacket : NSObject  {
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    BOOL _valid;
    NSData *_data;
}

@property unsigned char version;
@property unsigned char packetType;
@property unsigned int sequenceNumber;
@property unsigned int totalLength;
@property unsigned short checksum;
@property BOOL valid;
@property(retain) NSData * data;


- (void)setChecksum:(unsigned short)arg1;
- (unsigned short)checksum;
- (unsigned char)packetType;
- (id)initWithMessage:(id)arg1;
- (unsigned int)totalLength;
- (void)setTotalLength:(unsigned int)arg1;
- (void)setPacketType:(unsigned char)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;
- (void)setValid:(BOOL)arg1;
- (id)message;
- (id)init;
- (void)dealloc;
- (id)data;
- (BOOL)valid;
- (void)setData:(id)arg1;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;

@end
