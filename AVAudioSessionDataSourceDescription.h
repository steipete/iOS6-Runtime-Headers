/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSNumber, NSString;

@interface AVAudioSessionDataSourceDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSNumber * dataSourceID;
@property(readonly) NSString * dataSourceName;

+ (id)privateCreateSourceDescriptionsArrayWithCFArray:(struct __CFArray { }*)arg1 forInput:(BOOL)arg2;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary { }*)arg1 forInput:(BOOL)arg2;

- (id)dataSourceName;
- (id)dataSourceID;
- (struct DataSourceDescriptionImpl { id x1; id x2; }*)privateGetImplementation;
- (id)init;
- (void)dealloc;
- (id)description;

@end
