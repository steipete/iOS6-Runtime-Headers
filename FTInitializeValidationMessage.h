/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData;

@interface FTInitializeValidationMessage : FTMessage <NSCopying> {
    NSData *_sessionInfoRequest;
    NSData *_responseSessionInfo;
    NSNumber *_responseTTL;
    NSData *_pushToken;
}

@property(copy) NSData * sessionInfoRequest;
@property(copy) NSData * pushToken;
@property(copy) NSData * responseSessionInfo;
@property(copy) NSNumber * responseTTL;


- (void)setResponseTTL:(id)arg1;
- (id)responseTTL;
- (void)setResponseSessionInfo:(id)arg1;
- (id)responseSessionInfo;
- (void)setSessionInfoRequest:(id)arg1;
- (id)sessionInfoRequest;
- (void)setPushToken:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)bagKey;
- (int)responseCommand;
- (int)command;
- (id)pushToken;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (id)messageBody;
- (BOOL)wantsBinaryPush;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
