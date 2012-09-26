/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDistantObject : NSProxy <NSCoding> {
    id _knownSelectors;
    unsigned int _wireCount;
    unsigned int _refCount;
    id _proto;
    unsigned short ___2;
    unsigned char ___1;
    unsigned char _wireType;
    id _remoteClass;
}

+ (void)initialize;
+ (id)newDistantObjectWithCoder:(id)arg1;
+ (id)proxyWithLocal:(id)arg1 connection:(id)arg2;
+ (id)proxyWithTarget:(id)arg1 connection:(id)arg2;
+ (void)_enableLogging:(BOOL)arg1;

- (Class)class;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)appendFormat:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)mutableCopy;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (id)copy;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)protocolForProxy;
- (void)setProtocolForProxy:(id)arg1;
- (id)connectionForProxy;
- (id)initWithLocal:(id)arg1 connection:(id)arg2;
- (id)initWithTarget:(id)arg1 connection:(id)arg2;
- (void)retainWireCount;
- (void)_releaseWireCount:(unsigned int)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (struct _NSZone { }*)zone;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
