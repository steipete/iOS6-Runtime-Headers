/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3  {
    long long _currentRevision;
}

+ (id)_localizedCloudGeniusErrorForError:(id)arg1;
+ (id)_localizedGeniusErrorForError:(id)arg1;
+ (BOOL)_isGeniusEnabled;

- (id)initWithLibrary:(id)arg1;
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 completionBlock:(id)arg4;
- (id)_cacheIDForItemIdentifier:(long long)arg1 atPlaybackTime:(double)arg2;
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned int)arg1 artworkCacheID:(id)arg2 completionBlock:(id)arg3;
- (id)_cacheIDForItemIdentifier:(long long)arg1;
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithArtworkCacheID:(id)arg2 completionBlock:(id)arg3;
- (void)updateEntitesToCurrentRevision;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned int*)arg2 error:(id*)arg3;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned int)arg2 error:(id*)arg3;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadCoverFlowArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestTimedArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestTimedArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithArtworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 completionBlock:(id)arg4;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)arg1;
- (BOOL)supportsEntityChangeTracking;
- (id)errorResolverForMediaItem:(id)arg1;
- (BOOL)isGeniusEnabled;
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)arg1 otherItemWithIdentifier:(long long)arg2 compareRepresentativeItemArtwork:(BOOL)arg3 missingAlwaysComparesEqual:(BOOL)arg4;

@end
