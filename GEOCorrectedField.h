/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOCorrectedField : PBCodable  {
    NSString *_correctedValue;
    NSString *_displayName;
    NSString *_objectName;
}

@property(retain) NSString * displayName;
@property(readonly) BOOL hasObjectName;
@property(retain) NSString * objectName;
@property(readonly) BOOL hasCorrectedValue;
@property(retain) NSString * correctedValue;


- (id)correctedValue;
- (BOOL)hasCorrectedValue;
- (id)objectName;
- (BOOL)hasObjectName;
- (void)setCorrectedValue:(id)arg1;
- (void)setObjectName:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
