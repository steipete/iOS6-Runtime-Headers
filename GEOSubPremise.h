/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOSubPremise : PBCodable  {
    NSString *_name;
    int _type;
}

@property int type;
@property(retain) NSString * name;


- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setType:(int)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)description;
- (int)type;
- (id)dictionaryRepresentation;
- (void)setName:(id)arg1;

@end
