/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray;

@interface AVAudioSessionRouteDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;

+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary { }*)arg1;

- (struct RouteDescriptionImpl { id x1; id x2; }*)privateGetImplementation;
- (id)inputs;
- (id)outputs;
- (id)init;
- (void)dealloc;
- (id)description;

@end
