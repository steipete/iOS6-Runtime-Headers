/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableSet;

@interface GEOTileSourceCallbacks : NSObject  {
    NSMutableSet *_callbacks;
    BOOL _allowNetwork;
}

@property(readonly) NSMutableSet * callbacks;
@property BOOL allowNetwork;


- (void)setAllowNetwork:(BOOL)arg1;
- (BOOL)allowNetwork;
- (id)callbacks;
- (id)init;
- (void)dealloc;
- (id)description;

@end
