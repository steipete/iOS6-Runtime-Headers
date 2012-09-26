/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVWeakReference, AVAssetCache, NSURL;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property(readonly) NSURL * URL;
@property(getter=_formatReader,readonly) struct OpaqueFigFormatReader { }* formatReader;
@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) NSString * lyrics;
@property(getter=isPlayable,readonly) BOOL playable;
@property(getter=isExportable,readonly) BOOL exportable;
@property(getter=isReadable,readonly) BOOL readable;
@property(getter=isComposable,readonly) BOOL composable;
@property(getter=isCompatibleWithSavedPhotosAlbum,readonly) BOOL compatibleWithSavedPhotosAlbum;
@property(readonly) NSArray * chapterGroupInfo;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) NSURL * resolvedURL;
@property(readonly) NSURL * downloadDestinationURL;
@property(readonly) unsigned long long downloadToken;
@property(readonly) BOOL hasProtectedContent;
@property(getter=_isStreaming,readonly) BOOL streaming;
@property(readonly) unsigned int referenceRestrictions;
@property(getter=_weakReference,readonly) AVWeakReference * weakReference;

+ (void)initialize;

- (id)_mapFigErrorCodeToNSError:(long)arg1;
- (unsigned long long)downloadToken;
- (id)downloadDestinationURL;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (id)assetCache;
- (id)chapterGroupInfo;
- (id)resolvedURL;
- (id)assetInspector;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)hasProtectedContent;
- (id)lyrics;
- (unsigned int)referenceRestrictions;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (BOOL)_isStreaming;
- (struct OpaqueFigAsset { }*)_figAsset;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)_weakReference;
- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)URL;

@end
