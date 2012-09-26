/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchSubstring : PBCodable  {
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property int stringType;
@property int beginIndex;
@property int endIndex;


- (void)setEndIndex:(int)arg1;
- (int)endIndex;
- (void)setBeginIndex:(int)arg1;
- (int)beginIndex;
- (void)setStringType:(int)arg1;
- (int)stringType;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
