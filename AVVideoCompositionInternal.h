/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionCoreAnimationTool, NSString, NSArray;

@interface AVVideoCompositionInternal : NSObject  {
    NSString *compositor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } frameDuration;
    struct CGSize { 
        float width; 
        float height; 
    } renderSize;
    float renderScale;
    NSArray *instructions;
    BOOL auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool *animationTool;
}



@end
