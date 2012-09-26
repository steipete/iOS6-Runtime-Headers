/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
    NSDictionary *_adaptedVideoCompressionProperties;
}

@property(readonly) unsigned long videoCodecType;
@property(readonly) NSDictionary * videoEncoderSpecification;
@property(readonly) NSDictionary * videoCompressionProperties;

+ (BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;
- (BOOL)isCodecAvailableOnCurrentSystem;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (id)videoCompressionProperties;
- (id)videoEncoderSpecification;
- (unsigned long)videoCodecType;
- (BOOL)willYieldCompressedSamples;
- (int)height;
- (int)width;
- (void)dealloc;

@end
