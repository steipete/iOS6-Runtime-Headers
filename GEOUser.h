/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOPhoto;

@interface GEOUser : PBCodable  {
    GEOPhoto *_image;
    NSString *_name;
}

@property(readonly) BOOL hasName;
@property(retain) NSString * name;
@property(readonly) BOOL hasImage;
@property(retain) GEOPhoto * image;


- (BOOL)hasImage;
- (BOOL)hasName;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setName:(id)arg1;

@end
