/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable  {
    GEODownloadMetadata *_metadata;
    GEOSupportedTileSets *_tileSets;
}

@property(retain) GEOSupportedTileSets * tileSets;
@property(retain) GEODownloadMetadata * metadata;


- (id)tileSets;
- (void)setTileSets:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
