/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString;

@interface BKSApplicationDeactivationSettings : NSObject <NSCopying, BKSXPCCoding> {
    BOOL _animated;
    BOOL _underLock;
    BOOL _flip;
    BOOL _crossfade;
    NSString *_contextInfo;
}

@property(copy) NSString * contextInfo;
@property BOOL animated;
@property BOOL underLock;
@property BOOL flip;
@property BOOL crossfade;


- (void)setContextInfo:(id)arg1;
- (void)setCrossfade:(BOOL)arg1;
- (void)setUnderLock:(BOOL)arg1;
- (BOOL)crossfade;
- (BOOL)underLock;
- (id)contextInfo;
- (void)setFlip:(BOOL)arg1;
- (BOOL)flip;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)animated;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
