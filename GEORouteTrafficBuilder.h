/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject  {
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}


- (void)addTrafficFromETARoute:(id)arg1;
- (void)_removeDuplicateTraffic;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)copyTrafficToRoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)init;
- (void)dealloc;

@end
