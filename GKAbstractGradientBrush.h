/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGradient;

@interface GKAbstractGradientBrush : GKImageBrush  {
    GKGradient *_gradient;
    int _blendMode;
}

@property(retain) GKGradient * gradient;
@property int blendMode;


- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)dealloc;

@end
