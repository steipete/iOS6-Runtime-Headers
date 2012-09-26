/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
    NSString *_accountID;
    int _dataclass;
}

@property(readonly) NSString * accountID;
@property(readonly) int dataclass;


- (id)initWithAccountID:(id)arg1 andDataclass:(int)arg2;
- (int)dataclass;
- (id)accountID;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
