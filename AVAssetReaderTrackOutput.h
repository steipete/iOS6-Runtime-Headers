/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, AVAssetReaderTrackOutputInternal, AVAssetTrack;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput  {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property(readonly) AVAssetTrack * track;
@property(readonly) NSDictionary * outputSettings;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;

- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)track;
- (id)_figAssetReaderExtractionOptions;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (BOOL)_trimsSampleDurations;
- (id)_asset;
- (id)outputSettings;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)description;

@end
