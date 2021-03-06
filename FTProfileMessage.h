/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString;

@interface FTProfileMessage : FTMessage <NSCopying> {
    NSData *_pushCert;
    struct __SecKey { } *_pushKey;
    struct __SecKey { } *_pushPublicKey;
    NSData *_pushToken;
    NSString *_authToken;
    NSString *_profileID;
}

@property(copy) NSString * profileID;
@property(copy) NSString * authToken;
@property struct __SecKey { }* pushPrivateKey;
@property struct __SecKey { }* pushPublicKey;
@property(copy) NSData * pushCertificate;
@property(copy) NSData * pushToken;


- (void)setPushToken:(id)arg1;
- (void)setPushPublicKey:(struct __SecKey { }*)arg1;
- (void)setPushPrivateKey:(struct __SecKey { }*)arg1;
- (void)setPushCertificate:(id)arg1;
- (void)setProfileID:(id)arg1;
- (id)profileID;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (int)command;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (id)pushToken;
- (id)pushCertificate;
- (struct __SecKey { }*)pushPublicKey;
- (struct __SecKey { }*)pushPrivateKey;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBinaryPush;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
