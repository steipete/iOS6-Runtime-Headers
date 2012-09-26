/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSCache, NSString, GKImageBrush;

@interface GKImageSource : NSObject <NSCacheDelegate> {
    NSCache *_cache;
    NSString *_name;
    GKImageBrush *_imageBrush;
    UIImage *_defaultImage;
    UIImage *_renderedDefaultImage;
    BOOL _shouldRenderDefaultImageWithBrush;
}

@property(readonly) NSString * name;
@property(readonly) GKImageBrush * imageBrush;
@property(retain) UIImage * defaultImage;
@property(retain) UIImage * renderedDefaultImage;
@property BOOL shouldRenderDefaultImageWithBrush;
@property NSCache * cache;

+ (void)clearCache;
+ (id)syncQueue;
+ (id)cacheDirectoryForImageID:(id)arg1;
+ (id)sharedCache;

- (void)setShouldRenderDefaultImageWithBrush:(BOOL)arg1;
- (void)setDefaultImage:(id)arg1;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (unsigned int)cacheCostForImage:(id)arg1;
- (void)validateFileSystemCache;
- (id)fastCachedImageForKey:(id)arg1;
- (id)keyForImageIdentifier:(id)arg1;
- (id)renderedTestImage;
- (BOOL)shouldUseTestImage;
- (void)setRenderedDefaultImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1;
- (BOOL)shouldRenderDefaultImageWithBrush;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize { float x1; float x2; })arg2 returnContext:(id*)arg3;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;
- (void)didReceiveCacheInvalidation:(id)arg1;
- (id)imageBrush;
- (id)subsourceWithBrush:(id)arg1;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)defaultImage;
- (id)renderedDefaultImage;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)cache;
- (void)dealloc;
- (id)name;
- (void)setCache:(id)arg1;

@end
