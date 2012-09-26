/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSOperationQueue, NSObject<OS_dispatch_queue>, CPLRUDictionary, <MPImageCacheDelegate>;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
    CPLRUDictionary *_cachedImages;
    NSObject<OS_dispatch_queue> *_cachedImagesQueue;
    unsigned int _cacheSize;
    <MPImageCacheDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    int _retainCount;
    int _resumeToForegroundCacheSize;
    int _suspendToBackgroundCacheSize;
    id _libraryDisplayValueChangeObserver;
}

@property unsigned int cacheSize;
@property BOOL imageRequestsSuspended;
@property <MPImageCacheDelegate> * delegate;
@property id libraryDisplayValueChangeObserver;


- (unsigned int)cacheSize;
- (id)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)_removeCachedImageForKey:(id)arg1;
- (BOOL)imageRequestsSuspended;
- (id)cachedImageForRequest:(id)arg1;
- (id)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2 waitUntilFetched:(BOOL)arg3;
- (void)_zapCache;
- (void)imageRequest:(id)arg1 loadedImage:(id)arg2;
- (void)imageRequest:(id)arg1 failedWithError:(id)arg2;
- (void)setCacheSize:(unsigned int)arg1 preserveExisting:(BOOL)arg2;
- (void)_enqueueRequest:(id)arg1;
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)arg1;
- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (id)libraryDisplayValueChangeObserver;
- (void)setLibraryDisplayValueChangeObserver:(id)arg1;
- (void)_zapCachedPlaceholders;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)setCacheSize:(unsigned int)arg1;
- (id)imageForRequest:(id)arg1 error:(id*)arg2;
- (void)setImageRequestsSuspended:(BOOL)arg1;
- (void)cancelAllImageRequests;
- (void)loadImageForRequest:(id)arg1 asynchronously:(BOOL)arg2 completionHandler:(id)arg3;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)_cachedImageForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
