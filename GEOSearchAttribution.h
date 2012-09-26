/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable  {
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(retain) NSString * sourceIdentifier;
@property unsigned int sourceVersion;
@property(retain) NSMutableArray * attributionURLs;


- (id)attributionURLs;
- (id)attributionURLsAtIndex:(unsigned int)arg1;
- (void)clearAttributionURLs;
- (unsigned int)attributionURLsCount;
- (void)addAttributionURLs:(id)arg1;
- (void)setAttributionURLs:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (unsigned int)sourceVersion;
- (id)sourceIdentifier;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
