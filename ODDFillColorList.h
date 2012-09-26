/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray;

@interface ODDFillColorList : NSObject  {
    NSArray *mColors;
    int mHueDirection;
    int mMethod;
}


- (void)getComponentsForIndex:(unsigned int)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5;
- (void)setHueDirection:(int)arg1;
- (id)spanColorAtIndex:(unsigned int)arg1 count:(unsigned int)arg2 state:(id)arg3;
- (id)repeatColorAtIndex:(unsigned int)arg1;
- (id)cycleColorAtIndex:(unsigned int)arg1;
- (id)colorAtIndex:(unsigned int)arg1 count:(unsigned int)arg2 state:(id)arg3;
- (void)setMethod:(int)arg1;
- (void)dealloc;
- (void)setColors:(id)arg1;

@end
